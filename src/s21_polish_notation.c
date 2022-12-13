#include "s21_polish_notation.h"

int polish_notation(stackk_t **data) {
  stackk_t *input = NULL;
  stackk_t *output = NULL;
  stackk_t *reverse = NULL;
  stack_push_to_stack(data, &reverse);
  int error = SUCCESS;
  while (reverse != NULL) {
    calc_t stackdata = stack_pop(&reverse);
    if (stackdata.type == NUMBER || stackdata.type == VARIABLE) {
      stack_push(&output, stackdata);
    } else if (stackdata.type == BRACE) {
      if (stackdata.symbols == '(') {
        stack_push(&input, stackdata);
      } else {
        calc_t tmp = stack_pop(&input);
        while (input != NULL && tmp.symbols != '(') {
          stack_push(&output, tmp);
          tmp = stack_pop(&input);
        }
      }
    } else if (stackdata.type == OPERATION || stackdata.type == FUNCTION) {
      if (input == NULL) {
        stack_push(&input, stackdata);
      } else if (input->stack_data.priority >= stackdata.priority) {
        while (input != NULL && input->stack_data.priority >= stackdata.priority)
          stack_push(&output, stack_pop(&input));
        stack_push(&input, stackdata);
      } else {
        stack_push(&input, stackdata);
      }
    }
  }
  while (input != NULL) {
    stack_push(&output, stack_pop(&input));
  }
  *data = output;
  stack_clear(&input);
  return error;
}

int check_oper(double *a, calc_t pop) {
  int result = FAILURE;
  if (pop.type == NUMBER) {
    result = SUCCESS;
    *a = pop.numbers;
  } else {
    *a = NAN;
  }
  return result;
}

double calc_notation(stackk_t **head, double x, int * error) {
  stackk_t *output = NULL;
  stackk_t *ptr = NULL;
  stack_copy(*head, &ptr);
  double a = NAN;
  double b = NAN;
  calc_t result;
  zero_data(&result);
  while (ptr != NULL && *error != FAILURE) {
    if (ptr->stack_data.type == NUMBER) {
      result.numbers = stack_pop(&ptr).numbers;
      result.type = NUMBER;
      stack_push(&output, result);
    } else if (ptr->stack_data.type == OPERATION) {
      if (check_oper(&a, stack_pop(&output)) == SUCCESS &&
          check_oper(&b, stack_pop(&output)) == SUCCESS) {
        switch (ptr->stack_data.symbols) {
          case '+':
            result.numbers = a + b;
            break;
          case '-':
            result.numbers = b - a;
            break;
          case '/':
            result.numbers = (double)b / (double)a;
            break;
          case '*':
            result.numbers = a * b;
            break;
          case '^':
            result.numbers = powf(b, a);
            break;
          case '%':
            result.numbers = fmod(b, a);
            break;
          default:
            *error = FAILURE;
            break;
        }
        stack_pop(&ptr);
        stack_push(&output, result);
      } else {
        *error = FAILURE;
        break;
      }
    } else if (ptr->stack_data.type == FUNCTION) {
      if (check_oper(&a, stack_pop(&output)) == SUCCESS) {
        switch (ptr->stack_data.symbols) {
          case 's':
            result.numbers = sin(a);
            break;
          case 'c':
            result.numbers = cos(a);
            break;
          case 't':
            result.numbers = tan(a);
            break;
          case 'z':
            result.numbers = asin(a);
            break;
          case 'k':
            result.numbers = acos(a);
            break;
          case 'd':
            result.numbers = atan(a);
            break;
          case 'l':
            result.numbers = log10(a);
            break;
          case 'n':
            result.numbers = log(a);
            break;
          case 'q':
            result.numbers = sqrt(a);
            break;
          default:
            *error = FAILURE;
            break;
        }
        stack_pop(&ptr);
        stack_push(&output, result);
      } else {
        *error = FAILURE;
        break;
      }
    } else if (ptr->stack_data.type == VARIABLE) {
      result.numbers = (double)x;
      result.type = NUMBER;
      stack_push(&output, result);
      stack_pop(&ptr);
    }
  }


      result = stack_pop(&output);
  if (output != NULL || result.type != NUMBER) {
    *error = FAILURE;
    result.numbers = NAN;
  }
  stack_clear(&output);
  stack_clear(&ptr);
  return result.numbers;
}
