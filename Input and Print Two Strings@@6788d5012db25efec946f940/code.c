#include <stdio.h>
int main(){
    char name[25],thing[25];
    scanf("%s %s",&name,&thing);
    printf("You entered: %s (and) %thing",name,thing);
    return 0;
}