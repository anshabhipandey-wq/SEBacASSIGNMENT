#include<stdio.h>
//Pass by value
void increaseFollowersByValue(int followers){
	followers = followers+1000;
	printf("Inside value function : %d\n",followers);
}
//Pass by reference
void increaseFollowersByReference(int *followers){
	*followers = *followers+1000;
	printf("Inside reference function: %d\n",*followers);
}
int main(){
	int followers = 5000;
	printf("Original Followers: %d\n",followers);
	increaseFollowersByValue(followers);
	printf("After pass by value: %d\n",followers);
	increaseFollowersByReference(&followers);
	printf("After pass by reference: %d\n",followers);
	return 0;
}
