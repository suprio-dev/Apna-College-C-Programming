#include <stdio.h>
#include <math.h>

int squareRoot(int num);
int sum = 0;

int main()
{
  int num;
  printf("Enter a number : ");
  scanf("%d", &num);
  printf("Squareroot of the number : %d", squareRoot(num));

  return 0;
}

int squareRoot(int num)
{
  return sqrt(num);
}