#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
int n;
cin>>n;
cout<<fact(n);
}




// // n=5
// //fact(5)
// //5*fact(5-1)=fact(4)
// //n=4
// //fact(4)
// //4*fact(4-1)=fact(3)
// n=3
// fact(3)
// //3*fact(3-1)=fact(2)
// n=2
// fact(2)
// 2*fact(2-1)=fact(1)
// n=1
// fact(1)
// 1*fact(1-1)=fact(0)
// n=0
// return 1