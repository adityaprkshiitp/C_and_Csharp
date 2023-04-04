#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string s;
    int n;
    cin>>s;
    stringstream obj;
    obj << s;
    obj >> n;
    cout << n;

}