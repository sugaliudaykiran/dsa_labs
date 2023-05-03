#include<bits/stdc++.h>
using namespace std;

void exploring_unordered_multiset(){
    unordered_multiset<int>s;  // TC -> O(1) on average & O(n) on linear time in the worst case.
    s.insert(1);
    s.emplace(-1); // hasing.. unordered & allows duplicates..
    s.emplace(2);
    s.insert(1);
    s.emplace(-1);
    s.emplace(2);
    s.insert(4);
    
    for (auto &x: s){
        cout << x << " ";
    }cout << "\n";
    
    cout << s.count(-1) << "\n";
    
    auto it = s.find(4);
    cout << "val : " << *(it) << "\n";
    
    cout << s.size() << " " << s.empty() << "\n";
    
    s.erase(4);
    cout << s.size() << "\n";
    
    auto it1 = s.find(2);
    auto it2 = s.find(-1);
    
    s.erase(it1, it2);
    for (auto &x: s){
        cout << x << " ";
    }cout << "\n";
    
    s.clear();
    cout << s.size() << "\n";
}

int32_t main(){
    exploring_unordered_multiset();
    
    return 0;
}

/*

 The Unordered_set allows only unique keys, for duplicate keys unordered_multiset should be used.
*/ 