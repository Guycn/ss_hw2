#include <stdio.h>



int i=0,j=0,k=0;
double t;
static int check=0;
static double arr[50][3];


void initial_Des(double amount){
	if(amount<0){
	printf("Invalid Amount\n");
	return;
	}
	if(check==0){
		for(i=0;i<50;i++){
			for(j=0;j<3;j++){
				arr[i][j]=-1;
			}
		}
		check=1;
	}
	if(check==1){
		for(i=0;i<50;i++){
			if(arr[i][0]==-1){
				arr[i][0]=901+i;
				arr[i][1]=1;
				arr[i][2]=amount;
				k=(int)arr[i][0];
				printf("New account number is: %d \n",k);
				i=299;
			}
		}
		if(i!=300)printf("The number of bank accounts is 50 so it is not possible to receive another account\n");
	}
}

void Bill(int account){
	if(check==0){
		for(i=0;i<50;i++){
			for(j=0;j<3;j++){
				arr[i][j]=-1;
			}
		}
		check=1;
	}
	if(account<901 || account>950){
		printf("Invalid account number\n");
		return;
	}
	if(arr[account-901][1]==1){
		printf("The balance of account number %d is: %.2lf\n",account,arr[account-901][2]);
	}
	else{
		printf("This account is closed\n");
	}
}

void Deposit(int account){
	if(check==0){
		for(i=0;i<50;i++){
			for(j=0;j<3;j++){
				arr[i][j]=-1;
			}
		}
		check=1;
	}
	if(account<901 || account>950){
		printf("Invalid account number\n");
		return;
	}
	if(arr[account-901][0]==-1){
		printf("This account is closed\n");
		return;
	}
	printf("Please enter the amount to deposit: ");
	if(scanf("%lf", &t)==0){
	printf("Failed to read the amount\n");
	return;
	}
	if(t<0){
	printf("Cannot deposit a negative amount\n");
	return;
	}
	if(arr[account-901][0]!=-1 && arr[account-901][1]==1){
		arr[account-901][2]=arr[account-901][2]+t;
		printf("The new balance is: %.2lf\n",arr[account-901][2]);
	}
}

void wDraw(int account){
	if(check==0){
		for(i=0;i<50;i++){
			for(j=0;j<3;j++){
				arr[i][j]=-1;
			}
		}
		check=1;
	}
	if(account<901 || account>950){
		printf("Invalid account number\n");
		return;
	}
	if(arr[account-901][1]==-1){
		printf("This account is closed\n");
		return;
	}
	printf("Please enter the amount to withdraw: ");
	if(scanf("%lf",&t)==0){
	printf("Failed to read the amount\n");
	return;
	}
	if(arr[account-901][2]<t){
		printf("Cannot withdraw more than the balance");
		return;
	}
	arr[account-901][2]=arr[account-901][2]-t;
	printf("The new balance is: %.2lf\n", arr[account-901][2]);
}

void closed_account(int account){
	if(check==0){
		for(i=0;i<50;i++){
			for(j=0;j<3;j++){
				arr[i][j]=-1;
			}
		}
		check=1;
		return;
	}
	if(account<901 || account>950){
		printf("Invalid account number\n");
		return;
	}
	if(arr[account-901][1]==-1){
		printf("This account is already closed\n");
		return;
	}
	arr[account-901][1]=-1;
	arr[account-901][0]=-1;
	printf("Closed account number %d\n", account);
}

void Interest(double rate){
	if(check==0){
		for(i=0;i<50;i++){
			for(j=0;j<3;j++){
				arr[i][j]=-1;
			}
		}
		check=1;
		return;
	}
	if(rate<0){
		printf("Invalid interest rate\n");
	}
	else{
		t=rate/100;
		t=t+1;
		for(i=0;i<50;i++){
			if(arr[i][1]==1)arr[i][2]=arr[i][2]*t;
			}
		}
}
void account_Print(){
	if(check==0){
		for(i=0;i<50;i++){
			for(j=0;j<3;j++){
				arr[i][j]=-1;
			}
		}
		check=1;
		return;
	}
	for(i=0;i<50;i++){
		if(arr[i][1]==1){
			j=901+i;
			printf("The balance of account number %d is: %.2lf\n", j, arr[i][2]);
		}
	}
}

void Out(){
	for(i=0;i<50;i++){
		if(arr[i][1]==1)arr[i][1]=0;
	}
}
	
		

	
	


	
























	
		