#include<iostream>
using namespace std;
class SocialMediaUser{
	string username;
	int followers;
	public:
		SocialMediaUser(string un, int f){
			username = un;
			followers = f;
		}
		void displayProfile(){
			cout<<"Username: "<<username<<"\n";
			cout<<"Followers: "<<followers<<"\n";
		}
};
int main(){
	SocialMediaUser user1("itz_abhishekpandey2004",1450);
	user1.displayProfile();
	return 0;
}
