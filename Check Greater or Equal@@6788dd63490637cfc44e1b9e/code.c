#include <stdio.h>
int main(){
    int a,b;
    scnaf("%d",&a,&b);
    if(a>=b){
        printf("Yes");
    }
    else{
        printf("No");
    }
}