#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);   
    int even = 0,odd = 0;
    int arr[num];
    for(int i=0;i<num;i++)scanf("%d",&arr[i]);
    for(int i=0;i<num-1;i++){
        if(arr[i]/2==0){
            even=+1;
        }
        else {odd=+1;}
    }
    printf("%d %d",even,odd);
    return 0;
}