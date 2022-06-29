#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n&&((n&n-1)==0))
    printf("entered number is    ");
    else
    printf("entered number is not  ");
    return 0;
}