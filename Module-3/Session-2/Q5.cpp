#include <iostream>
using namespace std;

class FoodOrder {
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    FoodOrder(int id, string restaurant, bool delivered) {
        orderId = id;
        restaurantName = restaurant;
        isDelivered = delivered;
    }

    void markDelivered() {
        isDelivered = true;
        cout << "Order delivered successfully!" << endl;
    }
};

int main() {
    FoodOrder order(101, "Dominos", false);

    cout << "Order ID: " << order.orderId << endl;
    cout << "Restaurant: " << order.restaurantName << endl;
    cout << "Delivered: " << order.isDelivered << endl;

    order.markDelivered();

    return 0;
}

