
#include<stdio.h>
int max(int num1, int num2)
{
    int result;
    if(num1>num2)
        result =num1;
    else
        result=num2;
}


void main()
{
   int a=100,b=200;
   int ret;
   ret =max(a,b);
   printf("Max value:%d\n",ret);
}
