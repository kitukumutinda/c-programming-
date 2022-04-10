#include<stdio.h>
main(){
int age,id;
printf("enter a age:");
    scanf("%d",&age);
    printf("if you have id press 1");
    scanf("%d",&id);

     if(age>=18&&id==1)
     {
        printf("you are eligible to vote");


    }
    else
    {
      printf("toka apa");
    }



    return 0;
}
