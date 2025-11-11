#include <stdio.h>

int main() 
{
    char choice;
    int price = 0, quantity, total;

    printf("ABC Restaurant Online Order Placement\n");
    printf("WELCOME!\n\n");

    printf("Please select from the following Menu:\n");
    printf("B= Burger (Rs. 200)\n");
    printf("F= French Fries (Rs. 50)\n");
    printf("P= Pizza (Rs. 500)\n");
    printf("S= Sandwiches (Rs. 150)\n");

    printf("\nEnter your choice: ");
    scanf(" %c", &choice);

    switch(choice) 
	{
        case 'B':
        case 'b':
            price = 200;
            printf("You selected Burger.\n");
            break;
        case 'F':
        case 'f':
            price = 50;
            printf("You selected French Fries.\n");
            break;
        case 'P':
        case 'p':
            price = 500;
            printf("You selected Pizza.\n");
            break;
        case 'S':
        case 's':
            price = 150;
            printf("You selected Sandwich.\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
            return 0;
    }

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou ordered %d item(s).\n", quantity);
    printf("Price per item: %d PKR\n", price);
    printf("Total Bill = %d PKR\n", total);
    printf("\nThank you for your order... Have a nice day!\n");

    return 0;
}