#include <iostream>
using namespace std; 
int main () {
    int count=0; 
    while (count<8) {
        if (count%2==0) {
            int i=0; 
            while (i<8) {
                cout << "* ";
                cout << ' ';
                i++;
            }
            cout<< endl; 
        }
        else {
            int i=0; 
            while (i<8) {
                cout << ' ';
                cout << "* ";
                i++;
            }
            cout<< endl; 
        }
        count++;
    }
    return 0;
}