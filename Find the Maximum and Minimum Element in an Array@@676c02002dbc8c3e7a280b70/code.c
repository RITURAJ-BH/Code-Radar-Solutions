#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int  arr[n];
    for(int i=0;i<n;i++)scanf("%d ",&n);
        int min=arr[0];
        int max=arr[n-1];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
          
        }
        if(max<arr[i]){
            max=arr[i];
            return 0;
        }
    }
    printf("%d %d", min,max);
}