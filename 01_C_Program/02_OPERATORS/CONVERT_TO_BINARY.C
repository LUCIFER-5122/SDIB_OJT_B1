#include<stdio.h>
int main()
{
    int i=7,num,X;
    printf("Enter the number:");
    scanf("%d",&num);
   for(i=7 ; i>=0 ; i--)
   {
    X = (num>>i) & 0x1;
    printf("result: %d\n",X);
   }

return 0;
}