#include <bits/stdc++.h>
using namespace std;
int fun(vector<int>&ar){
    unordered_map<int,int>ui;
    int sum=0;
    for(auto x:ar){
        ui[x]++;
    }
    for(auto x : ui){
        if(x.second==1){
            sum+=x.first;
        }
    }return sum;
}
int main(){
    int t;
    cin>>t; //number of testcases to be taken
    for(int i=0;i<t;i++){
        int n;
        cin>>n; // size of the vector 
        vector<int>ar;
        for(int k=0;k<n;k++){
            int x; // elements insertion into the ventor ar
            cin>>x;
            ar.push_back(x);
        }
        cout<<fun(ar)<<endl;
    }
}