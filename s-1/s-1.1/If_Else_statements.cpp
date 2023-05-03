#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int age;
    cin >> age;
    
    if (age >= 18){
        cout << "adult age";
    }
    else if (age < 18)
    {
        cout << "your are not an adult..";
    }
    // else{
    //     cout << "you are not an adult..";
    // }
    return 0;
}

// ====================================================
// Example - 2

#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int marks;
    cin >> marks;
    
    if (marks<25){
        cout << "Grade - F" << "\n";
    }
    else if (marks<45){
        cout << "Grade - E" << "\n";
    }
    else if (marks<50){
        cout << "Grade - D" << "\n";
    }
    else if (marks<60){
        cout << "Grade - C" << "\n";
    }
    else if (marks<80){
        cout << "Grade - B" << "\n";
    }
    else {
        cout << "Grade - A";
    }
    return 0;
}

// ===========================================================
// example - 3

#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int age;
    cin >> age;
    
    
    if (age < 18){
        cout << "not eligible for job";
    }
    else if (age < 58)  // Nested if
    {
        cout << "eligible for job";
        if (age > 54){
            cout << ", but retirement soon..";
        }
    }
    else{
        cout << "retirement time";
    }
    
    return 0;
}