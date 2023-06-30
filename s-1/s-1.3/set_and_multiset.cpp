#include<bits/stdc++.h>
using namespace std;

void exploring_set(){
    set<int>s;  // set =>  sorted && unique elements -> O(log N)..
    s.insert(1);
    s.insert(2);
    s.insert(1);
    s.insert(-1);
    s.emplace(-1);
    s.emplace(4);
    s.emplace(-4);
    
    for (auto x: s){
        cout << x << " ";
    }cout << "\n";
   
    auto it = s.find(-1);
    cout << *it << "\n";
    
    auto index_l = s.lower_bound(-1);
    auto index_u = s.upper_bound(-1);
    cout << *index_u << " " << *index_l << "\n"; 
    
    cout << s.count(2) <<"\n";
    
    s.erase(1);
    for (auto x: s){
        cout << x << " ";
    }cout << "\n";
    
    auto f1 = s.find(-1);
    auto f2 = s.find(4);
    s.erase(f1, f2);
    for (auto x: s){
        cout << x << " ";
    }cout << "\n";  
    // empty(), clear()
    
    cout << "multiset" << "\n";
    multiset<int>ms; // multiset => sorted && allows duplicates elements.  => O(log N)
    ms.insert(-4);
    ms.insert(1);
    ms.insert(2);
    ms.insert(1);
    ms.insert(-1);
    ms.emplace(-1);
    ms.emplace(4);
    ms.emplace(-4);
    
    for (auto x: ms){
        cout << x << " ";
    }cout << "\n";
    
    
    ms.erase(-4);  // erase all occurances of that value.
    for (auto x: ms){
        cout << x << " ";
    }cout << "\n";
    
    ms.erase(ms.find(1));  // erase only address of that element not the occurances..
    for (auto x: ms){
        cout << x << " ";
    }cout << "\n";
    
    ms.emplace(-1);
    ms.emplace(-1);
    int cnt = ms.count(-1);
    cout << cnt << "\n";
    
    auto low = ms.lower_bound(-1);
    auto up = ms.upper_bound(-1);
    
    cout << *low << " " << *up << "\n";  
    
    // auto low = ms.lower_bound(-1) - ms.begin(); // doesn't work bcz set/multiset doesn't stores the elements in sequencial order, it was tree structure.
    
    ms.erase(ms.find(-1), ms.find(1));
    for (auto x: ms){
        cout << x << " ";
    }cout << "\n";
    
    cnt = ms.count(-1);
    cout << cnt << "\n";
}

int32_t main(){
    
    exploring_set();
    
    return 0;
}


/*
    
    set & multiset:- 
    
    Insertion of Elements- O(log N)
    Accessing Elements – O(log N)
    Deleting Elements- O(log N)
*/ 

/*

#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    
    // set -> sorted, doesn't allow duplicates  TC -> O(Log N)..
    set <int> s;
    int n;
    cin >> n;
    
    while(n--){
        int x;
        cin >> x;
        // s.insert(x);
        s.emplace(x);
    }
    
    // for (auto &x: s){
    //     cout << x << " "; 
    // }cout << "\n";
    
    for (auto it=s.begin();it!=s.end();it++){
        cout << (*it) << " ";
    }cout << "\n";
    
    cout << s.count(11) << "\n";
    // s.erase(11);
    s.erase(s.find(11), s.find(55));
    
    for (auto &x: s){
        cout << x << " ";
    }cout << "\n";
    
    cout << s.count(11) << "\n";
    
    return 0;
}

*/ 

/*

#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    
    multiset<int>ms; // TC -> O(log N)... insert/emplace/erase 
    int n;
    cin >>n;
    while(n--){
        int x;
        cin >> x;
        // ms.insert(x);
        ms.emplace(x);
    }
    
    for(auto &x: ms){
        cout << x << " ";
    }cout << "\n";
    
    cout << ms.count(1) << "\n";
    // ms.erase(1);  // removes all occurances of value.
    // ms.erase(ms.find(1)); // removing only the iterator pointing to that address, find's from left to right.
    // ms.erase(ms.find(1), ms.find(2)); // removes all occurances.
    // cout << ms.count(1) << "\n";
    
    
    
    return 0;
}

*/