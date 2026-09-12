#include<stdio.h>
int main(){
	int ch;
	printf("\n Enter your favorite IPL team: ");
	scanf("%d",&ch);
	if(ch==1){
		printf("Go Mumbai Indians!");
	}
	else if(ch==2){
		printf("Go Chennai Super Kings!");
	}
	else{
		printf("Team not Found!");
	}
	return 0;
}
