#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    b=sizeof(int)*8;
    if((a>>(b-1))&1){
        printf("Set");
    }
    else{
        printf("Not Set");    }
    
}