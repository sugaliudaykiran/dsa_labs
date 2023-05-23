#include<bits/stdc++.h>
using namespace std;


int32_t main(){
    
    int n;
    cin >> n;
    int ar[n];
    unordered_map<int, int> mp;
    for (int i=0; i<n; i++){   // TC -> O(N).. SC -> O(N)..
        cin >> ar[i];
        mp[ar[i]]++;
    }
    
    for (auto x: mp){
        cout << x.first << " " << x.second << "\n";
    }
    
    return 0;
}


// =============================================
#include<bits/stdc++.h>
using namespace std;

void fun(int n, int *ar){
    vector<bool>visited(n, false);
    for (int i=0; i<n; i++){  // TC -> O(N^2).. SC -> O(N)..
        int x, cnt;
        if (visited[i] == false){
            visited[i] = true;
            x = ar[i];
            cnt=1;
            for (int j=i+1; j<n; j++){
                if (x == ar[j]){
                    cnt++, visited[j]=true;
                }
            }cout << x << " " << cnt << "\n";
        }
    }
}

int32_t main(){
    int n;
    cin >> n;
    
    int ar[n];
    for (int i=0; i<n; i++){
        cin >> ar[i];
    }
    
    fun(n,ar);
    return 0;
}