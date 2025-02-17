#include<bits/stdc++.h>
using namespace std;
vector<int> insort(vector<int>&v,int n){
    int comp=0;
    int shift=0;
    for(int i=1;i<n;i++){
        int key=v[i];
        int j=i-1;
        while(j>=0 && v[j]>key){
            v[j+1]=v[j];
            j--;
            comp++;
            shift++;
        }
        v[j+1]=key;
        if(j>=0){
            comp++;
        }
    }
    vector<int>ans;
    ans.push_back(comp);
    ans.push_back(shift);
    return ans;
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
    vector<int>ans=insort(v,n);
    cout<<"the sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<"the no of comparision: "<<ans[0]<<endl;
    cout<<"the no of shifts: "<<ans[1]<<endl;
}
