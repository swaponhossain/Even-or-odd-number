

#include<stdio.h>
main()
{
    int n,i,j;
    printf("Enter a number:");
   scanf("%d",&n);
   for(i=2;i<n;i++){
    for(j=2;j<i;j++){
        if(i%j==0)
            break;
    }
    if(i==j){
            printf("The prime number:%d\n",j);
       }
   }

}








