#include <stdio.h>
int main(){
    int i,j,k;
    scanf("%d",&k);
    for(i=1;i<=k;i++){
        for(j=k;j>0;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}