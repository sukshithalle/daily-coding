#include<bits/stdc++.h>
using namespace std;
int fun(vector<int>&arr){
    int left=0,right=0,total=0;
    for(int x:arr){
        total+=x;
    }
    for(int i=0;i<arr.size();i++){
        right=total-left-arr[i];
        if(right==left){
            return i;
        }
        left+=arr[i];
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