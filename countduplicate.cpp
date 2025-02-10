#include<bits/stdc++.h>
using namespace std;
int firstidx(vector<int> v,int key){
    int low=0;
    int high=v.size()-1;
    int res=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(v[mid]==key){
            res=mid;
            high=mid-1;
        }
        else if(key>v[mid]){
            low=mid+1;
        }
        else if(key<v[mid]){
            high=mid-1;
        }
    }
    return res;
}
int lastidx(vector<int> v,int key){
    int low=0;
    int high=v.size()-1;
        int res=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(v[mid]==key){
            res=mid;
            low=mid+1;
        }
        else if(key>v[mid]){
            low=mid+1;
        }
        else if(key<v[mid]){
            high=mid-1;
        }
    }
    return res;
}
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    vector<int>v;
    cout<<"enter the array elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int key;
    cout<<"enter the element to be searched: ";
    cin>>key;
    int f=firstidx(v,key);
    int l=lastidx(v,key);
    if(l==-1||f==-1){
        cout<<"element not found!";
    }
    else{
        int res=(l-f)+1;
    }
    return 0;
}
