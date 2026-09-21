#include <stdio.h>
#include <ctype.h>
int main()
{
  char str[100];
  int count = 0;
  printf("Enter a string : ");
  fgets(str, 100, stdin);
  for (int i = 0; str[i] != '\0'; i++)
  {
    switch (str[i])
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      str[i] = toupper(str[i]);
    }
  }
  puts(str);
  return 0;
}