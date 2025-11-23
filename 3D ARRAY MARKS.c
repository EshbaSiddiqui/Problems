#include <stdio.h>
int main() 
{
    int marks[5][4][3]; 
    int students, subjects = 4, terms = 3;
    int i, j, k;

    printf("Enter number of students (max 5): ");
    scanf("%d", &students);
    for(i = 0; i < students; i++) 
    {
        printf("\nEntering marks for Student %d:\n", i+1);
        for(k = 0; k < terms; k++) 
        {
            printf(" Term %d:\n", k+1);
            for(j = 0; j < subjects; j++) 
            {
                printf(" Subject %d: ", j+1);
                scanf("%d", &marks[i][j][k]);
            }
        }
    }
    float AvgPerTerm[5][3], OverallAvg[5];
    //CALCULATE AVERAGE 
    for(i = 0; i < students; i++) 
    {
        float totalOverall = 0;

        printf("\nStudent %d Average Marks:", i+1);
        for(k = 0; k < terms; k++) 
        {
            float termTotal = 0;
            for(j = 0; j < subjects; j++) 
            {
                termTotal += marks[i][j][k];
            }
            AvgPerTerm[i][k] = termTotal / subjects;
            printf("\n  Term %d Average = %.2f", k+1, AvgPerTerm[i][k]);
            totalOverall += termTotal;
        }
        OverallAvg[i] = totalOverall / (subjects * terms);
        printf("\n  Overall Average = %.2f\n", OverallAvg[i]);
    }
    // Find highest Overall Scorer
    int topStudent = 0;
    for(i = 1; i < students; i++) 
    {
        if(OverallAvg[i] > OverallAvg[topStudent]) 
        {
            topStudent = i;
        }
    }
    // Find best term of Top Scorer
    int bestTerm = 0;
    for(k = 1; k < terms; k++) 
    {
        if(AvgPerTerm[topStudent][k] >
        AvgPerTerm[topStudent][bestTerm]) 
        {
            bestTerm = k;
        }
    }
    printf("Highest Scorer: Student %d\n", topStudent+1);
    printf("Overall Average: %.2f\n", OverallAvg[topStudent]);
    printf("Best Performance Term: Term %d (Average: %.2f)\n", bestTerm+1, AvgPerTerm[topStudent][bestTerm]);

    return 0;
}
