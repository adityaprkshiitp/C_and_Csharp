#include<iostream>
using namespace std;
int main() {
   int x;
   cin>>x;

   int sum=0;
   for(int counter=1;counter<=x;counter++){
   sum=sum+counter;
   }

   cout<<sum<<endl;

}