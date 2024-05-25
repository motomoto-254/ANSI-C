#include <stdio.h>

/*cel to fah table in reverse order*/
int main(){
    float fahr, cel;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    cel = upper;
    while(cel >= lower){
        fahr = (9.0/5.0) * (cel + 32.0);
        printf("%3.0f %6.1f\n", cel,fahr);
        cel = cel - step;
    }
}