#include<bits/stdc++.h>
using namespace std;

static bool mycmp(pair<int, int>p1, pair<int, int>p2){
    if (p1.second == p2.second){
        return p1.first > p2.first;
    }
    return p1.second > p2.second;
}

// 
vector<int> fun(vector<int> &nums, int k){
    if (k > nums.size()){
        return {};
    }
    unordered_map<int, int>mp;
    for (auto x: nums){
        mp[x]++;
    }
    vector<pair<int, int>> vmp;
    for (auto x: mp){
        vmp.emplace_back(x);
    }
    sort(vmp.begin(), vmp.end(), mycmp);
    vector <int> res;
    auto i=0;
    for (auto x: vmp){
        if (i==k){
            break;
        }
        res.emplace_back(x.first);
        i++;
    }
    return res;
}

int32_t main(){
    
    int tc;
    cin >> tc;
    while (tc--){
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i: nums){
            cin >> i;
        }
        int k; 
        cin >> k;
        fun(nums, k);
        vector<int>res = fun(nums, k);
        for (auto x: res){
            cout << x << " ";
        }cout << "\n";
        
        
    }
    return 0;
}


/*
// Binding:
std::lower_bounds(first, last, value, std::bind(&Foo::comparitor, this, _1, _2));
// Lambda:
std::lower_bounds(first, last, value, [](const Bar & first, const Bar & second) { return ...; });
*/ 