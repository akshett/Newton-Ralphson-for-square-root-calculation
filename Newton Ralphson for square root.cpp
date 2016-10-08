// Example program
#include <iostream>
#include <cmath>
using namespace std;

double squareRoot(double x);

int main(int argc, char *argv[]){
    double number;
    cin >> number;
    number = squareRoot(number);
    cout << number << '\n';   
    }
    
double squareRoot(double x){
   double y0 = x/2;
   double y1 = 0;
   while (abs(y0 - y1)> 0.00000000001){
       y1 = y0;
       y0 = y0 - ((y0*y0 - x)/(2*y0));
       cout << y0 << " ,  "<< y1 << '\n';
       }
   return y0; 
    }