#include <stdio.h>
#include <stdlib.h>

int main() {
  int c, n;

  printf("random numbers in [1,100]\n");

  //for (c = 1; c <= 10000; c++) {
   // n = rand() % 100 + 1;
    n = rand();
    printf("%d\n", n);
    int d=rand();
    printf("\n\nsecond random number is %i\n",d);
  return 0;
}
