#include <stdio.h>
void capitalizeFirstLetter(char str[])
{
    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] - 32;
    }
}
int main()
{
    char productName[20] ;
    printf("\n Enter Product Name: ");
    scanf("%s",productName);
    char username[20] ;
    printf("\n Enter UserName: ");
    scanf("%s",username);
    capitalizeFirstLetter(productName);
    capitalizeFirstLetter(username);
    printf("Product Name: %s\n", productName);
    printf("Username: %s\n", username);
    return 0;
}
