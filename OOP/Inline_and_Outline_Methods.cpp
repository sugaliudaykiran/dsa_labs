#include<bits/stdc++.h>
using namespace std;

class myClass{
    public: 
        int res;
        
        void myFun(int x, int y){
            res = x+y;
        }
        
        int myMethod(int first, int second){
            return pow(first,second);
        }
        // defining function inside the class.
        void myFun2();
};

//  To declare function outside the class,  first function need to defined inside the class.
void myClass::myFun2(){
    cout << "Hello World..!" << "\n";
}

int32_t main(){
    

    myClass myObject;
    
    myObject.myFun(7997,21);
    
    cout << myObject.res << "\n";
    
    cout << myObject.myMethod(2,3) <<"\n";
    
    myObject.myFun2();
    
    return 0;
}