/*program to print Celsius to Fahrenheit table*/
#include <stdio.h>

int main(){
    float fahr, cel;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    cel = lower;
    printf("Cel to Fahr table");
    while(cel <= upper){
        fahr = (9.0/5.0) * (cel + 32.0);
        printf("%3.0f \t %6.1f\n", cel, fahr);
        cel = cel + step;
    }
}