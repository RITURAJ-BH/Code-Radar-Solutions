#include <stdio.h>
int main(){
    int a,count;
    scanf("%d",&a);
    int arr[a],index[a];
    for(int i=0;i<a;i++){scanf("%d",&arr[i]);index[i]=0;}
    for(int i=0;i<a;i++){
        if(index[i]==0){
            count=1;
            for(int j=i+1;j<a;j++){
                if(arr[i]==arr[j]){count++;index[j]=-1;}
            }
        }
        arr[i]=count;
    
    }
     for(int i=0;i<a;i++){
        if(arr[i]!=-1){
            printf("%d",index[i]);
        }
        else{
            printf("-1");
        }
     }

}