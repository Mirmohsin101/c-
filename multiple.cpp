#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    for(int i = 1;i<=3;i++){
        int s = (i*10)-9;
        for(int j = s;j<=i*10;j++)
        {
            cout<<a*j<<'\t';
        }
        cout<<'\n';
    }
}