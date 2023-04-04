#include<iostream>
#include<string>
using namespace std;
class myClass {
    public:
    myClass(string name) {
        setname(name);
    }
    void setname(string x){
        name =x;
    }
    string getname(){
        return name;
    }
    private:
    string name;
};
int main() {
    myClass ob1("David");
    myClass ob2("John");
    cout<<ob1.getname();

    return 0;
}
