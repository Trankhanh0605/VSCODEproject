#include<iostream>
#include <iomanip>
#include<vector>
#include <cmath>
using namespace std;
void outputvector(const vector<int>&);
void inputvector(vector<int>&);
int linearsearch (const int [], int, int);

void nonduplicate(); 

int findfreeseat(const bool[], int, int);

int main() {

/*
int size=10; 
int s[size];
for (int i=0; i<size; i++) {
    s[i]=2+2*i;
}
cout<< "Element" << setw(13)<<"Value"<<endl;
for (int i=0; i<size; i++) {
    cout<<setw(7)<<i<<setw(13)<<s[i]<<endl;
}

const int arraySize=10; 
int a[arraySize]; 
int search; 
for (int i=0; i<arraySize; i++) {
    cin>>a[i];
}
cout<<"Enter the key: "<<endl;
cin>>search;
int index=linearsearch(a, arraySize, search);
if (index==-1) cout<<"Not found"<<endl;

vector<int> integers1(7);
vector<int> integers2(10);
// print integers1 size and contents
cout<<"Size of integers1 is: "<<integers1.size()<<"\nvector after initialization: "<<endl;
outputvector(integers1);

// print integers2 size and contents
cout<<"Size of integers2 is: "<<integers2.size()<<"\nvector after initialization: "<<endl; 
outputvector(integers2);

// input and print integers1 and integers2
cout<<"\nEnter 17 integers: "<<endl;
inputvector(integers1);
inputvector(integers2);
cout << "\nAfter input, the vectors contain:\n"<< "integers1:" << endl;
outputvector( integers1 );
cout<<"integers2: "<<endl;
outputvector(integers2);
    
// use inequality (!=) operator with vector objects
cout << "\nEvaluating: integers1 != integers2" << endl;
if (integers1!=integers2) {
    cout<<"Not equal"<<endl;
}

vector<int> integers3(integers1);
cout<<"\nSize of integers3 is: "<<integers3.size()<<"\n vector after initialization: "<<endl;
outputvector(integers3);

// use overloaded assignment (=) operator
cout << "\nAssigning integers2 to integers1:" << endl;
integers1=integers2; // assign integers2 to integers1
cout << "integers1:" << endl;
outputvector(integers1);
cout<<"integers2: "<<endl;
outputvector(integers2);

// use equality (==) operator with vector objects
cout<<"\nEvaluating: integers1==integers2"<<endl;
if (integers1==integers2) {
    cout<<"Equal"<<endl;
}

// use square brackets to create rvalue
cout << "\nintegers1[5] is " << integers1[ 5 ];

// use square brackets to create lvalue
cout << "\n\nAssigning 1000 to integers1[5]" << endl;
integers1[5]=1000;
cout<<"Right now, integers1 is: "<<endl;
outputvector(integers1);

nonduplicate();


bool seats[10]={false};
int assign=0;
while (assign<10) {
    cout << "Please type 1 for First class, and type 2 for Economy: ";
    int choice;
    cin>>choice;
    if (choice==1) {
        int idx=findfreeseat(seats, 0, 4);
        if (idx!=-1) {
            seats[idx]=true;
            assign++;
            cout << "Boarding pass: Seat " << (idx + 1) << " - First Class\n";
        }
        else {
            // đề nghị sang Economy nếu First class đã đầy
            int alt=findfreeseat(seats, 5,9);
            if (alt!=-1) {
                cout << "First class is full. Accept Economy instead? (y/n): ";
                    char resp; cin >> resp;
                    if (resp=='y'||resp=='Y') {
                        seats[alt]=true;
                        assign++;
                        cout<<"Boarding pass: Seat "<<(alt+1)<<" -Economy\n";
                    }
                    else {
                        cout<<"Next filght leaves in 3 hours\n";
                    }
            }
            else {
                cout<<"Sorry, all seats are taken. Next flight leaves in 3 hours\n";
                break;
            }
        }
    }

    else if (choice==2) {
        int idx=findfreeseat(seats, 5,9);
        if (idx!=-1) {
            seats[idx]=true;
            assign++;
            cout<<"Boarding pass: Seat "<<(idx+1)<<" - Economy\n";
        }
        else {
            //Đề nghị chuyển sang First class
            int alt=findfreeseat(seats, 0,4);
            if (alt!=-1) {
                cout<<"Economy is full. Accept First class instead? (y/n): ";
                char r;
                cin>>r;
                if (r=='y'||r=='Y') {
                    seats[alt]=true;
                    assign++;
                    cout<<"Boarding pass: Seat "<<(alt+1)<<" - First Class\n";
                }
                else {
                    cout<<"Next flight leaves in 3 hours\n";
                }
            }
            else {
                cout<<"Sorry, all seats are taken. Next flight leaves in 3 hours\n";
                break;
            }
        }
    }
}

 cout << "\nFinal seating chart (1..10):\n";
 for (int i=0; i<10; i++) {
    cout << "Seat " << (i + 1) << ": " << (seats[i] ? "Taken" : "Empty") << '\n';
 }


//Sieve
const int size=1000;
bool isPrime[size];
for (int i=0; i<size; i++) {
    isPrime[i]=true;
}
isPrime[0]=true;
isPrime[1]=true;

int limit=static_cast<int> (sqrt(size-1));
for (int i=2; i<limit; ++i) {
    if (isPrime[i]==true) {
        for (int j=i*i; j<size; j+=i) {
            isPrime[j]=false;
        }
    }
}

cout << "Prime numbers between 2 and 999:\n\n";
int perline=10;
int count=0;
for (int i=2; i<size;i++) {
    if (isPrime[i]==true) {
        cout<<setw(5)<<i;
        count++;
        if (count%perline==0) cout<<"\n";
    }
}
if (count % perline != 0) cout << '\n';
cout << "\nTotal primes found: " << count << '\n';

*/



return 0;
}

int linearsearch (const int a[], int n, int value) {
    for (int i=0; i<n; i++) {
        if (a[i]==value) return i;
    }
    return -1; 
}

void inputvector(vector<int>&v) {
    for (size_t i=0; i<v.size(); i++) {
        cin>>v[i];
    }
}

void outputvector(const vector<int>& v) {
    size_t i;
    for (i=0; i<v.size(); i++) {
        cout<<setw(10)<<v[i];
        if ((i+1)%4==0) cout<<endl;
    }
    if (i%4!=0) cout<<endl; //kiem tra xem so phan tu co phai boi cua 4 hay khong 
}

void nonduplicate() {
   const int target=20; 
   int unique[target];
   int stored=0;

   cout<<"Nhap 20 so khac nhau: "<<endl;
   while (stored<target) {
    int x;
    cin>>x;
    if (x<10||x>100) {
        cout<<"Gia tri nhap khong hop le: "<<endl;
        continue;
    }
    bool duplicate=false;
    for (int i=0; i<stored; i++) {
        if (unique[i]==x) {
            duplicate=true;
            break;
        }
    }

    if (duplicate==true) {
        cout<<"Nhap lai so khac: "<<endl;
        continue;
    }

    unique[stored]=x;
    stored++;
    }

    for (int i=0; i<stored; i++) {
        cout<<unique[i]<<" ";
    }
}

int findfreeseat(const bool seats[], int start, int end) {
    for (int i=start; i<=end; i++) {
        if (seats[i]==false) return i;
    }
    return -1;
}