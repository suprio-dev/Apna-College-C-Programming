#include <stdio.h>
int main()
{
char character;
printf("Enter a character :");
scanf("%c",&character);
printf("Is the character a digit ? : %d\n", character >='0' && character<='9' );
return 0;






}