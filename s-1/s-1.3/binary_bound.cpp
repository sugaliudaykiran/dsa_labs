#include<bits/stdc++.h>
using namespace std;

void exploring_binary_bound(){

    int ar[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
    int n = sizeof(ar)/sizeof(ar[0]);
    int x;
    cin >> x;
    
    bool exist = binary_search(ar, ar+n, x);

    // first occurrence of x in sorted array.
    int index = lower_bound(ar, ar+n, x) - ar;
    if (index < n && ar[index] == x ){
        cout << index;
    }else{
        cout << -1;
    }cout << "\n";
    
    
    // last occurrence of x in sorted array.
    int idx = upper_bound(ar, ar+n, x) - ar;
    idx--;
    if (idx >= 0 && idx < n && ar[idx]==x ){
        cout << idx;
    }else{
        cout << -1;
    }cout << "\n";
    
    // largest number smaller than x in the sorted array.
    index = lower_bound(ar, ar+n, x) - ar;
    index--;
    if (index>=0){
        cout << ar[index];
    }else{
        cout << -1;
    }cout << "\n";
    
    
    // smallest number greater than x in sorted array
    idx = upper_bound(ar, ar+n, x) - ar;
    if (idx<n){
        cout << ar[idx];
    }else{
        cout << -1;
    }cout << "\n";
    
}

int32_t main(){
    
    exploring_binary_bound();
    
    return 0;
}


/*

#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    
    // set <int> s;
    // int n;
    // cin >> n;
    
    // while(n--){
    //     int x;
    //     cin >> x;
    //     s.emplace(x);
    // }
    
    // vector<int>v(s.begin(), s.end());
    // //  TC -> O(Log N).. binary_search,lower_bound, upper_bound..
    // bool b_val = binary_search(v.begin(), v.end(), 1);
    // cout << b_val << "\n";
    
    // for (auto &x: v){
    //     cout << x << " ";
    // }cout << "\n";
    
    // lower_bound(ar,ar+n,x) -> which return the iterator points to x if it's present else points to next greater one.
    // upper_bound(ar,ar+n,x) -> which return the iterator points to next greater element of x even the x is present.
    vector <int> v({1,1,1, 2, 2, 3, 3,4, 4,5, 5});
    cout << (lower_bound(v.begin(),v.end(),5)) - v.begin() << "\n";
    cout << (upper_bound(v.begin(),v.end(),5)) - v.begin()<< "\n";
    
    
    // map<int, int>mp; // key are unqiue and in the sorted order..
    // int n;
    // cin >> n;  // TC -> insert/erase => O(Log N)..
    // while(n--){
    //     pair<int, int>p;
    //     cin >> p.first >> p.second;
    //     // mp.insert(p);
    //     mp.emplace(p);
    // }
    
    
    // // cout << mp[0] << "\n";
    // for (auto &x: mp){
    //     cout << x.first << " " << x.second << "\n";
    // }
    
    return 0;
}

*/ 