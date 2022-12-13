#ifndef SRC_S21_POLISH_NOTATION_H_
#define SRC_S21_POLISH_NOTATION_H_
#include <math.h>

#include "s21_parser.h"

int polish_notation(stackk_t **data);
int check_oper(double *a, calc_t pop);
double calc_notation(stackk_t **head, double x, int * error);
#endif  // SRC_S21_POLISH_NOTATION_H_
