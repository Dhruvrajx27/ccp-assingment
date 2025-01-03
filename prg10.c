#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("enter a number");
    scanf("%d",&num);
    for(int i=1;i<=num/2;i++)
    {
        if(num % i ==0)
        {
            sum=sum+i;
        }
    }
    if(sum == num)
    {
        printf("perfect number");
    }
    else
    {
        printf("not perfect number");
    }
    return 0;
}
