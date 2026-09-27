#include<iostream>
using namespace std;
class InstaStory{
	protected:
		int storyVeiws;
	public:
		InstaStory(int views){
			storyVeiws = views;
		}
};
class SponsoredStory:public InstaStory{
	public:
		SponsoredStory(int views):InstaStory(views){
			
		}
		void display(){
			cout<<"Story views: "<<storyVeiws<<"\n";
		}
};
int main(){
	SponsoredStory st(5000);
	st.display();
	return 0;
}
