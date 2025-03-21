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
        for(int x=0;x<k;x++){
        for(int y=(k-1);y<(k-i-1);y--){
            printf(" ");
        }
        for(int c=0;c<(x*2+1);c++){
            printf("*");
        }
        printf("\n");
    }
}
}