#include<iostream>
#include<cstring>
#include <cstdio>
using namespace std;
int main(){
    int costprice,amount;
    int card;
    int prime;
    printf("Enter the cost of mobile: \n");
    scanf("%d", &costprice);
    printf("Enter the cards you have (HDFC=1,SBI=2,AXIS,3): \n");
    scanf("%d", &card);
    printf("Do you have a prime membership(YES=1,No=2)?\n");
    scanf("%d", &prime);
    if(card==1 && costprice>10000){
        int discount1=(10/100)*costprice;
        if(discount1<=1250){
        amount=costprice-(discount1);
        }
        else{
            amount = costprice-1250;
        }
    }
    if(card==2 ){
        int discount2=(15/100)*costprice;
        if(discount2<=1250){
        amount=costprice-(discount2);
        }
        else{
            amount =costprice-1250;
        }
    }
    if(card==3){
        int discount3=(5/100)*costprice;
        if(discount3<=2000){
        amount=costprice-(discount3);
        }
        else {
            amount=costprice-2000;
        }
    }
    if(prime=1){
        int discount4 = ((5/100)*costprice);
        amount=(amount-discount4);
    }
    else{
        amount=amount;
    }
    printf("Cost of the phone after discount: %d \n", amount);
}