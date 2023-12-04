#include<bits/stdc++.h>
using namespace std;

class myClass{
    string str="Hi";
    
    public:
    // setting private members. 
    void toSet(string s){
        str = s;
    }
    
    void toGet(){ // Access private variable.
        cout <<"Access Private Memeber : "<<str << "\n";
    }
    
};


int32_t main(){
    
    myClass myObject;
    
    myObject.toGet();
    
    myObject.toSet("Good Man..!");
    
    myObject.toGet();
    
    return 0;
}