#include <bits/stdc++.h>
using namespace std;
int partion(vector<int>&v,int low,int high,int& comp,int& swapp){
    int pivot=v[low];
    int i=low;
    int j=high;
    while(i<j){
        while(v[i]<=pivot){
            i++;
            comp++;
        }
        while(v[j]>pivot){
            j--;
            comp++;
        }
        if(i<j){
            swap(v[i],v[j]);
            swapp++;
        }
    }
    swap(v[j],v[low]);
    swapp++;
    return j;
}
void quickSort(vector<int>&v,int low,int high,int& comp,int& swapp){
    if(low<high){
        int pi=partion(v,low,high,comp,swapp);
        quickSort(v,low,pi-1,comp,swapp);
        quickSort(v,pi+1,high,comp,swapp);
    }
}
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    cout<<"enter the array elements: ";
    vector<int> v;
    int comp=0;
    int swapp=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    quickSort(v,0,n-1,comp,swapp);
    cout<<"the sorted array is: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<"the number of comparisons and swapp are: "<<comp<<" "<<swapp;
    return 0;
}
