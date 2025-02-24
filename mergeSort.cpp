#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>&v,int low,int high, int mid,int& comp,int& inv){
    vector<int> ans;
    int i=low;
    int j=mid+1;
    while(i<=mid && j<=high){
        comp++;
        if(v[i]<=v[j]){
            ans.push_back(v[i]);
            i++;
        }
        else{
            ans.push_back(v[j]);
            j++;
            inv+= (mid - i + 1);
        }
    }
    while(i<=mid){
        ans.push_back(v[i]);
        i++;
    }
    while(j<=high){
        ans.push_back(v[j]);
        j++;
    }
    for(int k=0;k<ans.size();k++){
        v[k+low]=ans[k];
    }
}
void mergeSort(vector<int>&v,int low,int high,int& comp,int& inv){
    if(low<high){
        int mid=(low+high)/2;
        mergeSort(v,low,mid,comp,inv);
        mergeSort(v,mid+1,high,comp,inv);
        merge(v,low,high,mid,comp,inv);
    }
}
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    cout<<"enter the array elements: ";
    vector<int> v;
    int comp=0;
    int inv=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    mergeSort(v,0,n-1,comp,inv);
    cout<<"the sorted array is: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<"the number of comparisons and inversions are: "<<comp<<" "<<inv;
    return 0;
}
