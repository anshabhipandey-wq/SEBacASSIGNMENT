#include<stdio.h>
int main(){
	float amount,discount,finalAmount;
	printf("\n Enter Amount: ");
	scanf("%f",&amount);
	if(amount>2000){
		discount = amount*20/100;
		finalAmount = amount-discount;
		printf("20 percent discount!");
	}
	else{
		if(amount>1000){
			discount = amount*10/100;
			finalAmount = amount-discount;
			printf("10 percent discount!");
		}
		else{
			discount = 0;
			finalAmount = amount;
		}
	}
	printf("\n Final Amount to Pay=%f",finalAmount);
	return 0;
}
