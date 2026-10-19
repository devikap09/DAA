#include<stdio.h>
int count(int arr[],int low,int high,int n){
    if(low>high)
        return 0;
    int mid=low+(high-low)/2;
    if(arr[mid]==0){
        if(mid==0 || arr[mid-1]==1)
            return n-mid;
        return count(arr,low,mid-1,n);
    }
    return count(arr,mid+1,high,n);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",count(arr,0,n-1,n));
    return 0;
}
