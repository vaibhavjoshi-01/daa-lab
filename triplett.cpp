#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>triplet(vector<int>v){
    int n=v.size();
    vector<int>temp;
    vector<vector<int>>ans;
    for(int k=2;k<n;k++){
        int i=0;int j=k-1;
        while(i<j){
            if(v[i]+v[j]==v[k]){
                temp.push_back(i);
                temp.push_back(j);
                temp.push_back(k);
                ans.push_back(temp);
                i++;
                j--;
                temp.clear();
            }
            else if(v[i]+v[j]<v[k]){
                i++;
            }
            else (j--);
        }
    }
    return ans;
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
    vector<vector<int>>res;
    res=triplet(v);
    for(auto it:res){
        for(auto jt:it){
            cout<<jt<<" ";
        }
        cout<<endl;
    }
    return 0;
}