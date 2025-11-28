#include <stdio.h>
#include <string.h>
int main() 
{
    char firstname[50], lastname[50], fullname[100];

    printf("Enter First Name: ");
    scanf("%s",firstname);

    printf("Enter Last Name: ");
    scanf("%s",lastname);

    strcpy(fullname, firstname);
    strcat(fullname, " ");
    strcat(fullname, lastname);

    printf("Full Name: %s\n", fullname);
    printf("Total Characters: %d\n", strlen(fullname));

    return 0;
}
