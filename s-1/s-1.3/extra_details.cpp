#include<bits/stdc++.h>
using namespace std;

bool mycmp(const pair<int, int>&p1,const pair<int, int>&p2){
    if (p1.second < p2.second){
        return true;
    }
    // else if (p1.second > p2.second){
    //     return false;
    // }
    else{
        return (p1.first>p2.first);
    }
}

void exploring_remaining_fields(){

    int ar[] = {15, 3, 61, 7, 11, 9};
    int n = sizeof(ar)/sizeof(ar[0]);
    sort(ar, ar+n);
    // sort(ar+2, ar+n);
    // sort(ar, ar+n, greater<int>());  // descreasing order..
    // reverse(ar, ar+n);
    
    for (auto x: ar){
        cout << x << " ";  
    }cout << "\n";
    
    // vector => sort(v.begin(), v.end());
    
    pair<int, int> arr[] = {{4, 1}, {1, 2}, {2, 1}, {3, 1}};
    int N = sizeof(arr)/sizeof(arr[0]);
    
    sort(arr, arr+N);  // sorted on first element in pairs of array.
    for (auto x: arr){
        cout << x.first << " " << x.second << "\n";
    }
    
    // sort(arr, arr+N, mycmp);
    sort(arr, arr+N, [](const pair<int, int> &x, const pair<int, int> &y) {return x.first>y.first;});
    for (auto x: arr){
        cout << x.first << " " << x.second << "\n";
    }
    
    int num = 6; // binary num => 0110  => counts the total count of set bits.. => 2
    int cnt = __builtin_popcount(num);
    cout << cnt << "\n";
    
    long long lnum = 2320042174; // binary num ex:=> 010101100  => counts the total count of set bits.. => 4
    long long cnts = __builtin_popcountll(lnum);
    cout << cnts << "\n";
    
    // string s="123"; // sorted string/array..
    string s="213";
    do{
        cout << s << "\n";
    }while(next_permutation(s.begin(), s.end()));
    
    int a[] = {1, 2, 11, 4, -1};
    n = sizeof(a)/sizeof(a[0]);
    int min_val = *min_element(a, a+n);
    int max_val = *max_element(a, a+n);
    
    cout << min_val << " " << max_val << "\n";
}

int32_t main(){
    
    exploring_remaining_fields();
    
    return 0;
}


/*
        
        template <class T1, class T2>
        bool operator<(const pair<T1, T2>& x, const pair<T1, T2>& y);
        
        Returns: x.first < y.first || (!(y.first < x.first) && x.second < y.second)
=====================================================================================================
    
    struct LessSecond
    {
        template<typename T, typename U>
        bool operator()(const std::pair<T,U> &x, const std::pair<T,U> &y) const
        {
            return x.second < y.second;
        }
    };
    // ...
sort(x.begin(), x.end(), LessSecond());

*/ 