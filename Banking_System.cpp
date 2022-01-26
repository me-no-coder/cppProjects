#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class bank
{
    char name[40];
    char address[100];
    char y;
    int balance;
    int a;
public:
    void open_acc();
    void deposit_money();
    void withdraw_money();
    void display_acc();
};

void bank :: open_acc()
{
    cout<<"Enter full name: \n";
    cin.ignore();
    cin.getline(name, 30);
    cout<<"Enter you address: \n";
    cin.ignore();
    cin.getline(address, 100);
    cout<<"Type of account you want to open (s or c): \n";
    cin>>y;
    cout<<"Enter amount for deposit: \n";
    cin>>balance;
    cout<<"Your account has been created \n";
}

void bank :: deposit_money()
{
    cout<<"Enter the money to be deposited: \n";
    cin>>a;
    balance=balance+a;
    cout<<"Current total balance is: \t"<<balance;
}

void bank :: display_acc()
{
    cout<<"Name: \t"<<name<<endl;
    cout<<"Address: \t"<<address<<endl;
    cout<<"Type of account: \t"<<y<<endl;
    cout<<"Amount in deposit: \t"<<balance<<endl;
}

void bank :: withdraw_money()
{
    int amount;
    cout<<"\nWithdraw: \n";
    cout<<"Enter amount to be withdrawn: \n";
    cin>>amount;
    balance=balance-amount;
    cout<<"Now, total balance in the account is: \t"<<balance<<endl;
}

int main()
{
    int ch=0;
    int x;
    bank obj;
    while(ch!=5)
    {
        cout<<"1) Open account \n";
        cout<<"2) Deposit money \n";
        cout<<"3) Withdraw money \n";
        cout<<"4) Display account \n";
        cout<<"5) Exit \n\n";
        cout<<"Select the option from above\n";
        cin>>ch;
        switch(ch)
        {
        case 1:
            obj.open_acc();
            break;
        case 2:
            obj.deposit_money();
            break;
        case 3:
            obj.withdraw_money();
            break;
        case 4:
            obj.display_acc();
            break;
        case 5:
            break;
        default:
            cout<<"Option not available, try again :(\n";
            break;
        }
    }

    cout<<"Thank you. Have a Great Day!"<<endl;
    return 0;
}
