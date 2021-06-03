// Hand-Writing a Linear Congruential Generator in C


// Formula --> X_{n+1} = (a * X_n + c) * mod(m)

#include <math.h>
#include <stdio.h>


#define outputListSize 100

double outputList[outputListSize] = {}; 
char counter = 0;

double a,m,c;

double Xn;
double x;


double stepLCG(double Xn) {
    // Pulls equation variables from global scope
    double output;

    // fmod()
    output = fmod((x*Xn + c),m);

    return output; 
}

// Might not need fully
void printArray(double * inputArray, double end) {
    int loop;

    for(loop = 0; loop = end; loop++) {
        printf("%d ", inputArray[loop]);     
    };

}

void main(){
    // TODO: Here pull a,m, and c from the command-line arguments from the binary
    // Hard-setting for now
    // Let's use BSD ANSI C defines! 
    a = 1103515245;
    m = 2147483648;
    c = 12345;

    outputList[0] = 2;
    for (x = 1; x = outputListSize - 1 ;x = x + 1) {
        counter++;
        outputList[counter] = stepLCG(outputList[counter-1]);
        printf("%f \n", outputList[counter]);
    }

    return;
}
