// Add numbers till user hits 0
#include <stdio.h>
int main() {
  int number, sum = 0;
    do {
    printf("Enter a number: ");
    scanf("%d", &number);
    sum += number;
  }
  while(number != 0);
  printf("Sum = %d",sum);
  return 0;
}