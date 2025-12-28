#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"welcome to ASK ATM"<<endl;
    int balance=50000;
    int withdraw,option;
    int ATM_PIN=1596;
    int entered_pin;

    cout<<"what operation you want to do "<<endl;
    cout<<"1) check balance 2) withdraw"<<endl;
    cin>>option;

    if(option==1){
        cout<<"enter the atm pin : "<<endl;
        cin>>entered_pin;
        if(ATM_PIN==entered_pin){
        cout<<"the balance is "<<balance<<endl;
        }else{
            cout<<"incorrect pin";
        }

    }else if(option==2){
        cout<<"enter the amout you want to withdraw"<<endl;
        cin>>withdraw;
        
            cout<<"enter pin"<<endl;
            cin>>entered_pin;
            if(ATM_PIN==entered_pin){
                if(balance>=withdraw&&withdraw>0){
            cout<<"withdraw is successful ";
            cout<<withdraw<<" rs"<<endl;
            balance = balance-withdraw;
            cout<<"want to see the remaining balance?"<<endl;
        
            int option1;
            cout<<"1 - yes 2 - no"<<endl;
                   cin>>option1; 
            if(option1==1){
                cout<<"remaining balance is "<<balance<<"rs thanks for using ASK ATM"<<endl;
            }else{
                cout<<"thanks for using the ATM";
            }
        }else{
            cout<<"enter the correct amount or check the balance and try again "<<endl;
        }
    }else{
        cout<<"enter the atm pin correctly"<<endl;
    }
    
    }
    return 0;
}