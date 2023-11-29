#include<bits/stdc++.h>
using namespace std;

class MyClass{
    public: 
        void myFun(){
            cout << "Hello World..!" << "\n";
        }
        
        void mySecondFun(string item){
            cout << "Welcome " + item << "\n";
        }
};

int32_t main(){
 
    MyClass MyObject;
    
    MyObject.myFun();
    
    MyObject.mySecondFun("Ant");
    
    return 0;
}


// 

#include<bits/stdc++.h>
using namespace std;

class myClass{
    public:
        // constructor - is an "special method", which automatically called when object of the class is created.
        myClass(){
            cout << "Hello Object" << "\n";
        }// constructor has same name of class, but it should under public, it does not have any return value.
};


int32_t main(){
    

    myClass myObject;
    
    return 0;
}