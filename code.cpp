#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std; 

void function1();
void function2(void);
int boxVolume(int length=1, int width=1, int height=1);
int integerPower(int base, int exponent);

void hanoi (int n, char from, char aux, char to);

int gcd(int, int);

int triplebyValue(int);
void triplebyReference(int&);

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
cout<<endl;

int count=1;
int &cRef=count;
cRef++; 
cRef*=cRef;
cout<<count<<endl;

cout<<"The default: "<<boxVolume()<<endl;
cout<<"Modify the length: "<<boxVolume(10)<<endl;
cout<<"Modify the lenght and width: "<<boxVolume(10,5)<<endl;


cout<<integerPower(2,3)<<endl; 

hanoi(5, 'A', 'B', 'C');
cout<<endl;

cout<< gcd(12345, 3408);
cout<<endl;


cout<<"Enter count: ";
cin>>count;
cout<<"Triple by value: "<<triplebyValue(count)<<endl;
cout<<"The current count is: "<<count<<endl;
triplebyReference(count);
cout<<"After triple by Reference, the count is: "<<count<<endl;


return 0;
}

//function implementaion
void function1() {
   cout<<"No arguments";
}

void function2(void) {
   cout<<"Also no arguments";
}

int boxVolume(int length, int width, int height) {
   return length*width*height;
}

int integerPower(int base, int exponent){
   if (exponent==0) return 1;
   else return base*integerPower(base, exponent-1);
}

void hanoi (int n, char from, char aux, char to) {
   if (n==0) return;
   //move n-1 disks from from to aux
   hanoi(n-1, from, to, aux);
   //move nth disks from from to to
   cout<< "Move disk "<< n << " from peg "<< from <<" to peg "<< to << endl;
   //move n-1 disks from aux to to
   hanoi(n-1, aux, from, to); 
}

int gcd (int a, int b) {
   if (b==0) return a;
   else return gcd(b, a%b);
}

int triplebyValue(int x) {
   x*=3;
   return x;
}

void triplebyReference(int &x) {
   x*=3;
}




