#include<bits/stdc++.h>
using namespace std;

class myClass{
    public:
        void myFun(){
            cout << "I am First Gen..!" << "\n";
        }
};

class myChild: public myClass{
    // public: 
    //     void myFun(){
    //         cout << "I am Second Gen..!" << "\n";
    //     }
};

class myGrandChild: public myChild{
    // public: 
    //     void myFun(){
    //         cout << "I am Third Gen..!" << "\n";
    //     }
};


// -----------------------------------------------------------------------------
class myFather{
    public:
        void myFun(){
            cout << "I am the Father..!" << "\n";
        }
};

class myMother{
    public:
        void myFun(){
            cout << "I am the Mother..!" << "\n";
        }
};

class myChildren: public myFather, public myMother{
    public:
        
        // Uncomment the following line to resolve the ambiguity using 'using' and explicit scope.
        // 1. Use the 'using' declaration inside the Child class to bring the specific function into the scope.
        // 2. Explicitly specify the scope of the function you want to call.

        using myFather::myFun;
        
        void myFirstFun(){
            myFather::myFun();
        }
        
        void myShow(){
            myFirstFun();
        }

        using myMother::myFun;
        
        void mySecondFun(){
            myMother::myFun();
        }
        
        void mySecondShow(){
            mySecondFun();
        }
    
        // void myFun(){
        //     cout << "I am the Children..!" << "\n";
        // }
};

int32_t main(){
    
    myGrandChild myObj;
    
    myObj.myFun();
    
    myChildren myTest;
    
    myTest.myShow();
    
    myTest.mySecondFun();
    
    return 0;
}