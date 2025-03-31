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
               if(arr[i]==arr[j]){
                 count++;
                fre[j]=0;}
            }
        
    fre[i]=count;}}
    for(int i=0;i<num;i++){
        if(fre[i]!=0){
            printf("%d %d\n",arr[i],fre[i]);
        }
      
    }
    return 0;
}