#include<stdio.h>
void quickSort(int low,int high,int arr[]){
    int i=low,j=high;
    int temp;
    int pivot=arr[(low+high)/2];
    while(i<=j){
        while(arr[i]<pivot)
            i++;
        while(arr[j]>pivot)
            j--;
        if(i<=j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
    if(low<j)
        quickSort(low,j,arr);
    if(i<high)
        quickSort(i,high,arr);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    quickSort(0,n-1,arr);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
