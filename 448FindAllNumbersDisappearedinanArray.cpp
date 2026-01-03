#include<bits/stdc++.h>
using namespace std;
vector<int> fun(vector<int>&arr){

    for(int i=0;i<arr.size();i++){
        int idx=abs(arr[i])-1;
        if(arr[idx]>0){
            arr[idx]=-arr[idx];
        }
        
    }vector<int>a;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>0){
                a.push_back(i+1);
            }
        }
        return a;

}
int main(){
    int t;
    cin>>t;
    vector<int>arr(t);
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    vector<int>res=fun(arr);
    for(int x : res){
        cout<<x<<" ";
    }
    }
