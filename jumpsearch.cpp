#include<bits/stdc++.h>
using namespace std;
int min(int a , int b){
    if(a<b){
        return a;
    }
    else return b;
}
int bsearch(vector<int>v,int low,int high,int key){
    while(low<=high){
        int mid=(low+high)/2;
        if(v[mid]==key){
            return 1;
        }
        else if(v[mid]>key){
            high = mid-1;
        }
        else if(v[mid]<key){
            low = mid+1;
        }
    }
    return -1;
}
int jumpsort(vector<int> v,int key){
    if(v[0]==key){
        return 1;
    }
    int i=1;
    while(i<v.size() && v[i]<=key){
        i=i*2;
    }
    return bsearch(v,i/2,min(i,(v.size()-1)),key);

}
int main(){
    vector<int>v;
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    int f=jumpsort(v,key);
    if(f==1){
        cout<<"element found!";
    }
    else cout<<"element not found!";
    return 0;
}