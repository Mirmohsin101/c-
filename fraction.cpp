#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    char n,x='156';
    cout<<"Enter the ist fraction: ";
    cin>>a>>n>>b;
    cout<<"Enter the 2nd fraction: ";
    cin>>c>>n>>d;
    int s = a*d + b*c;
    int z = b*d;
    cout<<"Sum = "<<s<<n<<z;
    cout<<x;
}