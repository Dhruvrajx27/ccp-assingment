#include<stdio.h>
void main()
{
    int num1,num2,max;
    printf("enter two number");
    scanf("%d %d",&num1,&num2);
    max=(num1 > num2) ? num1 : num2;
    while(max % num1 !=0 || max % num2 !=0)
    {
        max++;
    }
    printf("lcm is %d",max);
    return 0;

}
