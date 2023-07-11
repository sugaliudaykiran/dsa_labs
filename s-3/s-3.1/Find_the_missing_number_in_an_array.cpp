#include<bits/stdc++.h>
using namespace std;

void Missing4(int n, int *ar){
    int xor1=n, xor2;
    for (int i=0;i<n;i++){  // TC -> O(N).. SC -> O(1)..
        xor2 ^= ar[i];
        if (i>0){
            xor1 ^= i;
        }
    }xor1 ^= xor2;
    cout << xor1 << "\n";
}

void Missing3(int n, int *ar){
    int s1=(n*(n+1)/2); // TC -> O(N).. SC -> O(1)..
    int s2=0;
    for (int i=0;i<n;i++){
        s2+=ar[i];
    }cout << s1-s2 << "\n";
}

void Missing2(int n,int *ar){
    vector<bool>check(n+1); // TC -> O(2N)..     SC -> O(N)..
    for (int i=0;i<n;i++){
        check[ar[i]]=true;
    }for (int i=1;i<check.size();i++){  
        if (check[i]!=true){
            cout << i << " ";
        }
    }
}

void Missing(int n,int *ar){
    int j=1;
    for (;j<=n;j++){
        bool check=false; // TC -> O(N^2).. SC -> O(1)..
        for (int i=0;i<n;i++){
            if (ar[i]==j){
                check=true;
                break;
            }
        }if (!check){
            cout << j << "\n";
        }
    }
}
int32_t main(){
    
    // int n;
    // cin >> n;
    // int ar[n];
    // for (auto &x: ar){
    //     cin >> x;
    // }
    int n = 5;
    int ar[n]={1, 5, 4, 3};
    
    Missing4(n, ar);
    
    return 0;
}