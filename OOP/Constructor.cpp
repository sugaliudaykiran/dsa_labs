#include<bits/stdc++.h>
using namespace std;

class myClass{
    public:
        string str;
        // constructor - is an "special method", which automatically called when object of the class is created.
        void myFun(string str);
        
        myClass(){
            cout << "Hello World..!" << "\n";
            str = "Kiran";
            cout << "value of str : " << str << "\n";
        }
};

void myClass::myFun(string str){
    cout << "Hello "+ str << "\n";
}

int32_t main(){
    
    myClass myObject;
    
    cout << myObject.str << "\n";
    
    myObject.myFun("uday");
    
    cout << myObject.str << "\n";
    return 0;
}