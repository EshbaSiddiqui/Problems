#include <ctype.h>
#include "stringanalysis.h"

int countVowels(char text[]) {
    int count = 0;
    for(int i = 0; text[i] != '\0'; i++) {
        char ch = tolower(text[i]);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            count++;
    }
    return count;
}

int countWords(char text[]) {
    int count = 0;
    for(int i = 0; text[i] != '\0'; i++) {
        if(text[i] == ' ')
            count++;
    }
    return count + 1;
}

int countUppercase(char text[]) {
    int count = 0;
    for(int i = 0; text[i] != '\0'; i++) {
        if(text[i] >= 'A' && text[i] <= 'Z')
            count++;
    }
    return count;
}
