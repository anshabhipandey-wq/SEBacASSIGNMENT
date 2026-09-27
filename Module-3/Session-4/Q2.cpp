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
class YouTuber: public SocialMediaUser{
	string channelName;
	public:
		YouTuber(string un, int f, string channel):SocialMediaUser(un,f){
			channelName = channel;
		}
		void uploadVideo(string title){
			cout<<"Video "<<title<<" upload to "<<channelName<<"\n";
		}
};
int main(){
	YouTuber y1("its_anshabhi",1239,"Abhishek TEch");
	y1.displayProfile();
	y1.uploadVideo("C++ Tutorial");
	return 0;
}
