#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char a;
    char vowels[]="aeiouAEIOU";
    scanf("%c",&c);
    if(strchr(vowels,c)){
        printf("Vowel");
    }
    else if(isdigit(a)){
        printf("Digit");
    }
    else if(!vowels,ch){
        printf("consonant");
    }
    else{
        printf("Special Character");
    }
    return 0;
}