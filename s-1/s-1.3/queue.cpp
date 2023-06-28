#include<bits/stdc++.h>
using namespace std;

void exploring_queue(){
    queue<int>q;  // FIFO
    q.push(10);
    q.emplace(20);
    q.emplace(30);
    
    q.back()+=5;
    cout << q.back() << "\n";
    
    
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    
//  empty(), size()
} // TC -> O(1)..

int32_t main(){
    
    exploring_queue();
    
    return 0;
}


/*

#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    
    queue<int>q; // FIFO -> TC => O(1)..push/pop SC -> O(N)
    int n;
    cin >> n;
    
    while(n--){
        int x;
        cin >> x;
        // q.push(x);  // push's the last element..
        q.emplace(x);
    }
    
    cout << q.size() << " "<< q.back() << "\n";
    
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }cout << "\n";  // pop's the first element..
    
    return 0;
}

*/ 