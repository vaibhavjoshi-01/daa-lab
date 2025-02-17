#include<bits/stdc++.h>
using namespace std;
bool duplicate(vector<int>&v,int n){
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    vector<int>v;
    cout<<"enter the array elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    bool y=duplicate(v,n);
    cout<<"the sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    if(y){
        cout<<endl<<"the array does not contains duplicate elements!";
    }
    else{
        cout<<endl<<"the array contains duplicate elements!";
    }
}
