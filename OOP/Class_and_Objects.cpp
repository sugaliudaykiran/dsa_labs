#include<bits/stdc++.h>
using namespace std;

class MyClass{
    public:
        int MyNum;
        string MyName;
};

int32_t main(){
    
    MyClass Test;
    cin >> Test.MyNum;
    cin >> Test.MyName;
    cout << Test.MyName  << " " << Test.MyNum << "\n";
    
    return 0;
}