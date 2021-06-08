// Hand-Writing a Linear Congruential Generator in C
// gcc -lm 

// Formula --> X_{n+1} = (a * X_n + c) * mod(m)

#include <math.h>
#include <stdio.h>


#define outputListSize 1000

double outputList[outputListSize] = {}; 
int counter = 0;

double a,m,c;

double Xn;
double x;


double stepLCG(double Xn) {
    // Pulls equation variables from global scope
    double output;

    // fmod()
    double temp = (x*Xn + c);
    // printf("%f \n Pre-Step 1: ", temp);
    output = fmod(temp,m);

    return output; 
}


void main(){
    // TODO: Here pull a,m, and c from the command-line arguments from the binary
    // Hard-setting for now
    // Let's use BSD ANSI C defines! 
    a = 89;
    m = 101; // 2^31
    c = 0;

    outputList[0] = 4;
    for (x = 1; x = outputListSize - 1 ;x = x + 1) {
        counter++;
        outputList[counter] = stepLCG(outputList[counter-1]);
        printf("%f \n", outputList[counter]); 
    }

    return;
}
