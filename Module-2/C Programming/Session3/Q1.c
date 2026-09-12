#include<stdio.h>
int main(){
	//Declare and assign variables
	char productName[] = "ASUS Vivobook Go 15";
	float price = 60990.00f;
	double rating = 4.4;
	
	//Print each variable with its datatype
	printf("\n Product Name = %s (string/char array)", productName);
	printf("\n Price = %.2f (float)", price);
	printf("\n Rating = %.1f (double)", rating);
	
	return 0;
}
