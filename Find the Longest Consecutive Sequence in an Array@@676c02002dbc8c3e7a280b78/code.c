#include <stdio.h>
void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int exchange=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=exchange;
            }
        }
    }
}
    int longest(int arr[],int n){
        if(n==0)return 0;
        sort(arr,n);
        int maxlen=1,countlen=1;
        for(int i=0;i<n;i++){
            if(arr[i]==arr[i-1])continue;
            else if(arr[i]==arr[i-1]+1)maxlen++;
            else countlen=0;
            if(countlen>maxlen)maxlen=countlen;
        }
        return maxlen;
    }
    
    int main(){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)scanf("%d",&arr[i]);
        printf("%d",longest(arr,n));
    }
