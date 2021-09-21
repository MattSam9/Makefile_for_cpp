#include "gd.h"
#include <stdio.h>

double get_double(char *prompt,double min, double max){
    double result;
    do{
        printf("%s", prompt);
        scanf("%lf", &result);
        if(result < min) printf("Your input number must be greater than %.2lf \n", min);
        if(result > max) printf("Your input number must be less than %.2lf \n", max);
        
    }while(result < min || result > max);
    return result;
}

