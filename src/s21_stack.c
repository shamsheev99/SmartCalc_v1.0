#include "s21_stack.h"

void stack_push(stackk_t **head, calc_t stack_data) {
  stackk_t *ptr = calloc(1, sizeof(stackk_t));
  ptr->stack_data = stack_data;
  if (*head == NULL) {
    *head = ptr;
  } else {
    ptr->next = *head;
    *head = ptr;
  }
}

calc_t stack_pop(stackk_t **head) {
  stackk_t *ptr = NULL;
  calc_t stack_data;
  zero_data(&stack_data);
  if (*head != NULL) {
    ptr = *head;
    stack_data = (*head)->stack_data;
    *head = (*head)->next;
    free(ptr);
  }
  return stack_data;
}

void stack_clear(stackk_t **head) {
  while (*head != NULL) {
    stackk_t *ptr = *head;
    *head = (*head)->next;
    free(ptr);
  }
  *head = NULL;
}

void stack_push_to_stack(stackk_t **source, stackk_t **dest) {
  while (*source != NULL) {
    stack_push(dest, stack_pop(source));
  }
}

stackk_t *stack_copy(stackk_t *head, stackk_t **copy_head) {
  stackk_t *ptr = head;
  *copy_head = NULL;

  while (ptr != NULL) {
    stack_push(copy_head, ptr->stack_data);
    ptr = ptr->next;
  }
  return *copy_head;
}

#if DEBUG == 1

    void stack_print(stackk_t *head) {
      stackk_t *ptr = head;
      printf("-------------------------\n");
      if (ptr == NULL) printf("Stack is Empty\n");
      while (ptr != NULL) {
        calc_data_print(ptr->stack_data);
        ptr = ptr->next;
      }

      printf("-------------------------\n");
    }

#endif
