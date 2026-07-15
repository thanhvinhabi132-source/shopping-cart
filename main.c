#include <stdio.h>
#include <string.h>

int main(){
    // SHOPPING CART PROGRAM
    
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price for each?: ");
    scanf("%f", &price);

    printf("How many would you like? ");
    scanf("%d", &quantity);

    total = price * quantity;


    // Code mới đã sửa:
    printf("\nYou have bought %d %s ", quantity, item); // Thêm một khoảng trắng sau %s
    printf("%c%.2f\n", currency, total);               // Thêm \n ở cuối để xuống dòng sạch sẽ

}
