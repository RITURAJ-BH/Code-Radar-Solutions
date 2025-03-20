#include <stdio.h>
int main(){
    int i,j,k;
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        for(j=(4*i-i);j<k;j++){
            printf(" ");
        }
        for(int z=i;z<k;z++){
            printf("*");
        }
        printf("\n");
    }

}