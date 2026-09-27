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
class YouTuber : public SocialMediaUser
{
public:
    YouTuber(string un, int f): SocialMediaUser(un, f){
    	
    }
};
class Podcaster : public SocialMediaUser
{
public:
    Podcaster(string un, int f): SocialMediaUser(un, f){
    	
    }
};
class InstagramInfluencer :public SocialMediaUser{
	public: 
		InstagramInfluencer(string un, int f):SocialMediaUser(un,f){
			
		}
		void postStory(string storyTitle){
			cout<<username<<" posted a new stroy: "<<storyTitle<<"\n";
		}
};
int main(){
	InstagramInfluencer insta1("abhi@123",12899);
	insta1.displayProfile();
	insta1.postStory("My new journey");
	return 0;
}
