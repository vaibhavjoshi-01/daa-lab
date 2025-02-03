#include <bits/stdc++.h>
using namespace std;
int search(vector<int> v,int key){
    int low=0;
    int high=v.size()-1;
    while(low<high){
        int mid=(low+high)/2;
        if(v[mid]==key){
            return 1;
        }
        else if(v[mid]<key){
            low=mid+1;
        }
        else if(v[mid]>key){
            high=mid-1;
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
