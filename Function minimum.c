
#include<stdio.h>
int mini(int nx, int ny)
{
    int result;
    if(nx<ny)
        result =nx;
    else
        result=ny;
}


 main()
{
   int a=70,b=300;
   int ret;
   ret =mini(a,b);
   printf("Minimum value:%d\n",ret);
}

