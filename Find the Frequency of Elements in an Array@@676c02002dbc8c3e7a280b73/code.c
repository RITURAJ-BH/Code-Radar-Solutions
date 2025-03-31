#include <stdio.h>
int main(){
    int num,count ;
    scanf("%d",&num);
    int arr[num],fre[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
        fre[i]=-1;
    }
    for(int i=0;i<num;i++){
        if(fre[i] == -1){
            count=1;
            for( int j=i+1;j<num;j++){
                count++;
                fre[int j]=0;
            }
        }
    }
    fre[int i]=count;
}