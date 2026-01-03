#include<bits/stdc++.h>
using namespace std;
int fun(vector<int>&arr){
int maxa=0,cura=0;
for(int i=0;i<arr.size();i++){
    cura+=arr[i];
    maxa=max(cura,maxa);
}
return maxa;

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