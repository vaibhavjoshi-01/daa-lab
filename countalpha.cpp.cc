#include<bits/stdc++.h>
using namespace std;
void count(string &s){
    int c=0;
    vector<int>a (256,0);
    for(int i=0;i<s.length();i++){
        a[s[i]]++;
    }
    for(int j=0;j<256;j++){
        if(a[j]>c){
            c=a[j];
        }a
    }
    cout<<"max occurence: "<<endl;
    for(int j=0;j<256;j++){
        if(a[j]==c){
            cout<<"character:"<<(char)(j);
            cout<<" frequency: "<<c<<endl;
        }
    }
}
int main(){
    string s;
    cout<<"enter the string: ";
    getline(cin,s);
    count(s);
    return 0;
}
