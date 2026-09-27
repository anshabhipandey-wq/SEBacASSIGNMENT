#include<iostream>
#include<fstream>
using namespace std;
class Playlist{
	string playlistName;
	public:
		Playlist(){
			playlistName = "My Favourites";
			cout<<"Playlist created: "<<playlistName<<"\n";
		}
		~Playlist(){
			ofstream file("autosave.txt");
			file<<"Playlist Name: "<<playlistName<<"\n";
			file.close();
			cout<<"Playlist auto saved succesfully."<<"\n";	
		}
};
int main(){
	Playlist p1;
	cout<<"Using Playlist....\n";
	return 0;
}
