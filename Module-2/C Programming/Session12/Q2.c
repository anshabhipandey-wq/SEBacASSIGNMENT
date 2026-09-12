#include <stdio.h>
struct FoodItem {
    char itemName[50];
    float price;
    float rating;
};
int main() {
	int i;
    struct FoodItem menu[3] = {
        {"Margherita Pizza", 299.0, 4.5},
        {"Veg Biryani", 249.0, 4.3},
        {"Paneer Butter Masala", 199.0, 4.4}
    };
    for (i = 0; i < 3; i++) {
        printf("Item: %s\n", menu[i].itemName);
        printf("Price: Rs. %.2f\n", menu[i].price);
        printf("Rating: %.1f/5\n", menu[i].rating);
        printf("------------------------\n");
    }
    return 0;
}

