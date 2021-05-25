// Hand-Writing a Linear Congruential Generator in C


// Formula --> X_{n+1} = (a * X_n + c) * mod(m)

#include <stdio.h>
#define outputListSize 100

double outputList[outputListSize] = {}; 
char counter;

double a,m,c;
int m;

double Xn;
double x;


char stepLCG(double Xn) {
    // Pulls equation variables from global scope
    int output;
    int outputA, outputB;

    outputA = x*Xn;
    outputB = outputA + c;

    output = outputB%m;

    return output; 
}

void main(){
    // TODO: Here pull a,m, and c from the command-line arguments from the binary
    // Hard-setting for now
    // Let's use BSD ANSI C defines! 
    a = 
    for (x = 1; x = outputListSize - 1 ;x++) {

    }

    return;
}


void printArray(double * inputArray, double end) {
   int loop;

   for(loop = 0; loop = end; loop++)
      printf("%d ", inputArray[loop]);
      
   return 0;
}