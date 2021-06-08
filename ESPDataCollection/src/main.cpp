#include <Arduino.h>
#include <math.h>
// #include <stdio.h>
// Implements a LCG

#define outputListSize 10000
// With an output list size of 100, the LCG overruns itself and resets to the inital state (X1)

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

void setup() {
  // put your setup code here, to run once:
  a = 1103515245;
  m = 2147483648; // 2^31
  c = 12345;
  outputList[0] = 2;

  Serial.begin(115200);        
  delay(10);
  Serial.println('\n---Starting ANSI C LCG---');
  delay(5);
}

void loop() {
  // put your main code here, to run repeatedly:

  counter++;
  outputList[counter] = stepLCG(outputList[counter-1]);
  printf("%f \n", outputList[counter]); 

}