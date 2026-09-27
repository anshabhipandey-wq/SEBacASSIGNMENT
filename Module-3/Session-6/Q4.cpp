#include <iostream>
using namespace std;
class UserProfile
{
	private:
	    string phoneNumber;
	public:
	    // Setter
	    void setPhoneNumber(string number)
	    {
	        phoneNumber = number;
	    }
	    // Getter
	    string getPhoneNumber()
	    {
	        return phoneNumber;
	    }
};
int main()
{
    UserProfile user;
    user.setPhoneNumber("8814831025");
    cout << "Phone Number: " << user.getPhoneNumber() << endl;
    return 0;
}
