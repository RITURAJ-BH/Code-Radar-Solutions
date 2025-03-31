#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)scanf("%d",&arr[i]);
    int rotate;
    scanf("%d",&rotate);
     rotate=rotate%N;
    for(int i=(N-rotate);i<N;i++){
        printf("%d\n",arr[i]);
    }
    for(int i=0;i<N-rotate;i++){
        printf("%d\n",arr[i]);
    }
}
