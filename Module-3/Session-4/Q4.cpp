#include<iostream>
using namespace std;
class SocialMediaUser{
	protected:
		string username;
		int followers;
		
	public:
		SocialMediaUser(string un,int f){
			username = un;
			followers = f;
		}
		void displayProfile(){
			cout<<"Usernaem: "<<username<<"\n";
			cout<<"Followers: "<<followers<<"\n";
		}
};
class YouTuber:public SocialMediaUser{
	protected:
		string channelName;
	public:
		YouTuber(string un,int f,string channel):SocialMediaUser(un,f){
			channelName = channel;
		}
		void uploadVideo(string title){
			cout<<"Video "<<title<<" upload to "<<channelName<<"\n";
		}
};
class GamingYouTuber :public YouTuber{
	public:
		GamingYouTuber(string un,int f,string channel):YouTuber(un,f,channel){
			
		}
		void streamGame(string gameName){
			cout<<username<<" is now streaming "<<gameName<<" on "<<channelName<<"\n";
		}
};
int main(){
	GamingYouTuber g1("abhishek123",1234,"Abhi Gaming");
	g1.displayProfile();
	g1.uploadVideo("AUG Gameplay");
	g1.streamGame("Free Fire");
	return 0;
}
