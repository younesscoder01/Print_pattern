#include <stdio.h>

int main() {

  int n;
  int size;
  int o = scanf("%d", &n);
  size = n * 2 - 1;
  int str[size][size];
  int start = n - 1;
  int end = n - 1;
  int f = 1;
  while (n >= f) {
    for (int i = 0; i < size; i++) {
      for (int j = 0; j < size; j++) {
        if ((i == start || j == start) || (i == end || j == end)) {
          str[i][j] = f;
        }
      }
    }
    f++;
    start--;
    end++;
  }
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      printf("%i ", str[i][j]);
    }
    printf("\n");
  }

  return 0;
}
