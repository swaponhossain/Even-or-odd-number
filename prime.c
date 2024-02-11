
#include<stdio.h>
main()
{
   int n,i;
   scanf("%d",&n);
   for(i=2;i<n;i++){
    if(n%i==0){
        printf("Number is not prime number:%d\n",n);
        break;
    }
   }
   if(i==n){
    printf("Number is prime :%d",n);
   }




}
