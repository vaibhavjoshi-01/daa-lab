#include<bits/stdc++.h>
using namespace std;
void maxel(vector<int>&v,ink=pos){
    priority_queue<int>pq;
    for(int i=0;i<v.size();i++){
        pq.push(v[i]);
    }

    while(--pos){
        pq.pop();
    }
    cout<<"kth largest"<<pq.top();
}

int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    cout<<"enter the array elements: ";
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int pos;
    cout<<"enter the position: ";
    cin>>pos;
    maxel(v,pos)
    return 0;
}
