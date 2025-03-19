#include <stdio.h>
int main(){
    int i,z,k;
    scanf("%d",&k);
    for(i=0;i<k;i++){
        for( int j = 0; j < (k - i - 1); j++) {
            printf(" ");
        }
    
        for(z=0;z<i*2-1;z++){
            printf("*");
        }
    printf("\n");
    }
}