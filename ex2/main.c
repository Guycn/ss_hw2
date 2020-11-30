#include <stdio.h>
#include "myBank.h"



int main(){
	int status=0;
	int acc;
	double tmp;
	char type;
	
	
	while(status==0){             //The loop ran until the user closed all the accounts	 
		printf("\n");
		printf("Please choose a transaction type:\n O-Open Account\n B-Balance Inquiry\n D-Deposit\n W-Withdrawal\n C-Close Account\n I-Interest\n P-Print\n E-Exit\n");           //The user select the action that he wants to preform
		scanf("%c", &type);
		
		/*'O' means that the user wants to open new account.
		*/
		if(type=='O'){
			printf("Please enter amount for deposit: ");
			if(scanf("%lf", &tmp)==0){
			printf("Failed to read the amount\n");
			}
			else{
				initial_Des(tmp);
			}
		}
		/*'B' means that the user wants to know how much money is left in the account
		*/
		else if(type=='B'){
			printf("Please enter account number: ");
			if(scanf("%d", &acc)==1){;
			Bill(acc);
			}
			else{
			printf("Failed to read the account number\n");
			}
		}
		/*'D' means that the user want to deposit money into chosen account.
		*/
		else if(type=='D'){
			printf("Please enter account number: ");
			if(scanf("%d", &acc)==1){
			Deposit(acc);
			}
			else{
			printf("Failed to read the account number\n");
			}
		}
		/*'W' means that the user want to withdraw money from chosen account.
		*/
		else if(type=='W'){
			printf("Please enter account number: ");
			if(scanf("%d", &acc)==0){
			printf("Failed to read the account number\n");
			}
			else{
			wDraw(acc);
			}
		}
		/*'C' means that the user want to closed the chosen account.
		*/
		else if(type=='C'){
		printf("Please enter account number: ");
		if(scanf("%d", &acc)==0){
		printf("Failed to read the account number\n");
		}
		else{
		closed_account(acc);
		}
		}
		/*'I' means that the user want to add interest to all accounts.
		*/
		else if(type=='I'){
		printf("Please enter interest rate: ");
		if(scanf("%lf", &tmp)==0){
		printf("Failed to read the interest rate\n");
		}
		else{
		Interest(tmp);
		}
		}
		/*'P' means that the user want to print the all accounts status.
		*/
		else if(type=='P'){
		account_Print();
		}
		/*'E' means that the user want to add interest to all accounts.
		*/
		else if(type=='E'){
		Out();
		status=1;
		}
		else{
			printf("Invalid transaction type\n");
		}
	}
	return 1;
}
		
		
		
		