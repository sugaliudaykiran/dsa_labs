#include<bits/stdc++.h>
using namespace std;

void exploring_priority_queue(){
    priority_queue<int> pq;  // Max heap..
    pq.push(1);
    pq.push(-2);
    pq.emplace(5);
    pq.emplace(-7);
    
    cout << pq.size() << "\n";  // push, pop, emplace -> O(logN).. Internally does Hashing ,.
    
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    //======================
    
    priority_queue<int, vector<int>, greater<int>>pq2;  // MIn heap..
    pq2.push(-1);
    pq2.push(2);
    pq2.push(-7);
    pq2.push(5);
    
    cout << pq2.size() << "\n";  // push, pop, emplace -> O(logN).. Internally does Hashing ,.
    
    while(!pq2.empty()){
        cout << pq2.top() << " ";
        pq2.pop();
    }
//  empty(), size(),[ swap() -> O(N) => AS ]
} // TC -> O(1)..

int32_t main(){
    
    exploring_priority_queue();
    
    return 0;
}


/*

*/ 