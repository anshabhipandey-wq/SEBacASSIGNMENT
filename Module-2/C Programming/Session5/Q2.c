#include<stdio.h>
int main(){
	int ch;
	printf("\n Enter meal time: ");
	printf("\n press 1. breakfast");
	printf("\n press 2. Lunch");
	printf("\n press 3. Dinner");
	printf("\n press 4. Snack\n");
	scanf("%d",&ch);
	switch(ch){
		case 1: 
			printf("Suggestion: Masala Dosa");
			break;
		case 2: 
			printf("Suggestoin: Rice and Pulase");
			break;
		case 3:
			printf("Suggestion: Panner Tikka");
			break;
		case 4: 
			printf("Suggestion: Samosa");
			break;
		default: 
			printf("Try some fruits");
	}
	return 0;
}
