#include <stdio.h>
#include <math.h>
#include "gd.h"

int main(){
    double x = get_double("Enter the x value [-100, 100]: ",-100,100); 
    double y = get_double("Enter the y value [-100, 100]: ",-100,100); 
    double z = sqrt(pow(x,2) + pow(y,2));
    printf("Distance of two point is %0.2lf meters.\n",z);
    return 0;
}

