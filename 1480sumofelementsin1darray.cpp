#include<bits/stdc++.h>
using namespace std;
vector<int> fun(vector<int>&arr){
        for(int i=1;i<arr.size();i++){
            arr[i]=arr[i]+arr[i-1];

        }
        return arr;
}
int main(){
    int t;
    cin>>t;
    vector<int>arr(t);
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
   vector<int>res=fun(arr);

   for(int i:res){
    cout<<i<<" ";
   }
}
