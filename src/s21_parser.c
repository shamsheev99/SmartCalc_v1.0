#include "s21_parser.h"

#include <string.h>
#define NUMBERS "0123456789."
#define OPERATIONS "+-*/^"
#define MINUS '-'
#define PLUS '+'
#define BRACES "()"
#define OPTS "+-*/^()"
#define SUCCESS 0
#define FAILURE 1

void push_number_to_stack(calc_t data, stackk_t **input, double numbers) {
  data.numbers = numbers;
  data.priority = 0;
  data.type = NUMBER;
  stack_push(input, data);
}

void push_operation_to_stack(calc_t data, stackk_t **input, char symbols) {
  if (strrchr("+-", symbols) != NULL)
    data.priority = 1;
  else if (strrchr("*/", symbols) != NULL)
    data.priority = 2;
  else if (strrchr("^m", symbols) != NULL)
    data.priority = 3;
  data.symbols = symbols;
  data.type = OPERATION;
  stack_push(input, data);
}

void push_brace_to_stack(calc_t data, stackk_t **input, char symbols) {
  data.priority = -1;
  data.type = BRACE;
  data.symbols = symbols;
  stack_push(input, data);
}

void push_function_to_stack(calc_t data, stackk_t **input, char symbols) {
  data.priority = 3;
  data.symbols = symbols;
  data.type = FUNCTION;
  stack_push(input, data);
}

void push_variable_to_stack(calc_t data, stackk_t **input, char symbols) {
  data.priority = 0;
  data.type = VARIABLE;
  data.symbols = symbols;
  stack_push(input, data);
}

int check_open_brace(char str) {
  int result = FAILURE;
  if (str == '(') {
    result = SUCCESS;
  }
  return result;
}

void parse_func(char **str, stackk_t **input, calc_t data, int *error) {
  switch (**str) {
    case 's':
      switch (*(++(*str))) {
        case 'i':
          if (*(++(*str)) == 'n' && check_open_brace(*(*str + 1)) == SUCCESS) {
            push_function_to_stack(data, input, 's');
          } else {
            *error = FAILURE;
            break;
          }
          break;
        case 'q':
          if (*(++(*str)) == 'r' && *(++(*str)) == 't' &&
              check_open_brace(*(*str + 1)) == SUCCESS) {
            push_function_to_stack(data, input, 'q');
          } else {
            *error = FAILURE;
            break;
          }
          break;
        default:
          *error = FAILURE;
          break;
      }
      break;
    case 'c':
      if (*((++(*str))) == 'o' && *(++(*str)) == 's' &&
          check_open_brace(*(*str + 1)) == SUCCESS) {
        push_function_to_stack(data, input, 'c');
      } else {
        *error = FAILURE;
        break;
      }
      break;
    case 't':
      if (*(++(*str)) == 'a' && *(++(*str)) == 'n' &&
          check_open_brace(*(*str + 1)) == SUCCESS) {
        push_function_to_stack(data, input, 't');
      } else {
        *error = FAILURE;
        break;
      }
      break;
    case 'a':
      switch (*(++(*str))) {
        case 's':
          if (*(++(*str)) == 'i' &&
              (*(++(*str)) == 'n' &&
               check_open_brace(*(*str + 1)) == SUCCESS)) {
            push_function_to_stack(data, input, 'z');
          } else {
            *error = FAILURE;
            break;
          }
          break;
        case 'c':
          if (*(++(*str)) == 'o' && *(++(*str)) == 's' &&
              check_open_brace(*(*str + 1)) == SUCCESS) {
            push_function_to_stack(data, input, 'k');
          } else {
            *error = FAILURE;
            break;
          }
          break;
        case 't':
          if (*(++(*str)) == 'a' && *(++(*str)) == 'n' &&
              check_open_brace(*(*str + 1)) == SUCCESS) {
            push_function_to_stack(data, input, 'd');
          } else {
            *error = FAILURE;
            break;
          }
          break;
        default:
        *error = FAILURE;
          break;
      }
      break;
    case 'l':
      switch (*(++(*str))) {
        case 'o':
          if (*(++(*str)) == 'g' && check_open_brace(*(*str + 1)) == SUCCESS) {
            push_function_to_stack(data, input, 'l');
          } else {
            *error = FAILURE;
          }
          break;
        case 'n':
          if (check_open_brace(*(*str + 1)) == SUCCESS) {
            push_function_to_stack(data, input, 'n');
          } else {
            *error = FAILURE;
          }
          break;
        default:
          *error = FAILURE;
          break;
      }
      break;
    case 'x':
      push_variable_to_stack(data, input, 'x');
      break;
    case 'm':
      if (*(++(*str)) == 'o' && *(++(*str)) == 'd') {
        push_operation_to_stack(data, input, '%');
      } else {
        *error = FAILURE;
      }
      break;
    default:
      break;
  }
}

void parse_nums(char **str, stackk_t **input, calc_t data, int *error) {
  if (strrchr(NUMBERS, **str) != NULL) {
    char *tmp = *str;
    int count = 0;
    int dot = 0;
    while (strrchr(NUMBERS, **str) != NULL && **str != '\0') {
      if (**str == '.') dot++;
      if (dot > 1) {
        *error = FAILURE;
        break;
      }
      count++;
      (*str)++;
    }
    if (*error != FAILURE) {
      char buff[100] = {'\0'};
      strncpy(buff, tmp, count);
      sscanf(buff, "%lf", &data.numbers);
      push_number_to_stack(data, input, data.numbers);
    }
    (*str)--;
  }
}

int parse_plus(char **str, int length) {
  int result = FAILURE;
  if (**str == PLUS) {
    if (length == 0 || *(*str - 1) == '(') {
      result = SUCCESS;
    }
  }
  return result;
}

int parse_minus(char **str, stackk_t **input, calc_t data, int length) {
  int result = FAILURE;
  if (**str == MINUS) {
    if (length == 0 || *(*str - 1) == '(') {
      push_number_to_stack(data, input, -1.0);
      push_operation_to_stack(data, input, '*');
      result = SUCCESS;
    }
  }
  return result;
}

void parse_operations(char **str, stackk_t **input, calc_t data, const int *error,
                     int length, int *brace_open, int *brace_close ) {
  if (strrchr(OPERATIONS, **str) != NULL && **str != '\0') {
    if (parse_minus(str, input, data, length) == SUCCESS) {
    } else if (parse_plus(str, length) == SUCCESS) {
    } else if (*error != FAILURE) {
      push_operation_to_stack(data, input, **str);
    }
  } else if (strrchr(BRACES, **str) != NULL && **str != '\0') {
    if (*error != FAILURE) {
      if (**str == '(')
        (*brace_open)++;
      else if (**str == ')')
        (*brace_close)++;
      push_brace_to_stack(data, input, **str);
    }
  }
}

int parser(char *str, stackk_t **input, calc_t data) {
  int error = SUCCESS;
  int brace_open = 0;
  int brace_close = 0;
  char *tmp = str;
  while (*str != '\0' && error == SUCCESS) {
    int length = str - tmp;
    parse_nums(&str, input, data, &error);
    parse_operations(&str, input, data, &error, length, &brace_open, &brace_close);
    parse_func(&str, input, data, &error);
    if (error != SUCCESS) {
      stack_clear(input);
      break;
    }
    if (*(str + 1) == '\0') break;
    str++;
  }
  if (brace_open != brace_close) {
    error = FAILURE;
  }
  return error;
}

