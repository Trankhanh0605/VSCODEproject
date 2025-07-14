#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std; 
int main () {
   double a;
   double p=1000;
   double rate=0.05;
   double year;
   //display header
   cout<<"Enter the year: ";
   cin>>year; 
   for (int i=1; i<year; i++) {
    a=p*pow(1+rate,i); 
    cout<< a << " and "; 
   }
   cout<<p*pow(1+rate, year);
    return 0;
}