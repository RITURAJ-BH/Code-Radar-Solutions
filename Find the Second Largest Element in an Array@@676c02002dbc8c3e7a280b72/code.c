#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)scanf("%d",&arr[i]);
    int max=arr[0];
    int sec=arr[0];
    for(int i=0;i<num;i++){
        if(max<arr[i]){
            sec=max;
            max=arr[i];
        }else if(arr[i]>sec && arr[i]<max){
            sec=arr[i];
        }
        else {printf("-1");}
    }
    printf("%d",sec);
}