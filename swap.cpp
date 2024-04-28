#include <iostream>
using namespace std;

void swap(int &a, int &b){
    a = a+b;
    b = a-b;
    a = a-b;
}

int main(){
    int a,b;
    cout<<"Enter the two no.s: ";
    cin>>a>>b;
    swap(a,b);
    cout<<a<<endl<<b<<endl;
    return 0;
}