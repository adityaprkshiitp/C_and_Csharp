#include<iostream>
using namespace std;
int main() {
    int ages[5];
    cout<<"Enter the age of the customers"<<endl;
    for (int i = 0; i < 5; ++i)
    {
       cin>>ages[i];
    }
    int youngest = ages[0];
    for (int a = 0; a <5; ++a)
    {
        if(youngest>ages[a])
        {
            youngest = ages[a];
        }
    }
    
    int total = 50 - (50*youngest/100);
    cout << "total = "<<total;
    
    return 0;
    
}