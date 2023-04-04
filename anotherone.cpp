#include<iostream>
using namespace std;
int main(){
    int income,area;
    cout<<"Enter your income"<<endl;
    cin>>income;
    cout<<"Enter your area in square metre"<<endl;
    cin>>area;
    if(income<100000){
        if(area<=30){
            cout<<5000*area<<endl;
        }
        else if(area>30 && area<=40){
            cout<<30*5000+(area-30)*8000<<endl;
        }
    }
    else if(income<500000 && income>100000){
        if(area<=40){
            cout<<7000*area<<endl;
        }
        else if(area>40 && area<=50){
            cout<<40*7000+(area-40)*10000<<endl;
        }
    }
    else if(income>500000){
        if(area<=50){
            cout<<9000*area<<endl;
        }
        else if(area>50 && area<=60){
            cout<<50*9000+(area-50)*11000<<endl;
        }
    }
}