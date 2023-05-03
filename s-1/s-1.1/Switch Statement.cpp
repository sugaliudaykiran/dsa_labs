#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int day_num;
    cin >> day_num;
    
    switch(day_num) {
        case 1: 
           cout << "monday" << "\n";
           break;
        case 2: 
           cout << "tuesday" << "\n";
           break;
        case 3: 
           cout << "wednesday" << "\n";
           break;
        case 4: 
           cout << "thurday" << "\n";
           break;
        case 5: 
           cout << "friday" << "\n";
           break;
        case 6: 
           cout << "saturday" << "\n";
           break;   
        case 7: 
           cout << "sunday" << "\n";
           break;
        cout << "this will check";
        default:
           cout << "choice day_num in btw 1 to 7" << "\n";
           break;
        cout << "this will check";
    }
    return 0;
}