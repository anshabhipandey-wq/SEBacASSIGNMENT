#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int choice;
	string title,plateform,status;
	int views;
	do{
		cout<<"\n___Content Menu____\n";
		cout<<"1.Add Content"<<"\n";
		cout<<"2.Exit"<<"\n";
		cout<<"3.Enter your choice: "<<"\n";
		cin>>choice;
		cin.ignore();
		if(choice==1){
			cout<<"Enter content title: ";
			getline(cin,title);
			cout<<"Enter plateform: ";
			getline(cin,plateform);
			cout<<"Enter views: ";
			cin>>views;
			cin.ignore();
			cout<<"Enter status: ";
			getline(cin,status);
			
			ofstream file("content_list.txt",ios::app);
			file<<"Title: "<<title<<"\n";
			file<<"plateform: "<<plateform<<"\n";
			file<<"views: "<<views<<"\n";
			file<<"status: "<<status<<"\n";
			file<<"__________________________"<<"\n";
			file.close();
			cout << "Content saved successfully!" << "\n";
		}
		else if(choice==2){
			cout<<"Exiting..."<<"\n";
		}
		else
        {
            cout << "Invalid choice!" << "\n";
        }
	}while(choice!=2);
	return 0;
}
