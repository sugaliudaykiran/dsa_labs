#include<bits/stdc++.h>
using namespace std;

class myClass{
    string nonPublic = "Uday"; // By default it's comes under "private".
    
    public:
        string str;
        
        // "Private Attributes" are access by Public Function/Method.
        void accessingNonpublic(){
            cout << "Accessing Private variable : " << nonPublic << "\n";
            nonPublic = "Kiran";
            cout << "Modifing Private variable : " << nonPublic << "\n";
        }
};

// myClass::nonPublic = "Hi";

int32_t main(){
    
    myClass myObject;
    
    myObject.accessingNonpublic();
    
    myObject.str = "Heloo";
    
    cout << myObject.str << "\n";
        
    return 0;
}