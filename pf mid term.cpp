#include<iostream>
using namespace std;
int main()
{
	int num,current_balance=2000,deposit,withdraw;
do 
{
	//displaying menu options
	cout<<"\nhere are the options of functions you can perform:\n1.check balance\n2.deposit money\n3.withdraw money\n4.exit ";
	cin>>num;
	switch(num){
	case 1:
		cout<<"your current balance is"<<current_balance;//displays current balance
			break;
	case 2:
	    cout<<"enter the money you want to deposit:";
		cin>>deposit;
		if(deposit>0){  //checks if the deposit money is positive
			cout<<"the amunt of deposit money is:"<<deposit;
			}else
			{
				cout<<"invalid input";
		continue;
			}
				break;
	case 3:		
	    cout<<"enter the money you want to withdraw:";
        cin>>withdraw;
        if(withdraw>0&&withdraw<=current_balance){   //checks if the withdraw money is positive and less than or equal to current balance
        	cout<<"withdrawl is possible";
		}else{
		cout<<"invalid input";
		continue;
	}
	break;
	case 4:
		break;
		default :
			cout<<"invalid input";
		}
}while(num!=4);
return 0;
}
	
	
	
	
	
	
