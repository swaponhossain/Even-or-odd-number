#include<stdio.h>
#include<math.h>
main ()
{
    int n1,n2,r,gcd,lcm;
    printf("enter two numbers:");
    scanf("%d%d",&n1,&n2);
    while(n2!=0)
    {
        r=n1%n2;
        n1=n2;
        n2=r;
    }
    gcd=n1;
    lcm=(n1*n2)/gcd;
    printf("The GCD:%d\n",gcd);
    printf("The LCM:%d",lcm);


}
