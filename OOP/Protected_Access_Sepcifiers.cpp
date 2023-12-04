#include<bits/stdc++.h>
using namespace std;

class myClass{
    protected:
        int salary;
    // pubilc:
    //      myClass(int value): salary(value){}
        
    //     void GetMySalary(){
    //         cout << salary << "\n";
    //     }
    
    // we can update the protected data, by the help of public assigntion. 
        
};

class myChild: public myClass{
    public:
        void myDisplay(){
            cout << salary << "\n";
        }
        void mySalaryAssignation(int s){
            salary = s;
        }
};

int32_t main(){
    
    myChild myObj;
    myObj.myDisplay();
    
    myObj.mySalaryAssignation(1200);
    myObj.myDisplay();
    
    cout << myObj.salary << "\n";
    return 0;
}