#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    int rotate;
    scanf("%d",&rotate);
     rotate=rotate%N;
     printf("%d",rotate)
    for(int i=(N-rotate);i<N;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<N-rotate;i++){
        printf("%d ",arr[i]);
    }
}
