#include <iostream>
using namespace std;

double power(double n, int p=2){
    double value = 1;
    for(int i = 0; i < p; i++){
        value *= n;
    }
    return value;
}

int main(){
    double n;
    int p;
    cout<<"enter the number and its power: ";
    cin>>n>>p;
    if(p<0)
        cout<<"Answer = "<<power(n)<<endl;
    else
        cout<<"Answer = "<<power(n,p)<<endl;
}