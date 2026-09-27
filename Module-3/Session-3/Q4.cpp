#include<iostream>
using namespace std;
class Ticket{
	public:
		~Ticket(){
			cout<<"Saving your ticket...\n";
		}
};
int main(){
	Ticket *t1;
	cout<<"Ticket booked successfully!\n";
	delete t1;
	return 0;
}
