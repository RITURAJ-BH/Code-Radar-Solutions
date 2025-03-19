#include <stdio.h>
int main(){
    int i,j,k;
    scanf("%d",&k);
    for(i=0;i<k;i++){
        for(j=0;j<i+k;j++){
            for(int z=0;z<k-z;z++){
                printf(" ");
            }
         printf("*");
        }
    printf("\n");
    }
}