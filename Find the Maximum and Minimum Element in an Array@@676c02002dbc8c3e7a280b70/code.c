#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int  arr[n];
    for(int i=0;i<n;i++)scanf("%d ",&n);
        int min=arr[0];
        int max=arr[n-1];
    for(int i=0;i<n;i++){
        if(min<arr[i+1]){
            min=arr[i+1];
          
        }
        if(max<arr[i+1]){
            max=arr[i+1];
            return 0;
        }
    }
    printf("%d %d", min,max);
}