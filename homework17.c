#include <stdio.h>
int main()
{
  char arr[26], ch = 'A';
  for (int i = 0; i < 26; i++)
  {
    arr[i] = ch;
    ch++;
  }
  char *ptr = &arr[0];
  for (int i = 0; i < 26; i++)
  {
    printf("%c  ", *(ptr + i));
  }
  return 0;
}

