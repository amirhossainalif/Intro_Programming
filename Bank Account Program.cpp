#include <iostream>
using namespace std;

class Account
{
private:
    string AccountName;
    int AccountNo;
    int Balance;
    string AccountType;

public:
    void setAccountName(string accountName)
    {
        AccountName=AccountName;
    }

    string getAccountName()
    {
        return AccountName;
    }


    void setAccountNo(int accountNo)
    {
        AccountNo=accountNo;
    }

    int getAccountNo()
    {
        return AccountNo;
    }


    void setBalance(int balance)
    {
        Balance=balance;
    }

    int getBalance()
    {
        return Balance;
    }


    void setAccountType(string accountType)
    {
        AccountType=accountType;
    }

    string getAccountType()
    {
        return AccountType;
    }


    Account();
    Account(string accountName, int accountNo, float balance,string accountType)
    {
        AccountName=accountName;
        AccountNo=accountNo;
        Balance=balance;
        AccountType=accountType;
    }

    ~Account()
    {
        cout<<"Destructor is called.";
    }

    void ShowAccountDetails()
    {
        cout<<"Account Name: "<<AccountName<<endl;
        cout<<"Account No: "<<AccountNo<<endl;
        cout<<"Account Balance: "<<Balance<<endl;
        cout<<"Account Type: "<<AccountType<<endl;
        cout<<endl;
    }

    void Deposit(int amount)
    {
        Balance+=amount;
        cout<<"Deposite successful amount: "<<amount<<endl;
        cout<<endl;
    }

    void Withdraw(int amount)
    {
        if(Balance>amount)
        {
            Balance-=amount;
            cout<<"Withdraw successful amount: "<<amount<<endl;
        }
        else
        {
            cout<<"Insufficient balance."<<endl;
        }
        cout<<endl;
    }

    void Transfer(int amount, Account&acc)
    {
        if(Balance>amount)
        {
            Balance-=amount;
            cout<<"Amount debited from sender account"<<endl;
            int balance=acc.Balance+amount;
            acc.setBalance(balance);
        }
        else
        {
            cout<<"Insufficient balance."<<endl;
        }
    }

};


int main()
{
    Account Rohim=Account("Rohim",82145986,500,"Saving");
    Account Karim=Account ("Karim",84215924,500,"Saving");
    Rohim.ShowAccountDetails();
    Rohim.Deposit(50);
    Rohim.Withdraw(600);
    Rohim.Transfer(70,Karim);


    Karim.ShowAccountDetails();
    Karim.Deposit(65);
    Karim.Withdraw(530);
    Karim.Transfer(432,Rohim);


    return 0;
}
