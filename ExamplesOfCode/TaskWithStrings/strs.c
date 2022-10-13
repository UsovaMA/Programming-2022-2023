#include <stdio.h>
#include <malloc.h>

int main() {
  char* str = (char*)malloc(sizeof(char) * 100);

  gets(str);    // аналог scanf для строк
  puts(str);    // аналог printf для строк

  int size = 0;
  while (str[size] != '\0') {
    size++;
  }

  printf("String %s have len %d", str, size);

  str[5] = '\0';
  puts(str);

  free(str);
  return 0;
}
