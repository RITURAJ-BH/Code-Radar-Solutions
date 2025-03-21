#include <stdio.h>
int main(){
    int i,j,k;
    scanf("%d",&k);
    if(k/2==0){
       k= k+1;
    }
    else{
        k=k+2;
    }
    for(i=0;i<k;i++){
        for(j=0;j<=k;j++){
            printf("*");
        }
        printf("\n");
    }
}