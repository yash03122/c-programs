#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("enter the value of c");
    scanf("%d",&c);
    {
        if (a>b && a>c)
        {
            printf("a is maximum");
        }
        if (b>a && b>c)
        {
            printf("b is maximum");
        }
        if(c>a && c>b)
        {
            printf("c is maximum");
        }
    getch();
    }
}