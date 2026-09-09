#include<stdio.h>
struct User{
	int uid;
	char name[20];
	char email[20];
};
main(){
	struct User u1;
	printf("\n Enter userid name and email: ");
	scanf("%d %s %s",&u1.uid,&u1.name,&u1.name);
	printf("\n uid=%d uname=%s email=%s",u1.uid,u1.name,u1.email);
}
