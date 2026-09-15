#include <stdio.h>

int digitSum(int num);
int sum = 0;

int main()
{
  int num;
  printf("Enter a number : ");
  scanf("%d", &num);
  printf("The sum of the digits is : %d\n",digitSum(num));
  return 0;
}

int digitSum(int num)
{
  while (num != 0)
  {
    int digit = num % 10;
    sum += digit;
    num /= 10;
  }
  return sum;
}