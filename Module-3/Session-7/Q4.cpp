#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream file("wishlist.txt");
	string productName;
	float price;
	int i;
	for(i=1;i<=3;i++){
		cout<<"Enter the product "<<i<<" name: ";
		getline(cin,productName);
		cout<<"Enter Price: ";
		cin>>price;
		cin.ignore();
		file<<productName<<" Rs. "<<price<<"\n";
	}
	file.close();
	
	ifstream readFile("wishlist.txt");
	string line;
	cout<<"\n Wishlist..."<<"\n";
	while(getline(readFile,line)){
		cout<<line<<"\n";
	}
	readFile.close();
}
