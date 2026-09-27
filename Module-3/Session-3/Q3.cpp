#include<iostream>
using namespace std;
class Movie{
	string movieName;
	float rating;
	public:
		Movie(string name,float r){
			movieName = name;
			rating = r;
		}
		Movie(const Movie &m){
			movieName = m.movieName;
			rating = m.rating;
		}
		void displayInfo(){
			cout<<"Movie Name: "<<movieName<<"\n";
			cout<<"Rating: "<<rating<<"\n";
		}
};
int main(){
	Movie m1("Animal",4.4);
	Movie m2(m1);
	cout<<"Origainal Movie:\n";
	m1.displayInfo();
	cout<<"\n";
	cout<<"Copy movie: \n";
	m2.displayInfo();
}
