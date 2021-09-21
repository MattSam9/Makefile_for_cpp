#include <stdio.h>
#include "gd.h"

int main(){
    double price, tip;
    
    price = get_double("Enter price meal: ",0,1000);

    tip = get_double("Enter tip amount: ",0,100);

    double tipAmount = price * tip / 100.0;
    double totalAmount = price + tipAmount;
    printf("Tip amunt: %0.2lf\n", tipAmount);
    printf("Total Amount: %0.2lf\n", totalAmount);

    return 0;
}
