#include<stdio.h>
int main(){
	char playlistName[] = "My Favorite Hits";
	int totalSongs = 25;
	float averageDuration = 3.5;
	printf("My favorite Spotify playlist is %s, it has %d songs, and the average song duration is %.1f",playlistName,totalSongs,averageDuration);
	return 0;
}
