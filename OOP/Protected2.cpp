#include<bits/stdc++.h>
using namespace std;

class myClass{
    protected:
        int age;
    public:
        void setAge(int A){
            age = A;
        }
        void getAge(){
            cout << age << "\n";
        }
};


int32_t main(){
    
    myClass myObj;
    
    myObj.setAge(12);
    
    myObj.getAge();
    
    return 0;
} 