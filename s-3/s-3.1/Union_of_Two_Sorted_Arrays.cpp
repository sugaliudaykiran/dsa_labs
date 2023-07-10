#include<bits/stdc++.h>
using namespace std;

vector<int> fun(int n,int *ar1,int m, int *ar2){
    set<int>s;
    
    for (int i=0;i<n;i++){ // TC -> O(LogN + LogM + N + M)
        s.insert(ar1[i]);
    }for (int i=0;i<m;i++){ // SC -> O(N + M) 
        s.insert(ar2[i]);
    }
    vector<int>temp;
    int i=0;
    for (auto &x: s){
        temp.emplace_back(x);
    }return temp;
}

int32_t main(){
    
    int n,m;
    cin >> n >> m;
    int ar1[n];
    for (auto &x: ar1){
        cin >> x;
    }
    int ar2[m];
    for (auto &x: ar2){
        cin >> x;
    }
    
    vector<int> v = fun(n,ar1,m,ar2);
    
    for (auto &x: v){
        cout << x << " ";
    }cout << "\n";
    return 0;
}

// =====================================================
#include<bits/stdc++.h>
using namespace std;

vector<int> fun(int n,int *ar1,int m, int *ar2){
    vector<int>v(10e2);
    for(int i=0;i<n;i++){ // TC -> O(N + M).. SC -> O(N + M)
        v[ar1[i]]++;
    }for (int j=0;j<m;j++){
        v[ar2[j]]++;
    }vector <int>temp;
    int j=0;
    for (int i=0;i<v.size();i++){
        if (v[i]>=1){
            temp.emplace_back(i);
        }
    }return temp;
}

int32_t main(){
    
    int n,m;
    cin >> n >> m;
    int ar1[n];
    for (auto &x: ar1){
        cin >> x;
    }
    int ar2[m];
    for (auto &x: ar2){
        cin >> x;
    }
    
    vector<int> v = fun(n,ar1,m,ar2);
    
    for (auto &x: v){
        cout << x << " ";
    }cout << "\n";
    return 0;
}

// =======================================================
#include<bits/stdc++.h>
using namespace std;

vector<int> fun(int n,int *ar1,int m, int *ar2){
    map<int, int>mp;
    for (int i=0;i<n;i++){ // TC -> O((N+M)Log(N+M)).. SC -> O(N + M)
        mp[ar1[i]]++;
    }
    for (int i=0;i<m;i++){
        mp[ar2[i]]++;
    }
    vector<int>temp;
    for (auto &x: mp){
        temp.emplace_back(x.first);
    }return temp;
}

int32_t main(){
    
    int n,m;
    cin >> n >> m;
    int ar1[n];
    for (auto &x: ar1){
        cin >> x;
    }
    int ar2[m];
    for (auto &x: ar2){
        cin >> x;
    }
    auto it1=ar1, it2=ar2;
    vector<int> v = fun(n,ar1,m,ar2);
    
    for (auto &x: v){
        cout << x << " ";
    }cout << "\n";
    return 0;
}

// ====================================================
#include<bits/stdc++.h>
using namespace std;

vector<int> fun(int n,int *ar1,int m, int *ar2){
    vector<int>Union; // Using Two pointer approach.. works on sorted array..
    int i=0,j=0;  //    TC -> O(N + M).. SC -> O(N + M)..
    while(i<n&&j<m){
        if (ar1[i]<=ar2[j]){ // checking the element when it's smaller (or) equal case then traversing "i" index..
            if (Union.size()==0 || ar1[i]!=Union.back()){
                Union.emplace_back(ar1[i]);
            }i++;
        }else{  // traversing in the "j" index..
            if (Union.size()==0 || ar2[j]!=Union.back()){
                Union.emplace_back(ar2[j]);
            }j++;
        }
    }while(i<n){ // traversing the remaining the elements..
        if (Union.back()!=ar1[i]){
            Union.emplace_back(ar1[i]);
        }i++;
    }while(j<m){
        if (Union.back()!=ar2[j]){
            Union.emplace_back(ar2[j]);
        }j++;
    }return Union;
}

int32_t main(){
    
    int n,m;
    cin >> n >> m;
    int ar1[n];
    for (auto &x: ar1){
        cin >> x;
    }
    int ar2[m];
    for (auto &x: ar2){
        cin >> x;
    }
    auto it1=ar1, it2=ar2;
    vector<int> v = fun(n,ar1,m,ar2);
    
    for (auto &x: v){
        cout << x << " ";
    }cout << "\n";
    return 0;
}