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
class Podcaster : public SocialMediaUser{
	string podcastName;
	public: 
		Podcaster(string un,int f, string podcast):SocialMediaUser(un,f){
			podcastName = podcast;
		}
		void publishEpisode(string episodeTitle){
			cout<<"Episode "<<episodeTitle<<" publish  "<<podcastName<<"\n";
		}
};
int main(){
	Podcaster p1("abhshek_p123",1234,"TEch Talks");
	p1.displayProfile();
	p1.publishEpisode("C++ Basic");
	return 0;
}
