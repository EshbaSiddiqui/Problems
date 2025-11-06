#include <stdio.h>

int main()
{
    float NTS,FSC;
    printf("Enter your NTS percentage: ");
    scanf("%f", &NTS);
    printf("Enter your FSC percentage: ");
    scanf("%f",&FSC);

    if (FSC>=70 && NTS>=70)
    {
        printf("Congratulations! You have been selected in Oxford University IT Department\n");
    }
    else if (FSC>70 && NTS>=60 && NTS<70)
    {
        printf("Congratulations! You have been selected in Oxford University Electronics Department\n");
    }
    else if (FSC>70 && NTS>=50 && NTS<60)
    {
        printf("Congratulations! You have been selected in Oxford University Telecommunication Department\n");
    }
    else if (FSC>=60 && FSC<70 && NTS>=50)
    {
        printf("Congratulations! You have been selected in MIT University IT Department\n");
    }
    else if (FSC>=50 && FSC<60 && NTS>=50)
    {
    printf("Congratulations! You have been selected in MIT University Chemical Department\n");
    }
    else if(FSC>=40 && FSC<50 && NTS>=50)
    {
    printf("Congratulations! You have been selected in MIT University Computer Department\n");
	}
    else
    {
        printf("Sorry, you have not been selected by any University :( \n");
    }
    return 0;
}
