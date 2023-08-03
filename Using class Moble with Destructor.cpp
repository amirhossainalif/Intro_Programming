#include <iostream>
using namespace std;

class Mobile
{
private:
    string MobileOwnerName;
    int MobileNumber;
    double MobileBalance;
    string MobileOSName;
    bool LockStatus;

public:
    void setMobileOwnerName(string mobileOwnerName)
    {
        MobileOwnerName=mobileOwnerName;
    }
    string getMobileOwnerName()
    {
        return MobileOwnerName;
    }

    void setMobileNumber(int mobileNumber)
    {
        MobileNumber=mobileNumber;
    }
    int getMobileNumber()
    {
        return MobileNumber;
    }

    void setMobileBalance(double mobileBalance)
    {
        MobileBalance=mobileBalance;
    }
    double getMobileBalance()
    {
        return MobileBalance;
    }

    void setMobileOSName(string mobileOSName)
    {
        MobileOSName=mobileOSName;
    }
    string getMobileOSName()
    {
        return MobileOSName;
    }

    void setLockStatus(bool lockStatus)
    {
        LockStatus=lockStatus;
    }
    bool getLockStatus()
    {
        return LockStatus;
    }

    Mobile()
    {
        MobileOwnerName="";
        MobileNumber=0;
        MobileBalance=0;
        MobileOSName="";
        LockStatus=true;
    }

    Mobile(string mobileOwnerName,  int mobileNumber,double mobileBalance,string mobileOSName,bool lockStatus)
    {
        MobileOwnerName=mobileOwnerName;
        MobileNumber=mobileNumber;
        MobileBalance=mobileBalance;
        MobileOSName=mobileOSName;
        LockStatus=lockStatus;
    }

    ~Mobile()
    {
        cout<<"Destructor is called."<<endl;
    }

    void ShowInfo()
    {
        cout<<"Mobile Information: "<<endl;
        cout<<"Mobile name owner: "<<MobileOwnerName<<endl;
        cout<<"Mobile number: "<<MobileNumber<<endl;
        cout<<"Mobile Balance: "<<MobileBalance<<endl;
        cout<<"Mobile OS name: "<<MobileOSName<<endl;
        cout<<"Mobile lock status: "<<LockStatus<<endl<<endl;
    }

    void Recharge(int amount)
    {
        if(!LockStatus)
        {
            MobileBalance=MobileBalance+amount;
        }
        else
        {
            cout<<"Phone is locked.Unable to recharge."<<endl;
        }
        cout<<endl;
    }


    void CallSomeone(int duration)
    {
        if(!LockStatus)
        {
            double total=duration/2;
            if(MobileBalance>=total)
            {
                cout<<"Call successful."<<endl;
            }
            else
            {
                cout<<"Insufficient balance."<<endl;
            }
        }
        else
        {
            cout<<"Phone is locked.Unable to call."<<endl;
        }
        cout<<endl;
    }
};

int main()
{
    Mobile Rohim=Mobile("Rohim",1303843268,30,"Android",false);
    Mobile Karim=Mobile("Karim",1693596302,25,"iOS",true);
    Rohim.ShowInfo();
    Rohim.CallSomeone(3);
    Rohim.Recharge(30);
    Karim.ShowInfo();
    Karim.CallSomeone(2);
    Karim.Recharge(20);

    return 0;
}

