#include<stdio.h>
int main(){
	int age;
	float orderValue;
	printf("\n Enter age: ");
	scanf("%d",&age);
	printf("\n Enter order value: ");
	scanf("%f",&orderValue);
	if(age>=18 && orderValue>500){
		printf("Eligible for offer.");
	}
	else{
		printf("Not eligible for offer.");
	}
	return 0;
}
