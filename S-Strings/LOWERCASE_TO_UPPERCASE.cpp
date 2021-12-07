
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string lowercase; // Declaring string
    cin>>lowercase; // taking input

    for(int i=0;i<lowercase.length();i++) // iteration for each character
    {
       lowercase[i]  =  lowercase[i] - 32; // For converting to Uppercase using ascii values
    }
    cout<<lowercase; // output by storing same 
}
// time complexity is length of string
