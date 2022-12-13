#include "s21_data_type.h"

void zero_data(calc_t *data) {
  data->priority = 0;
  data->numbers = 0;
  data->symbols = 0;
  data->type = 5;
}

#if DEBUG == 1

    void calc_data_print(calc_t data) {
      switch (data.type) {
        case 0:
          printf("%lf - number, %d priority\n", data.numbers, data.priority);
          break;
        case 1:
          printf("%c - operations, %d priority\n", data.symbols, data.priority);
          break;
        case 2:
          switch (data.symbols) {
            case 's':
              printf("sin- funct, %d priority, %d type\n", data.priority, data.type);
              break;
            case 'c':
              printf("cos- funct, %d priority, %d type\n", data.priority, data.type);
              break;
            case 't':
              printf("tan- funct, %d priority, %d type\n", data.priority, data.type);
              break;
            case 'z':
              printf("asin- funct, %d priority, %d type\n", data.priority, data.type);
              break;
            case 'k':
              printf("acos- funct, %d priority, %d type\n", data.priority, data.type);
              break;
            case 'd':
              printf("atan- funct, %d priority, %d type\n", data.priority, data.type);
              break;
            case 'l':
              printf("log- funct, %d priority, %d type\n", data.priority, data.type);
              break;
            case 'n':
              printf("ln- funct, %d priority, %d type\n", data.priority, data.type);
              break;
            case 'q':
              printf("sqrt- funct, %d priority, %d type\n", data.priority, data.type);
              break;
            default:
              printf("??? - %c\n", data.symbols);
              break;
          }
          break;
        case 3:
          printf("x- variable, %d priority, %d type\n", data.priority, data.type);
          break;
        case 4:
          printf("%c- brace, %d priority\n", data.symbols, data.priority);
          break;
        default:
          printf("???%c\n", data.symbols);
          break;
      }
    }

#endif
