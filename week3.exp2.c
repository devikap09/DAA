#include<stdio.h>
int count(int arr[],int left,int right,int value){
    int i,c=0;
    for(i=left;i<=right;i++){
        if(arr[i]==value){
            c++;
        }
    }
    return c;
}
int majority(int arr[],int left,int right){
    if(left==right)
        return arr[left];
    int mid=left+(right-left)/2;
    int leftmajor=majority(arr,left,mid);
    int rightmajor=majority(arr,mid+1,right);
    if(leftmajor==rightmajor)
        return leftmajor;
    int lcount=count(arr,left,right,leftmajor);
    int rcount=count(arr,left,right,rightmajor);
    if(lcount>rcount)
        return leftmajor;
    else
        return rightmajor;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",majority(arr,0,n-1));
    return 0;
}
