#include <iostream>
using namespace std;

class FoodOrder {
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    void markDelivered() {
        isDelivered = true;
        cout << "Order delivered successfully!" << endl;
    }
};

int main() {
    FoodOrder order;

    order.orderId = 101;
    order.restaurantName = "Dominos";
    order.isDelivered = false;

    order.markDelivered();

    return 0;
}

