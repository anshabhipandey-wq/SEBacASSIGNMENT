#include<iostream>
using namespace std;
class MusicPlayer{
	public:
		virtual void play(string song){
			cout<<"Playing: "<<song<<"\n";
		}
};
class SpotifyPlayer :public MusicPlayer{
	public:
		void play(string song){
			cout<<"Streaming on sportify: "<<song<<"\n";
		}
};
int main(){
	SpotifyPlayer sp;
	sp.play("Saiyaara");
	return 0;
}
