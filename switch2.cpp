#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Input two numbers\n";
    cin>>a>>b;

    char op;
    cout<<"Input an operator\n";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<a + b <<endl;
        break;
    case '-':
        cout<<a - b <<endl;
        break;
    case '*':
        cout<<a * b <<endl;
        break;
    case '/':
        cout<<a / b <<endl;
        break;        
    default:
    cout<<"Enter another operator\n";
        break;
    }

    return 0;
}