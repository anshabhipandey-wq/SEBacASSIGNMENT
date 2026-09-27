#include<iostream>
using namespace std;
class Content{
	string title;
	string plateform;
	int views;
	string status;
	public:
		Content(string t,string pt,int v,string st){
			title = t;
			plateform = pt;
			views = v;
			status = st;
		}
		void displayDetails(){
			cout<<"Title: "<<title<<"\n";
			cout<<"plateform: "<<plateform<<"\n";
			cout<<"views: "<<views<<"\n";
			cout<<"status: "<<status<<"\n";
		}
};
int main(){
	Content c1("C++ Topic","YouTube",100,"published");
	c1.displayDetails();
	return 0;
}
