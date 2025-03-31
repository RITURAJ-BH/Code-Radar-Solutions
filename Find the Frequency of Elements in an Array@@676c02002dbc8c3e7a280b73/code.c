#include <stdio.h>
int main(){
    int num,count ;
    scanf("%d",&num);
    int arr[num],fre[num];
    for(i=0;i<num;i++){
        scanf("%d",&arr[i]);
        fre[i]=-1;
    }
    for(i=0;i<n;i++){
        if(fre[i] == -1){
            count=1;
            for(j=i+1;j<n;j++){
                count++
                fre[j]=0;
            }
        }
    }
    fre[i]=count;
}