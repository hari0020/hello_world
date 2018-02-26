#include<stdio.h>
#include<string.h>
int main()
{
   char num[100];
   int n,i;
   scanf("%s%d",&num,&n);
   for(i=n;i<strlen(num);i++)
   {
      printf("%c",num[i]);
   }
   for(i=0;i<n;i++)
   {
      printf("%c",num[i]);
   }
}
