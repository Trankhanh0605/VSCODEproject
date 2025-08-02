#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std; 
int main () {
int n; 
cout<<"Enter the row: ";
cin>> n;
for (int stars=1; stars<=n; stars+=2) {
   int spaces=(n-stars)/2;
   for (int i=0; i<spaces; i++) {
      cout<<" "; 
   }
   for (int i=0; i<stars; i++) {
      cout<<"*";
   }
cout<<endl;
}
for (int stars=n-2; stars>=1; stars-=2) {
   int spaces=(n-stars)/2;
   for (int i=0; i<spaces; i++) {
      cout<<" ";
   }
   for (int i=0; i<stars; i++) {
      cout<<"*";
   }
   cout<<endl;
}   

 return 0;
}