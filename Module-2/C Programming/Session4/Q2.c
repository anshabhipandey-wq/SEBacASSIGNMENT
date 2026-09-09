#include<stdio.h>
int main(){
	float productPrice,discountPercentage,finalPrice;
	int isMember;
	printf("\n Enter product price: ");
	scanf("%f",&productPrice);
	printf("\n Enter discount percentage: ");
	scanf("%f",&discountPercentage);
	printf("\n Are you a member? (1 for yes, 0 for no): ");
	scanf("%d",&isMember);
	finalPrice = productPrice - (productPrice*discountPercentage/100);
	if(isMember == 1){
		finalPrice = finalPrice-(finalPrice*5/100);
	}
	printf("Final Price=%f",finalPrice);
	return 0;
}
