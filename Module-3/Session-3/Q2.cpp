#include<iostream>
using namespace std;
class Product{
	string productName;
	float price;
	float rating;
	public:
		Product(string name, float p, float r){
			productName = name;
			price = p;
			rating = r;
		}
		void displayInfo(){
			cout<<"Product Name: "<<productName<<"\n";
			cout<<"Price Rs. "<<price<<"\n";
			cout<<"Rating: "<<rating<<"\n";
		}
};
int main(){
	Product p("computer",61000,4.5);
	p.displayInfo();
	return 0;
}
