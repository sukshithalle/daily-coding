#include<bits/stdc++.h>
using namespace std;
int main(){
int choice;
int balance=50000;
int atmpin=1234;
int enteredpin;
int withdraw;

cout<<"WELCOME TO ASK ATM \n";

while(true){

    cout<<"1.check balance\n2.withdraw\n3.exit"<<endl;
    cin>> choice;

    switch(choice){
    case 1:
        cout<<"enter the atmpin"<<endl;
        cin>>enteredpin;
        if(atmpin==enteredpin){
        cout<<"the balace is the account is "<<balance<<"rs\n"<<endl;
        }else{
        cout<<"incorrec pin";
        }
    break;



    case 2:
        cout<<"enter the amount to withdraw \n"<<endl;
        cin>>withdraw;

        cout<<"enter the atmpin\n"<<endl;
        cin>>enteredpin;
        if(atmpin==enteredpin){
        if(withdraw>0&&balance>=withdraw){
        cout<<"withdraw successful\n"<<endl;
        balance=balance-withdraw;
        cout<<"remaining balacne : "<<balance<<" rs\n"<<endl;
        }else{
        cout<<"checke the balance and try again\n"<<endl;
        }
        }else{
        cout<<"incorrect pin "<<endl;
        }
    break;

    case 3:
        cout<<"exiting...,";
        return 0;
        break;
        default:
        cout<<"invaild choice\n";
    }

}
}