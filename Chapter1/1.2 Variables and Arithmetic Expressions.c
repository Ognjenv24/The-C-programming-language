#include <stdio.h>

int main(){

    // Print out the Fahrenheit-Celsius table

    int fahr,celsius;
    int lower,upper,step;

    lower=0;  //lower limit of temp scale
    upper=300;  //upper limit
    step=20;       //step size

    fahr=lower;
    while(fahr<=upper){
        celsius=5 * (fahr-32) / 9;
        printf("%3d\t%3d\n",fahr,celsius);
        fahr=fahr+step;

    }


    return 0;
}