#include<stdio.h>
void formatPrice(int price){
	printf("Rs. ");
	if(price>=1000){
		printf("%d%d",price/1000,price%1000);
	}
	else{
		printf("%d",price);
	}
	printf("\n");
}
int main(){
	printf("Laptop: ");
	formatPrice(1599);
	printf("Headphone: ");
	formatPrice(2499);
	printf("Mobile: ");
	formatPrice(12999);
	return 0;
}
