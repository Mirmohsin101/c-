// reads upto the space

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int MAX = 5;
    char str[MAX];
    cout<<"Enter the string: ";

    cin>>setw(MAX)>>str;     //the user may insert more characters than the length of array but operator wont store them

    cout<<endl<<"You entered: "<<str;
    return 0;
}