/*Fahrenheit Celsius conversion table with a heading*/
#include <stdio.h>

int main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    printf("Fahr to Cel Table\n");
    while(fahr <= upper){
        celsius = (5.00/9.00) * (fahr - 32.00);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}