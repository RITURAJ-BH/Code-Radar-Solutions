#include <stdio.h>
int main(){
    int i,z,k;
    scanf("%d",&k);
    for(i=0;i<k;i++){
        for(int j=(k-i);j<1;j--){
            printf(" ");
        }
        for(z=0;z<i+2;z++){
            printf("*");
        }
    printf("\n");
    
}}