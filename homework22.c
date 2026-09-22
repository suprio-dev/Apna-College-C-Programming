#include <stdio.h>
int main()
{
  char str[100], ch;
  int count = 0, k, max_freq = 0;
  printf("Don't enter a string in which multiple\n characters have the same highest frequency!\n");
  printf("Enter a string : \n");
  fgets(str, 100, stdin);
  for (int i = 0; str[i] != '\n'; i++)
  {
    k = 0;
    for (int j = i - 1; j >= 0; j--)
    {
      if (str[i] == str[j])
        k++;
    }
    if (k > 0)
      continue;
    else
    {
      for (int j = 0; str[j] != '\n'; j++)
      {

        if (str[i] == str[j])
          count++;
      }
      if (count > max_freq)
      {
        max_freq = count;
        ch = str[i];
      }
      count = 0;
    }
  }
  printf("The highest frequency character is : %c\n", ch);
  printf("The frequency is : %d\n", max_freq);
  return 0;
}