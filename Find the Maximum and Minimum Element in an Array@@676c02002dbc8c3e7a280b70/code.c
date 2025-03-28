#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int  arr[n];
    for(int i=0;i<n;i++)scanf("%d ",&n);
        int min[0]=arr[0];
        int max[n]=arr[n];
    for(int i=0;i<n;i++){
        if(min[0]<arr[i+1]){
            min[0]=arr[i+1];
          
        }
        if(max[n]<arr[i+1]){
            max[n]=arr[i+1];
            return 0;
        }
    }
    printf("%d %d"min[0],max[n]);
}