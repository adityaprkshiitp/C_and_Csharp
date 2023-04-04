#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if (n%2==0 && n%3==0){
        cout<<"divisible by both\n";
    } else if (n%2==0 || n%3==0){
        cout<<"divisible by only one\n";
    }else{
        cout<<"divisible by none\n";
    }
    return 0;
}