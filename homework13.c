#include <stdio.h>

void temp(int temperature);

int main()
{
  int temperature;
  printf("Enter temperature : ");
  scanf("%d", &temperature);
  temp(temperature);
  return 0;
}

void temp(int temperature)
{
  if (temperature >= 30)
    printf("Hot !");
  else
    printf("Cold !");
}