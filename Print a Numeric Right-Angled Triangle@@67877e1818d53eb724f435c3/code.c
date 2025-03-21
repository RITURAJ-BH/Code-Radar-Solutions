#include <stdio.h>
int main(){
    int i,j,k;
    scanf("%d",&k);
    for(i=0;i<k;i++){
        for(j=0;j<=k;j++){
            printf("%d",i);
        }
        printf("\n");
    }
}