
#include<stdio.h>
int main()
{

    int i,n,first=0,second=1,third;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",first);
        third=first+second;
        first=second;
        second=third;
    }
}
