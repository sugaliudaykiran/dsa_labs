#include<bits/stdc++.h>
using namespace std;

void secondOne(int *ar,int n){
    if (n<=1){
        cout <<" -1 "<< "\n";  // TC -> O(N).. SC -> O(1).. In one traversal
    }else{
        int smaller=INT_MAX,secondSmaller=INT_MAX;
        int greater=INT_MIN,secondGreater=INT_MIN;
        for(int i=0;i<n; i++){
            if (ar[i] < smaller){
                secondSmaller = smaller;
                smaller=ar[i];
            }else if (secondSmaller > ar[i] && smaller < ar[i]){
                secondSmaller = ar[i];
            }
            
            if (ar[i] > greater){
                secondGreater=greater;
                greater=ar[i];
            }else if (ar[i] > secondGreater && ar[i] < greater){
                secondGreater=ar[i];
            }
            
        }cout << "secondSmaller :" << smaller << " " << secondSmaller << "\n";
        cout << "secondGreater :" << greater << " " << secondGreater << "\n";
    }
}

int32_t main(){
    
    int n;
    cin >> n;
    
    int ar[n];
    for (auto &x: ar){
        cin >> x;
    }
    secondOne(ar, n);
    
    return 0;
}
//======================================
#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    
    int n;
    cin >> n;
    
    int ar[n];
    for (auto &x: ar){
        cin >> x;
    }
    
    sort(ar, ar+n);
    
    auto it = upper_bound(ar, ar+n, ar[0]);
    auto it2 = lower_bound(ar, ar+n, ar[n-1]);
    if (it != ar+n){
        cout << "2 nd Smallest Number: " << *it << "\n";
    }else{
        cout << "-1" <<"\n";
    }
    if (it2-1 != ar+n and n >=2){
        cout << "2 nd larget Number: " << *(it2-1) << "\n";
    }else{
        cout << "-1" << "\n";
    }
    // cout << *(it) << " " << *(it2-1) << "\n";
    
    return 0; // 1,2,4,7,7,5
}

//////////

#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    
    int n;
    cin >> n;   // TC -> O(N) + O(N).. => O(2N)..
                //  SC -> O(1)..
    
    int ar[n];
    for (auto &x: ar){
        cin >> x;
    }
    
    int min_val=INT_MAX,max_val=INT_MIN;
    for (auto &x: ar){
        if (min_val > x){
            min_val = x;
        }
        if (max_val < x){
            max_val = x;
        }
    }
    
    int sec_min_val=INT_MAX,sec_max_val=INT_MIN;
    for (auto &x: ar){
        if (sec_min_val > x && x > min_val){
            sec_min_val = x;
            // cout << "2 nd Max Element: " << x << "\n";
            // break;
        }
        if (sec_max_val < x && x < max_val){
            sec_max_val = x;
            // 
            // break;
        }
    }
    if (n < 2){  
        cout << "-1" << "\n";
    }else{
        cout << "2 nd Min Element: " << sec_min_val << "\n";
        cout << "2 nd Max Element: " << sec_max_val << "\n";
    }
    
    return 0;
}