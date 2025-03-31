#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)scanf("%d",&arr[num]);
    int k;
    scanf("%d",&k);
    k=k%num;
    for(int i=k-num;i<num;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<k;i++){
        printf("%d",arr[i]);
    }
}
