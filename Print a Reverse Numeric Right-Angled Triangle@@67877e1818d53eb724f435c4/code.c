#include <stdio.h>
int main(){
    int i,j,k;
    scanf("%d",&k);
    for(i=k;i>0;i--){
       for(int j=1;j<=i;j++)printf("%d ",j);
       printf("\n");
    }
}