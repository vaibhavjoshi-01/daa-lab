#include <bits/stdc++.h>
using namespace std;
int search(vector<int> v,int key){
    for(int i=0;i<v.size();i++){
        if(v[i]==key){
            return 1;
        }
    }
    return -1;
}
int main() {
    vector<int>v;
    int n;
    cout<<"enter the size of vector: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int el;
        cout<<"enter the element: ";
        cin>>el;
        v.push_back(el);
    }
    int key;
    cout<<"enter the element to be searched: ";
    cin>>key;
    int f=search(v,key);
    if(f==1){
        cout<<"element found!";
    }
    else cout<<"element not found!";
    return 0;
}
