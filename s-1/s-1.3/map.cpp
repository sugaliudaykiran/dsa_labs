#include<bits/stdc++.h>
using namespace std;

void exploring_map(){ // hashing => TC -> O(log N)
    map<int, int>mp; // map stores any data type in form of key/value pairs..
    map<int, pair<int, int>> mpp;// keys are sorted && unique..
    map<pair<int, int>, int> mppp; 
    
    mp[1] = 2;
    mp.insert({4, 3});
    mp.emplace(2, 7);
    mp.emplace(-1, 4);
    
    mpp[1] = make_pair(7,-1);
    mpp.insert(make_pair(-1,make_pair(4, 3)));
    cout << mpp[1].first<< " " << mpp[1].second << "\n"; 
    
    mppp.emplace(make_pair(make_pair(2, 7), 10));
    mppp.emplace(make_pair(make_pair(-1, 7), -11));
    
    for (auto &x: mp){
        cout << x.first << " " << x.second << "\n";
    }cout << "\n";
    
    for (auto &x: mpp){
        cout << x.first << " " << x.second.first << " " << x.second.second <<"\n";
    }cout << "\n";
    
    for (auto &x: mppp){
        cout << x.first.first <<" " << x.first.second << " " << x.second <<"\n";;
    }cout << "\n";
    
    auto it = mp.find(-1);
    cout << (*it).second << "\n";
    
    auto it2 = mp.lower_bound(-1);
    cout << (*it2).first << " " << it2 -> second << "\n";
    
    auto it1 = mp.upper_bound(-1);
    cout << (*it1).first << " " << it1 -> second << "\n";
    
    cout << mp.size() << "\n";
    // empty(), erase(), 
}
int32_t main(){
    exploring_map();
    
    return 0;
}

/*
    multimap => allows duplicates keys & sorted order of keys..  TC -> O(log N)
    unordered_map  => unqiue keys & unordered of keys..     TC -> O(1) on avg case and  O(n) on worst case..
*/ 