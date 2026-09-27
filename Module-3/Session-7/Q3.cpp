#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream file("my_fav_songs.txt",ios::app);
	string songs;
	cout<<"Enter a new songs name";
	getline(cin,songs);
	file<<songs<<"\n";
	file.close();
	cout<<"Songs added successfully!";
}
