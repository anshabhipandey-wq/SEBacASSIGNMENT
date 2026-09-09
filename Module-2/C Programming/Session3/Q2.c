#include<stdio.h>
int main()
{
	const float gstRate = 18;
	float basePrice = 499;
	float gstAmount, finalPrice;
	gstAmount = basePrice * gstRate / 100;
	finalPrice = basePrice + gstAmount;
	printf("\n Base Price = %.2f",basePrice);
	printf("\n GST Rate = %.2f",gstRate);
	printf("\n gstAmount = %.2f",gstAmount);
	printf("\n Final Price = %.2f",finalPrice);
	return 0;
}
