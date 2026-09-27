#include<iostream>
using namespace std;
class Playlist{
	string playlistName;
	public:
		Playlist(){
			playlistName = "My Favourites";
			cout<<"Welcome to "<<playlistName<<" Playlist"<<"\n";
		}
};
int main(){
	Playlist p;
	return 0;
}
