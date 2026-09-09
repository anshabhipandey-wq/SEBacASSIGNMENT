#include<stdio.h>
int main(){
	int followerCount=100;
	printf("\n Before increment: %d",followerCount);
	//pre-increment --> increase value then print
	printf("\n pre-increment: %d",++followerCount);
	printf("\n After per-increment: %d",++followerCount);
	//post-increment --> print value then increase
	printf("\n post-increment: %d",followerCount++);
	printf("\n After post-increment: %d",followerCount++);
	return 0;
}
