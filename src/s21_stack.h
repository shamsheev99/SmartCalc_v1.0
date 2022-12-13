#ifndef SRC_S21_STACK_H_
#define SRC_S21_STACK_H_

#include <stdlib.h>

#include "s21_data_type.h"

typedef struct stack {
  calc_t stack_data;
  struct stack *next;
} stackk_t;

// Stack functions

void stack_push(stackk_t **head, calc_t stack_data);
calc_t stack_pop(stackk_t **head);
void stack_clear(stackk_t **head);
void stack_push_to_stack(stackk_t **source, stackk_t **dest);
stackk_t * stack_copy(stackk_t *head, stackk_t **copy_head);

#if DEBUG == 1
void stack_print(stackk_t *head);
void stack_add_end(stackk_t **head, calc_t stack_data);
#endif
#endif  // SRC_S21_STACK_H_
