#ifndef SRC_S21_PARSER_H_
#define SRC_S21_PARSER_H_

#include "s21_stack.h"
#define NUMBERS "0123456789."
#define OPERATIONS "+-*/^"
#define MINUS '-'
#define PLUS '+'
#define BRACES "()"
#define SUCCESS 0
#define FAILURE 1

void push_number_to_stack(calc_t data, stackk_t **input, double numbers);
void push_operation_to_stack(calc_t data, stackk_t **input, char symbols);
void push_function_to_stack(calc_t data, stackk_t **input, char symbols);
void push_brace_to_stack(calc_t data, stackk_t **input, char symbols);
void push_variable_to_stack(calc_t data, stackk_t **input, char symbols);
int check_open_brace(char str);
void parse_func(char **str, stackk_t **input, calc_t data, int *error);
void parse_nums(char **str, stackk_t **input, calc_t data, int *error);
int parse_plus(char **str, int length);
int parse_minus(char **str, stackk_t **input, calc_t data, int length);
void parse_operations(char **str, stackk_t **input, calc_t data, const int *error,
                     int length, int *brace_open, int *brace_close);
int parser(char *str, stackk_t **input, calc_t data);

#endif  // SRC_S21_PARSER_H_
