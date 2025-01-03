#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("enter string");
    gets(str);

    char *p = str;
    while(*p!='\0')
    {
        if(islower(*p))
        {
            *p=toupper(*p);

        }
        else if(isupper(*p))
        {
            *p=tolower(*p);

        }
        p++;
    }
    printf("%s",str);
}
