#include <bits/stdc++.h>
using namespace std;
bool Dfs(vector<vector<int>> &arr,int s,vector<int>&visited){
    if(visited[s]==1) return true;
    visited[s]=1;
    for(int i=0;i<arr.size();i++){
        if(arr[i][s]==1){
            if(Dfs(arr,i,visited)) return true; 
        }
    }
    visited[s]=2;
    return false;
}
bool iscycle(vector<vector<int>> &arr){
    vector<int> visited(arr.size(),0);
    for(int i=0;i<arr.size();i++){
        if(!visited[i]){
            if(Dfs(arr,i,visited)) return true;
        }
    }
    return false;
}
int main() {
    int n;
    cout<<"enter the size: ";
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    cout<<"enter the graph: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            arr[i][j]=x;
        }
    }
    if(iscycle(arr)) cout<<"Yes there is a cycle!";
    else cout<<"No there is not a cycle!";
    return 0;
}
