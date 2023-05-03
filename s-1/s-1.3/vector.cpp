#include<bits/stdc++.h>
using namespace std;

void exploring_vector(){
    int x;
    vector<int>v;
    
    for(int i=0; i<5; i++){
        cin >> x;
        v.push_back(x);
    }
    for (auto &x: v){
        cout << x << " ";
    }cout << "\n";
    
    // containers - vector
    vector<int> v1;
    v1.push_back(1);
    v1.emplace_back(2);  // is fast when compare to push_back..
    vector<int>::iterator it = v1.begin();
    for (; it!=v1.end(); it++){
        cout << *(it) << " "; 
    }cout <<"\n";
    
    vector<int> v2(5, 10);
    for(auto it=v2.begin(); it != v2.end(); it++){
        cout << *(it) << " ";
    }cout <<"\n";
    
    vector<int>v3(5);
    for (auto &x: v3){
        cout << x << " ";
    }cout <<"\n";
    
    vector<int>v4(v2); // copy
    cout << v4.size() << "\n"; // length(), sizeof(v)/sizeof(v[0])
    
    cout << v4[v4.size()-1] << " " << v4.at(0) << "\n";
    
    v4 = {1, 2, 3, 4, 5};
    for (auto it=v4.rbegin(); it!=v4.rend(); it++){
        cout << *(it) << " ";
    }cout << "\n";
    
    // cbegin(), cend(), crbegin(), crend()
    
    cout << v4.back() << "\n"; // points to last element of vector.
    
    auto y = "system";
    auto z = 3.432;
    cout << y << " " << z << "\n";
    
    // erase(it_points)
    // erase(it_begin, it_ends[beyond the last elements which not included to delete])
    
    v4.erase(v4.begin());
    cout << *(v4.begin()) << "\n";
    for (auto &x: v4){
        cout << x << " ";
    }cout << "\n";
    
    v4.erase(v4.begin()+1, --v4.end()); // pre-drecrement
    for (auto &x: v4){
        cout << x << " ";
    }cout << "\n";
    
    vector<int>ve1(3,4);
    for (auto &i: ve1){
        cout << i << " ";
    }cout << "\n";
    
    ve1.insert(ve1.begin(), 33);
    cout << *(ve1.begin()) << "\n";
    
    ve1.insert(ve1.begin()+1, 3, -1);
    for (auto i: ve1){
        cout << i << " ";
    }cout << "\n";
    
    ve1.insert(ve1.begin()+2, {1, 2, 3,4});
    for (auto &i: ve1){
        cout << i << " ";
    }cout << "\n";
    
    vector<int>ve2(3, -2);
    vector<int>ve3(6, -1);
    ve2.swap(ve3);
    for (auto &i: ve2){
        cout << i << " ";
    }cout << "\n";
    
    cout << ve3.size() << "\n";
    ve2.clear();
    cout << ve2.size() << " " << ve2.empty() << "\n";
    
} // pop_back()

int32_t main(){
    exploring_vector();
    
    return 0;
}


/*
The time complexity for doing various operations on vectors is-

    Random access – constant O(1)
    Insertion or removal of elements at the end – constant O(1)
    Insertion or removal of elements – linear in the distance to the end of the vector O(N)
    Knowing the size – constant O(1)
    Resizing the vector- Linear O(N)

*/ 