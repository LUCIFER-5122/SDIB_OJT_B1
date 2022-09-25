#include<stdio.h>
int main()
{
    int i=3,num,X,k;
    printf("Enter the number:");
    scanf("%d",&num);
   for(i=7 ; i>=0 ; i--)
   {
    X = (num>>i) & 0x01;
    printf("result of X: %d\t\n",X);
   }
  // printf("vlue of k : %d \t",k);
   for(i=7; i>=0; i--)
   {
    k= (X>>i)& 0xf8;
    printf(" %d\t",k);}
    return 0;

   }

