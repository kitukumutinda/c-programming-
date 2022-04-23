//discount 
#include<stdio.h>
main(){
int price;
float discount;
float newprice;
printf("enter a price of item/s:");
    scanf("%d",&price);

     if(price>5000){
            discount=0.1*price;
        printf("discount =%f \n",discount);
        newprice = price - discount;
        printf("total=%f",newprice);
    }
    else
    {
      printf("price is below discount rate");
    }



    return 0;
}

