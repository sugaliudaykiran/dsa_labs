#include<bits/stdc++.h>
using namespace std;

void exploring_list(){
    list<int>ls;     // doubly linked list.. which is similiar to vector but a way to better to inserting the elements in front.
    ls.push_back(10);
    ls.emplace_back(20);
    
    ls.push_front(5);
    ls.emplace_front(-1);
    
    for (auto &x: ls){
        cout << x << " ";
    }cout << "\n";
    
    // size(),  begin(), end(), rbegin(), ren(), back(), clear(), swap(), erase(), empty(), swap(), sort(), insert(), emplace(), front()
    // pop_back(), pop_front()
}

int32_t main(){
    exploring_list();
    
    return 0;
}

/*
Points to Remember about List Container
    It is generally implemented using a dynamic doubly linked list with traversal in both directions.
    Faster insert and delete operation as compared to arrays and vectors.
    It provides only sequential access. Random Access to any middle element is not possible
    It is defined as a template so it is able to hold any data type.
    It operates as an unsorted list would, which implies that by default, the list’s order is not preserved. However, there are techniques for sorting.

*/ 