#include<stdio.h>
struct User{
	int uid;
	char name[20];
	char email[20];
};
main(){
	struct User u[2];
	int i;
	for(i=0;i<2;i++){
		printf("\n Enter userid name and email: ");
		scanf("%d %s %s",&u[i].uid,&u[i].name,&u[i].email);
	}
	for(i=0;i<2;i++){
		printf("\n uid=%d uname=%s email=%s",u[i].uid,u[i].name,u[i].email);
	}		
}
