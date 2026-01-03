#include<bits/stdc++.h>
using namespace std;
bool fun(vector<int>&arr){
    unordered_set<int>st;
    st.reserve(arr.size());
    for(int x :arr){
        if(!st.insert(x).second){
            return true;
        }
    }
    return false;
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