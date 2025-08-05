#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std; 

void function1();
void function2(void);

int main () {
// int n; 
// cout<<"Enter the row: ";
// cin>> n;
// for (int stars=1; stars<=n; stars+=2) {
//    int spaces=(n-stars)/2;
//    for (int i=0; i<spaces; i++) {
//       cout<<" "; 
//    }
//    for (int i=0; i<stars; i++) {
//       cout<<"*";
//    }
// cout<<endl;
// }
// for (int stars=n-2; stars>=1; stars-=2) {
//    int spaces=(n-stars)/2;
//    for (int i=0; i<spaces; i++) {
//       cout<<" ";
//    }
//    for (int i=0; i<stars; i++) {
//       cout<<"*";
//    }
//    cout<<endl;
// }   

// for (int i=1; i<=5; ++i) {
//    for (int j=1; j<=3; ++j) {
//       for (int k=1; k<=4; ++k) {
//          cout<<"*"; 
//       }
//        cout<<endl; 
//    }
//    cout<<endl;
// }

function1();
cout<< endl; 
function2();

 return 0;
}

void function1() {
   cout<<"No arguments";
}

void function2(void) {
   cout<<"Also no arguments";
}