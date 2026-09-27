#include<iostream>
using namespace std;
class Song{
	private:
		string title;
		string artist;
	public:
		//setter method
		void setTitle(string t){
			title = t;
		}
		void setArtist(string a){
			artist = a;
		}
		//getter method
		string getTitle(){
			return title;
		}
		string getArtist(){
			return artist;
		}
};
int main(){
	Song s1;
	s1.setTitle("Shape of You");
    s1.setArtist("Ed Sheeran");
    cout << "Song: " << s1.getTitle() << "\n";
    cout << "Artist: " << s1.getArtist() << "\n";

    // Update title
    s1.setTitle("Perfect");

    cout << "\nAfter updating title:" << "\n";
    cout << "Song: " << s1.getTitle() << "\n";
    cout << "Artist: " << s1.getArtist() << "\n";
}
