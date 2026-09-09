#include<stdio.h>
int main(){
	int likes,comments,shares;
	printf("\n Enter likes: ");
	scanf("%d",&likes);
	printf("\n Enter comments: ");
	scanf("%d",&comments);
	printf("\n Enter shares: ");
	scanf("%d",&shares);
	if(likes>=1000||comments>=200&&shares>=50){
		printf("Post is Trending");
	}
	else{
		printf("Post is not Trending");
	}
	return 0;
}
