#include<iostream>
using namespace std;

int distance(int a, int b){
    if(a>b)
        return a;
    return b;
}

int main(){
    int a,b;
    cout<<"enter the two no.s: ";
    cin>>a>>b;
    cout<<distance(a,b)<<endl;
    return 0;
}