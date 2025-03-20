#include <stdio.h>
int main(){
    int i,j,k;
    scanf("%d",&k);
    for(i=0;i<k;i++){
        for(j=(k-1);j<k;j++){
            printf(" ");
        }
        for(int z=(i+1);z<=k;z++){
            printf("*");
        }
        printf("\n");
    }
}