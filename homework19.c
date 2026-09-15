#include <stdio.h>
int main()
{
  int arr[5];
  for (int i = 0; i < 5; i++)
  {
    printf("Enter %dth array element : ", i);
    scanf("%d", &arr[i]);
  }
  int max = arr[0];

  for (int i = 0; i < 5; i++)
  {
    if (arr[i] > max)
      max = arr[i];
  }
  printf("Largest array element is : %d\n", max);

  return 0;
}