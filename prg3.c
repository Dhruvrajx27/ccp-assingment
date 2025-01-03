#include<stdio.h>
void main()
{
    int ld,arm,i,n,original;
    arm=0;
    printf("enter a number");
    scanf("%d",&n);
    original=n;
    for(i=0;n>0;i++)
    {
        ld=n%10;
        arm=arm+(ld*ld*ld);
        n=n/10;
    }
    if(arm==original)
    {
        printf("it is armstrong number");
    }
    else
    {
        printf("it is not armstrong number");
    }
}
