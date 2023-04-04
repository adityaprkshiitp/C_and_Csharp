#include<iostream>
#include<string>
using namespace std;
class myClass {
    public:
    void setname(string x) {
        name=x;
    }
    string getname(){
        return name;
    }
    private:
    string name;
};
int main() {
    myClass myobj;
    myobj.setname("John");
    cout<<myobj.getname();
    
    return 0;
}