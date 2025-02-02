#include <stdio.h>
int main(){
    char name[25],hobby[26];
    int age;
    scanf("%s %d %s",name,age,hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s",hobby);
    return 0;
}