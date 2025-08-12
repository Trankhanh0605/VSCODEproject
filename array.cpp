#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    int size=10; 
    int s[size];
    for (int i=0; i<size; i++) {
        s[i]=2+2*i;
    }
    cout<< "Element" << setw(13)<<"Value"<<endl;
    for (int i=0; i<size; i++) {
        cout<<setw(7)<<i<<setw(13)<<s[i]<<endl;
    }

    

    
    return 0;
}