#include <iostream>
 using namespace std;
 class BankAccount
 {
    string accountHolderName;
    int accountNumber;
double balance;
public:
BankAccount();//default constructor
Bankaccount(string name ,int number,double b);//parametarized constructor
	void inputDetails();
	void displayDetails();
	void deposit(double amount);
	void withdraw(double amount);
};
void BankAccount::inputDetails();
{
   /* cout<<" enter Account Number";
    cin>>accountNumber;
    cout<<" enter account holder name";
    cin>>accountHolderName;
    getline*/





}
 BankAccount::BankAccount(string name,int number, double b)
 { 
    accountHolderName= name;
    accountNumber=number;
    balance=b;
 }
 BankAccount::Bankaccount()
 {
    accountHolderName="";
    accountNumber=1111;
    balance=0;

 }


   balance+=amount;
cout<<"n Amount Deposited?\n balance="<<balance;
}
void BankAccount::withdraw(double amount);
{
    if(amount>balance)
    cout<<"\n Denied..Insufficient balnce";
    else{
        balance-=;
        cout
    }
}



    
int main(
    {
        BnakACcount ac1;
        ac1.inputDetails
    }
)

