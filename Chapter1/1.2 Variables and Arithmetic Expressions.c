#include <stdio.h>

void Ftc(){

    // Print out the Fahrenheit-Celsius table

    float fahr,celsius;
    float lower,upper,step;

    lower=0;  //lower limit of temp scale
    upper=300;  //upper limit
    step=20;       //step size

    fahr=lower;

    printf("Fahrenheit to Celsius:\n");
    while(fahr<=upper){
        celsius=(5.0/9.0)*(fahr-32.0);
        printf("%3.0f\t%6.1f\n",fahr,celsius);
        fahr=fahr+step;

    }

    printf("--------------------\n");

}

void Ctf(){
    
    float fahr,celsius;
    float lower,upper,step;

    lower=0;  //lower limit of temp scale
    upper=300;  //upper limit
    step=20;       //step size

    celsius=lower;

    printf("Celsius to Fahrenheit:\n");
    while(celsius<=upper){
        fahr=(9.0*celsius)/5.0 + 32.0;
        printf("%3.0f\t%6.1f\n",celsius,fahr);
        celsius=celsius+step;

    }

}



int main(){

    Ftc();
    Ctf();

    return 0;
}