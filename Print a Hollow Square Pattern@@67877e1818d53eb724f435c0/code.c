#include <stdio.h>
int main(){
    int i,j,k;
    scanf("%d",&k);
    for(i=0;i<k;i++){
        for(j=0;j<k;j++){
             if (i == 1 || i == k || j == 1 || j == k) {
                printf("* ");
            } else {
                printf("  "); 
            }
        }
        for(int space;space<k;space++){
            printf(" ");
        }
    printf("\n");
    }
}