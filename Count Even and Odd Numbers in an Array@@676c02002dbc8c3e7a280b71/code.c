#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);   
    int even = 0,odd = 0;
    int arr[num];
    for(int i=0;i<num;i++)scanf("%d",&arr[i]);
    for(int i=0;i<num;i++){
        if(arr[i]%2==0){
            even++;
        }
        else {odd++;}
    }
    printf("%d %d",even,odd);
    return 0;
}