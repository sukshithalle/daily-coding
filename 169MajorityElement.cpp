#include<bits/stdc++.h>
using namespace std;
int fun(vector<int>&arr){
    unordered_map<int,int>mp;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }
    for(auto x : mp){
        if((x.second)>(arr.size())/2){
            return x.first;
        }
    }
    return -1;
}



int main(){
    int t;
    cin>>t;
    vector<int>arr(t);
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    cout<<fun(arr);
}