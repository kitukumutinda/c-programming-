//a program to determine if a number is positive or negative
#include<stdio.h>
main(){
int a;
printf("enter a number:");
    scanf("%d",&a);
     if(a>=1){
        printf("number is positive \n");

    }else if(a<0)
    {
        printf("number is negative");
    }
    else
    {
      printf("number is zero");
    }



    return 0;
}
