#include<bits/stdc++.h>
using namespace std;
void intersection(vector<int>&v1,vector<int>&v2,int &n,int &m){
    vector<int>ans;
    int i=0,j=0;
    int f=0;
    while(i<n && j<m){
        while(v1[i]==v1[i+1]){
            i++;
        }
        while(v2[j]==v2[j+1]){
            j++;
        }
        if(v1[i]==v2[j]){
            ans.push_back(v1[i]);
            i++;
            j++;
            f=1;
        }
        else if(v1[i]>v2[j]){
            j++;
        }
        else{
            i++;
        }
    }
    if(f==0){
        cout<<"no common elements!"<<endl;
    }
    else{
        cout<<"The elements which are common in both the arrays are: "<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }
}
int main(){
    int n;
    cout<<"enter the size of the array1: ";
    cin>>n;
    cout<<"enter the array1 elements: ";
    vector<int>v1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    int m;
    cout<<"enter the size of the array2: ";
    cin>>m;
    cout<<"enter the array2 elements: ";
    vector<int>v2;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        v2.push_back(x);
    }
    intersection(v1,v2,n,m);
    return 0;
}
