#include <stdio.h>

/*print Fahrenheit Celsisus table*/
int main(){
    int fahr;

    for(fahr = 0; fahr <= 300; fahr = fahr + 20){
        printf("%3.0d %6.1f\n", fahr, (5.0/9.0)*(fahr-32.0));
    }
}