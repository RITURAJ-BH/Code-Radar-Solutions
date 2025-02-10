#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char a;
    char vowels[]="aeiouAEIOU";
    scanf("%c",&a);
    if(strchr(vowels,c)){
        printf("Vowel");
    }
    else if(isdigit(c)){
        printf("Digit");
    }
    else if(!vowels,c){
        printf("consonant");
    }
    else{
        printf("Special Character");
    }
    return 0;
}