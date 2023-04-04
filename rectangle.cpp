#include<iostream>
using namespace std;
int main() {
    cout<<"Enter the number of rows and columns"<<endl;
    int rows,columns;
    cin>>rows>>columns;
    for (int i=1;i<=rows;++i){
        for (int x=1;x<=columns;++x){
            cout<<"*";
        } cout<<endl;
    }
    return 0;
}