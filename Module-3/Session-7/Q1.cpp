#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream file("my_fav_songs.txt");
	file<<"Saiyaara \n";
	file<<"Tum hi ho \n";
	file<<"Hanuman Chalisa \n";
	file<<"Perfect \n";
	file<<"Kesariya \n";
	
	file.close();
	cout<<"5 favourite songs saved successfully!";
	return 0;
}
