#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char ch;
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int is_vowel = 0;
    
    // Take input
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    // Check if the character is a vowel using the array
    for (int i = 0; i < 10; i++) {
        if (ch == vowels[i]) {
            is_vowel = 1;
            break;
        }
    }
    
    if (is_vowel) {
        printf("%c is a vowel.\n", ch);
    } else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("%c is a consonant.\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is a special character.\n", ch);
    }
    
    return 0;
}