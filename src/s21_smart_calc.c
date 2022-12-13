#include "s21_smart_calc.h"

double get_result(char *str, double x) {
  stackk_t *input = NULL;
  calc_t stackdata;
  double result = NAN;
  int error = SUCCESS;
  zero_data(&stackdata);
  error = parser(str, &input, stackdata);
  if (error == FAILURE) {
#if DEBUG == 1
    printf("ERROR");
#endif
  } else {
    error = polish_notation(&input);
#if DEBUG == 1
    printf("polska\n");
    stack_print(input);
#endif
    if (error == FAILURE) {
#if DEBUG == 1
      printf("ERROR");
#endif
    } else {
      result = calc_notation(&input, x, &error);
      if (error == FAILURE) {
#if DEBUG == 1
        printf("ERROR");
#endif
      }
    }
  }
  stack_clear(&input);
  return result;
}
