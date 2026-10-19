#include<stdio.h>
int findpair(int arr[],int low,int high,int x,int *res1,int *res2){
    if(low>high)
        return 0;
    int curr=arr[low]+arr[high];
    if(curr==x){
        *res1=arr[low];
        *res2=arr[high];
        return 1;
    }
    if(curr>x){
        return findpair(arr,low,high-1,x,res1,res2);
    }
    else{
        return findpair(arr,low+1,high,x,res1,res2);
    }
}
int main(){
    int n,x;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    int res1=0,res2=0;
    if(findpair(arr,0,n-1,x,&res1,&res2)){
        printf("%d\n",res1);
        printf("%d\n",res2);
    }
    else{
        printf("No\n");
    }
    return 0;
}
