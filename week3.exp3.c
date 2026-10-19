#include<stdio.h>
int floorFind(int arr[], int low, int high, int x){
    int floorvalue=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            return arr[mid];
        }
        if(arr[mid]<x){
            floorvalue=arr[mid];
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return floorvalue;
}
int main(){
    int n,x;
    scanf("%d %n",&n,&x);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&x);
    int res=floorFind(arr,0,n-1,x);
    printf("%d",res);
    return 0;
}
