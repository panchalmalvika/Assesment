#include<iostream.h>
#include<conio.h>
void main()
{
	char name[50]={"Darji Jagrat"};
	char add[100]={"Ahmdabad"};
	char bra[50]={"Nikol"};
	int accountNo=1608,totalBalance=80000;
	int choice,pin,balance=60000,amount,menuChoice;
	clrscr();
	cout<<"\n******************************** WELCOME TO ATM **************\******************";
	cout<<"\n--------------------------------------------------------------------------------";
	cout<<"\n\t\t\tCurrent date : Mon June 30 15:00:59 2025\n";
	cout<<"\n--------------------------------------------------------------------------------";
	cout<<"\n\tPress 1 and Then Press Enter  to Access Your Account via Pin Number\n";
	cout<<"\n\t\t\t\t\tor\n";
	cout<<"\n\t\t\tPress 0 and press Enter to get Help.\n";
	cin>>choice;
	if(choice==1)
	{
		cout<<"\n******************************* ATM ACCOUNT ACCESS *****************************";
		cout<<"\n\tEnter your Acc Pin Access Number! [Only one Attempt is allowed!]\n";
		cin>>pin;
		if(pin==12345)
		{
			cout<<"\n\t\t\tAccess Granted. Welcome to Your Account!\n";
			do
			{
				cout<<"\n******************************** ATM MAIN MENU SCREEN **************************";
				cout<<"\n\t\t\tEnter [1] To Deposit Cash";
				cout<<"\n\t\t\tEnter [2] To Withdraw Cash";
				cout<<"\n\t\t\tEnter [3] To Balance Inquiry";
				cout<<"\n\t\t\tEnter [0] To Exit ATM";
				cout<<"\n\n\t\tPLEASE ENTER A SELECTION AND PRESS RETURN KEY : ";
				cin>>menuChoice;
				switch(menuChoice)
				{
					case 1:
						cout<<"\n************************* ATM ACCOUNT DEPOSIT SYSTEM ***************************";
						cout<<"\n\t\tThe Names of The Account Holders are : "<<name;
						cout<<"\n\t\tAccount Holder's Address is : "<<add;
						cout<<"\n\t\tBranch Location is : "<<bra;
						cout<<"\n\t\tAccount Number : "<<accountNo;
						cout<<"\n--------------------------------------------------------------------------------";
						cout<<"\n\n\t\tEnter amount to deposit: ";
						cin>>amount;
						balance+=amount;
						totalBalance+=amount;
						cout<<"\n\t\tAmount Deposited. New Balance : $"<<balance;
						cout<<"\n\t\t\tTHANK YOU!";
						cout<<"\n\tPress any key to Return to the Main Menu";
						break;
					case 2:
						cout<<"\n--------------------------------------------------------------------------------";
						cout<<"\n\n\t\tEnter amount to Withdraw : ";
						cin>>amount;
						if(amount<=balance)
						{
							balance-=amount;
							cout<<"\n\t\tPlease collect your cash. New Balance : $"<<balance;
						}
						else
						{
							cout<<"\n\t\t\tInsufficient Balance.";
						}
						break;
					case 3:
						cout<<"\n--------------------------------------------------------------------------------";
						cout<<"\n\t\t\tYour Current Balance is : $"<<balance;
						break;
					case 0:
						cout<<"\n--------------------------------------------------------------------------------";
						cout<<"\n\t\t\tThank You For Using The ATM. GOODBYE!";
						break;
					default:
						cout<<"\n--------------------------------------------------------------------------------";
						cout<<"\n\t\t\tInvalid Option. Try Again.";
				}
			}while(menuChoice != 0);
		}
		else
		{
			cout<<"\n--------------------------------------------------------------------------------";
			cout<<"\n\t\tIncorrect PIN. Access Denied.";
			cout<<"\n\t\t\tExisting the screen......";
		}
	}
	else if(choice==0)
	{
		cout<<"******************************* ATM ACCOUNT STATUS *****************************";
		cout<<"\n\tYou must have the correct pin number to access this accont.\n";
		cout<<"\n\t\tSee your bank if you have forgotten your pin.";
	}
	else
	{
		cout<<"\n\t\t      Invalid option. please restart the program.";
	}
	getch();
}