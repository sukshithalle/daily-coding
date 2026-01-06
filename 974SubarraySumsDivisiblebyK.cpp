#include<bits/stdc++.h>
using namespace std;
int fun(vector<int>&arr,int k){
    unordered_map<int,int>mp;
    mp[0]=1;
    int prefix=0,count=0;
    for(int i=0;i<arr.size();i++){
        prefix+=arr[i];
        int rem=(((prefix%k)+k)%k);
        if(mp.count(rem)){
            count+=mp[rem];
        }
        mp[rem]++;
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    vector<int>arr(t);
    int k;
    cin>>k;
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    cout<<fun(arr,k);
}
