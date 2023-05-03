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

*/ 