#include<stdio.h>
int fact(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    return num * fact(num-1);
}

int main()
{
    int num , fac ;
    printf("enter integer : ");
    scanf("%d" , &num);
    fac = fact(num) ;
    printf("factorial of the number is %d" , fac);
}