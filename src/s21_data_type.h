#ifndef SRC_S21_DATA_TYPE_H_
#define SRC_S21_DATA_TYPE_H_

#include <stdio.h>

typedef enum {
  NUMBER = 0,
  OPERATION = 1,
  FUNCTION = 2,
  VARIABLE = 3,
  BRACE = 4,
  ERROR = 5
} type_t;

typedef struct calc_data {
  int priority;
  double numbers;
  char symbols;
  type_t type;
} calc_t;

#if DEBUG == 1

    void calc_data_print(calc_t data);

#endif
void zero_data(calc_t *data);

#endif  // SRC_S21_DATA_TYPE_H_
