//divisible by 5
#include<stdio.h>

int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);

    if(a%5==0){
        printf("number is divisible by 5");

    }else
    {
        printf("number is not divisible by 5");
    }
    return 0;
}
