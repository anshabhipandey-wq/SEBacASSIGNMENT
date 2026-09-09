#include<stdio.h>
#include<string.h>
void addToCart(char cart[][20], int *count,char product[])
{
	int i;
	strcpy(cart[*count],product);
	(*count)++;
	printf("\n Updated Cart: ");
	for(i=0; i<*count; i++){
		printf("\n%s", cart[i]);
	}
}
int main(){
	char cart[10][20];
	int i;
	int count=0;
	addToCart(cart, &count, "Shirt");
	addToCart(cart, &count, "Shoes");
	printf("\n Cart outside function: ");
	for(i=0; i<count; i++){
		printf("\n%s", cart[i]);
	}
	return 0;
}
