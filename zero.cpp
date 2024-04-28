#include <iostream>
using namespace std;

void zeroSmaller(int *a, int *b){
    if(*a<*b)
        *a = 0;
    else
        *b = 0;
}

int main(){
    int a,b;
    cout<<"Enter the two no.s: ";
    cin>>a>>b;
    zeroSmaller(&a,&b);
    cout<<a<<endl<<b;
    return 0;
}