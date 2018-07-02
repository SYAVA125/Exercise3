#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int number1,number2;
  double r;
  int sum;

  srand(time(NULL));

  number1 = rand() % 6 + 1;
  number2 = rand() % 6 + 1;

  sum = number1+number2;
  //printf("%d : %d\n",number1,number2);
  printf("Rolling the dice...\n");
  printf("Die 1: %d\n",number1);
  printf("Die 2: %d\n",number2);
  printf("Total value: %d\n",sum);
  return 0;
}
