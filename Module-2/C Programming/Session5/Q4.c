#include<stdio.h>
int main(){
	int age;
	printf("\n Enter age: ");
	scanf("%d",&age);
	if(age>=18){
		printf("\n Eligible for driving licence!");
	}
	if(age>=21){
		printf("\n Eligible for Credit Card!");
	}
	if(age>=25){
		printf("\n Eligible for Car Rental!");
	}
	else{
		printf("\n Not Eligible!");
	}
	return 0;
}
