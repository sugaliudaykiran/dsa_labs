#include<bits/stdc++.h>
// #include<iostream>
using namespace std;

class myParent{
    public:
        string str = "Parent Attribute";
        
        void myPFunc(){
            cout << "I am myPFunc..!" <<"\n";
        }
        
        myParent(){
            cout << "This is Parent Class" << "\n";
        }
};

class myChild : public myParent{
    public:
        string s = "Child Attribute";
        
        myChild(){
            cout << "This is child Class" << "\n";
        }
};

int32_t main(){
    // cout << "Hi";
    
    myChild myObject;
    
    cout << myObject.s << "\n";
    
    myParent myTest;
    
    cout << myTest.str << "\n";
    
    myTest.myPFunc();
    
    // cout << myTest.s << "\n";
    
    myObject.myPFunc();
    
    cout << myObject.str << "\n";
    
    return 0;
}
/*
#include<bits/stdc++.h>

using namespace std;

class myParent{
    public:
        string str = "Hi";
};

class myChild: public myParent{
    public:
        void myFun(){
            cout << "helo "<< "\n";
        }
};

int32_t main(){
    
    myChild myObj;
    
    myObj.myFun();
    
    cout << myObj.str << "\n";
    
    return 0;
}

*/