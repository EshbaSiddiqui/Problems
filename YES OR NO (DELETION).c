#include <stdio.h>

int main() 
{
    char choice;
    printf("Are you sure to delete [Y/y] / [N/n]?\n ");
    scanf(" %c", &choice); 
    switch (choice)
    {
        case 'Y':
        case 'y':
            printf("Deletion succeeded!\n");
            break; 
        case 'N':
        case 'n':
            printf("Delete cancelled!\n");
            break; 
        default:
            printf("Please choose the right option (Y or N).\n");
            break; 
    }
    return 0; 
}
