#include<bits/stdc++.h>
using namespace std;
void find(vector<int>&v,int key){
    sort(v.begin(),v.end());
    int i=0;
    int j=v.size()-1;
    int f=0;
    while(i<j){
        if(v[i]+v[j]==key){
            f=1;
            break;
        }
        else if(v[i]+v[j]<key){
            i++;
        }
        else{
            j--;
        }
    }
    if(f==0){
        cout<<"sum not found!"<<endl;
    }
    else{
        cout<<"sum found! => "<<v[i]<<"+"<<v[j]<<"="<<key<<endl;
    }
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
    int key;
    cout<<"enter the key to be searched: ";
    cin>>key;
    find(v,key);
    return 0;
}
