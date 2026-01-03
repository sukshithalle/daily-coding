#include<bits/stdc++.h>
using namespace std;
bool fun(vector<int>&arr){
    unordered_map<int,int>mp;
    for(auto x:arr){
        mp[x]++;
    }

    unordered_set<int>st;
    for(auto x:mp){
        if(!st.insert(x.second).second){
            return false;
        }
    }

    return true;
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