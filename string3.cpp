//reads upto the maximum or until newline charater

#include <iostream>
using namespace std;

int main()
{
    const int max = 20;
    char str[max];
    cout<<"\n Enter a string: ";
    cin.get(str,max);
    cout<<"you entered: "<<str<<endl;
    return 0;
}