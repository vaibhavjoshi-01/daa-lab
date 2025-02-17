#include<bits/stdc++.h>
using namespace std;
vector<int> selsort(vector<int>&v,int n){
    int comp=0;
    int shift=0;
    for(int i=0;i<n;i++){
        int maxi=i;
        for(int j=i+1;j<n;j++){
            comp++;
            if(v[j]<v[maxi]){
                maxi=j;
            }
        }
        int temp=v[i];
        v[i]=v[maxi];
        v[maxi]=temp;
        if(maxi!=i)shift++;
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
    vector<int>ans=selsort(v,n);
    cout<<"the sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<"the no of comparison: "<<ans[0]<<endl;
    cout<<"the no of shifts: "<<ans[1]<<endl;
}
