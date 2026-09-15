#include <stdio.h>
int main()
{
  int arr[5], num;
  for (int i = 0; i < 5; i++)
  {
    printf("Enter %dth array element : ", i);
    scanf("%d", &arr[i]);
  }
  printf("\nEnter element to be inserted in the last : ");
  scanf("%d", &num);
  arr[5] = num;
  for (int i = 0; i < 6; i++)
  {

    printf("%d\t", arr[i]);
  }
  return 0;
}