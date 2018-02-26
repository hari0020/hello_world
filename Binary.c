#include<stdio.h>
int main()
{
   int n,a[100],i,j=0,k,c,count=0;
   scanf("%d",&n);
   while(n>1)
   {
      k=n%2;
      a[j++]=k;
      n=n/2;
      c++;
   }
   a[c]=n;
   for(i=0;i<c+1;i++)
   {
      if(a[i]==1)
      {
         count++;
      }
   }
   printf("%d",count);
}
