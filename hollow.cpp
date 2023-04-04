#include<iostream>
using namespace std;
int main() {
    cout<<"Enter the no.of rows and columns\n";
    int x,i,rows,columns;
    cin>>rows>>columns;
   for ( i = 1; i <= columns ; i++)
   {
       for (x = 1; x <= rows; x++)
       {
           if(i==1 || i==columns ){
               cout<<"#";
           }else if( x==1 || x==rows) {
               cout<<"#";
           }else {
               cout<<" ";
           }
       }   cout<<endl;
       
   }
   
    return 0;
}