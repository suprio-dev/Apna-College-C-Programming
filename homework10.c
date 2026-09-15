#include <stdio.h>
int main()
{
int lownum,upnum,c=0;
printf("Enter lower limit : ");
scanf("%d",&lownum);
printf("Enter upper limit : ");
scanf("%d",&upnum);
for(int i=lownum;i<=upnum;i++)
{
  for(int j=1;j<=i;j++)
  {
if(i%j==0)
c++;

  }
  if(c==2)
  printf("%d\n",i);
  c=0;
}
return 0;
}