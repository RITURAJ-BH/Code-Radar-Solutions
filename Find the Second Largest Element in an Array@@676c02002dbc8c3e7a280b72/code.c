#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)scanf("%d",&arr[i]);
    if(num==1){printf("-1");return 0;}
    int max=arr[0];
    int sec=arr[1];
    if(arr[1]>arr[0]){
        max=arr[1];sec=arr[0];
    }
    else if(arr[0]==arr[1])sec=-1;
    for(int i=0;i<num;i++){
        if(max<arr[i]){
            sec=max;
            max=arr[i];
        }else if(arr[i]>sec && arr[i]<max){
            sec=arr[i];
        }
    }
    if (sec == -1) 
        printf("-1\n"); 
    else 
    printf("%d",sec);
}