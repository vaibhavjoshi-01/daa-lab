#include<bits/stdc++.h>
using namespace std;
int countdiff(vector<int>v,int key){
    int c=0;
    int n=v.size();
    for(int k=0;k<n;k++){
        int i=0;int j=n-1-k;
        while(i<j){
            if(v[j]-v[i]==key){
                c++;
                i++;
                j--;
            }
            else if(v[j]-v[i]<key){
                j--;
            }
            else (i++);
        }
    }
    return c;
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
    cout<<"enter the key: ";
    cin>>key;
    int f=countdiff(v,key);
    cout<<"the number of pairs that have the diffrence of key are: "<<f;
    return 0;
}