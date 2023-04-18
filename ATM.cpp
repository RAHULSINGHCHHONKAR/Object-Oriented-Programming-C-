#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<cstdlib>
#include<string>
using namespace std;

/* Mini Project - ATM
 ->check balance
 ->cash withdrwal
 ->user details
 ->Update Mobile No.
*/

class ATM
{
	private:
	long int account_No;
	string name;
	int PIN;
	double balance;
	string mobile_No;

	public:
	void setData(long int account_No_a, string name_a,int PIN_a,double balance_a,string mobile_No_a)
	{
		account_No=account_No_a;
		name=name_a;
		PIN=PIN_a;
		balance=balance_a;
		mobile_No=mobile_No_a;
	}

long int getAccountNo()
{
	return account_No;
}

string getName()
{
	return name;
}

int getPIN()
{
return PIN;
}

double getBalance()
{
	return balance;
}

string getMobileNo()
{
return mobile_No;
}

void setmobile(string mob_prev, string mob_new)
{
	if(mobile_No==mob_prev)
	{
		mobile_No=mob_new;
		cout<<endl<<" Successfully updated mobile number ";
		getch(); //it is used to hold the screen until user presses next key 
	}
	else
	{
		cout<<endl<<" Old mobile number does not match  !! ";
		getch();
	}
}

void cashwithdraw(int amount_a)
{
	if(amount_a>0 && amount_a<balance)
	{
		balance-=amount_a;
		cout<<endl<<" Please collect your cash ";
		cout<<endl<<" Available Balance : "<<balance;
	getch();
	}
	else{
		cout<<endl<<" Invalid input or  Unsufficient balance ";
	getch();
	}
}

};

int main()
{
	int choice=0;
	int enterPIN;
	long int enterAccount_no;   //user authentication purpose
	system("clear");// clearing screen
	ATM user1;
	user1.setData(1234567,"Rahul",1362,678900.45,"7060039640");

	do
	{
		system("clear");
    cout<<endl<<"******* Welcome to ATM *******";
		cout<<endl<<" Enter your Account Number ";
		cin>>enterAccount_no;

		cout<<endl<<" Enter your PIN ";
		cin>>enterPIN;

		if((enterAccount_no==user1.getAccountNo()) && (enterPIN==user1.getPIN()))
		{
		do
		{
		int amount=0;
		string oldmobileno, newmobilenumber;

		system("clear");
		cout<<endl<<"******* Welcome User ********";
		cout<<endl<<" Select Options";
		cout<<endl<<"1. Check Balance";
		cout<<endl<<"2. Cash Withdraw";
		cout<<endl<<"3. Show User Details";
		cout<<endl<<"4. Update Mobile Number";
		cout<<endl<<"5. Exit";
		cin>>choice;

		switch(choice)
		{
		case 1:
			cout<<endl<<" Your Bank Balance is : "<<user1.getBalance();
			getch();
			break;

		case 2:
			cout<<endl<<" Enter the amount : ";
			cin>>amount;
			user1.cashwithdraw(amount);
			break;

		case 3:
			cout<<endl<<" User details are :- ";
			cout<<endl<<" -> Account Number : "<<user1.getAccountNo();
			cout<<endl<<" -> Name : "<<user1.getName();
			cout<<endl<<" -> Balance : "<<user1.getBalance();
			cout<<endl<<" -> Mobile Number : "<<user1.getMobileNo();
			getch();
			break;

		case 4:
			cout<<endl<<" Enter old mobile Number : ";
			cin>>oldmobileno;
			cout<<endl<<" Enter new mobile Number  : ";
			cin>>newmobilenumber;
			user1.setmobile(oldmobileno,newmobilenumber);
			break;

		case 5:
			exit(0);

		default:
			cout<<endl<<" Enter Valid Data ";
		}
		}
		while(1);
		}
		else{
			cout<<endl<<"  Incorrect  Credentials !!! try again";
		}
	}while(1);
}

