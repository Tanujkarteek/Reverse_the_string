// A Simple C++ program to reverse a string
#include<iostream>
#include<conio.h>
using namespace std;
 
// Function to reverse a string
void reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}
 
int main()
{
    string str;
    cout<<"PLEASE ENTER THE STRING YOU WANT TO REVERSE:=";
    cin>>str;
    reverseStr(str);
    cout << str;
    getch();
}