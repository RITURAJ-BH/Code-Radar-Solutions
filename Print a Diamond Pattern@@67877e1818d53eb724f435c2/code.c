#include <stdio.h>
int main(){
    int i,j,k;
    scanf("%d",&k);
    for(i=0;i<k;i++){
        for(j=0;j<(k-i-1);j++){
            printf(" ");
        }
        for(int z=0;z<(i*2+1);z++){
            printf("*");
        }
        for(i=0;i<k;i++){
        for(j=(k-1);j<(k-i-1);j--){
            printf(" ");
        }
        for(int z=0;z<(i*2+1);z++){
            printf("*");
        }
        printf("\n");
    }
}