#include<iostream>
using namespace std;
class Flipkart{
	public:
		void serachProduct(string productName){
			cout<<"Searching for a product: "<<productName<<"\n";
		}
		void serachProduct(string productName,string category){
			cout << "Searching for product: " << productName << "\n";
        	cout << "Category: " << category << "\n";
		}
};
int main(){
	Flipkart f;
	f.serachProduct("Laptop");
	cout<<"\n";
	f.serachProduct("Laptop","Electronics");
	return 0;
}
