#include<iostream>
using namespace std;
class PaymentProcessor{
	public:
		void processPayment(double amount){
			cout<<"Payment method: Amount only "<<"\n";
			cout<<"Final Amount: Rs. "<<amount<<"\n";
		}
		void processPayment(double amount,string couponCode){
			double finalAmount = amount;
			if(couponCode == "SAVE10"){
				finalAmount = amount - (amount * 0.10);
			}
			cout << "Payment method: Amount + Coupon" <<"\n";
	        cout << "Coupon Code: " << couponCode << "\n";
	        cout << "Final Amount: Rs. " << finalAmount << "\n";
		}
};
int main(){
	PaymentProcessor p;

    p.processPayment(1000);
    cout<<"\n";
    p.processPayment(1000, "SAVE10");

}
