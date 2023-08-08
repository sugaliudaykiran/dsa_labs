#include<bits/stdc++.h>
using namespace std;

const int ALPHABET_SIZE = 26;


struct TrieNode{
    struct TrieNode *child[ALPHABET_SIZE];
    bool isEnd;
};

struct TrieNode *getNode(void){
    struct TrieNode *pNode = new TrieNode;
    
    pNode -> isEnd = false;
    
    for (int i=0;i<ALPHABET_SIZE;i++){
        pNode -> child[i] = NULL;
    }return pNode;
};

void insert(struct TrieNode *root,string key){
    struct TrieNode *curNode = root;
    
    for(int i=0;i<key.size();i++){
        int index=key[i]-'a';
        if (!curNode -> child[index]){
            curNode -> child[index] = getNode();
        }curNode = curNode -> child[index];
    }
    curNode -> isEnd = true;
}

bool search(struct TrieNode *root, string key){
    struct TrieNode *curNode = root;
    
    for (int i=0;i<key.size();i++){
        int index=key[i]-'a';
        if (!curNode -> child[index]){
            return false;
        }curNode=curNode -> child[index];
    }return (curNode!=NULL && curNode->isEnd);
}

bool isEmpty(TrieNode *root){
    for(int i=0;i<ALPHABET_SIZE;i++){
        if (root->child[i]){
            return false;
        }
    }return true;
}

TrieNode* remove(TrieNode *root, string key, int i){
    if (!root){
        return NULL;
    }
    
    if (i==key.size()){
        if (root->isEnd){
            root -> isEnd =false;
        }
        if (isEmpty(root)){
            delete(root);
            root=NULL;
        }
        return root;
    }
    
    int index=key[i]-'a';
    root -> child[index]=remove(root->child[index],key,i+1);
    
    if (isEmpty(root) && root->isEnd==false){
        delete(root);
        root=NULL;
    }return root;
}



int32_t main(){
    
    string keys[] = {"an", "and", "ant", "bad", "bat", "zoo"};
    int n=sizeof(keys)/sizeof(keys[0]);
    
    struct TrieNode *root = getNode();
    
    for (int i=0;i<n;i++){
        insert(root, keys[i]);
    }
    // remove the "zoo" from the trie.
    root = remove(root, "zoo", 0);

    search(root, "zoo")? cout << "zoo --- " << "Yes\n" : 
						cout << "zoo --- " << "No\n"; 
    
    return 0;
}