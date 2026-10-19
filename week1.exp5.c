#include<stdio.h>
void reverse(int n){
    int rev=0,remainder;
    int count =2;
    while(n!=0){
        count++;
        remainder=n%10;
        count++;
        rev=rev*10+remainder;
        count++;
        n/=10;
        count++;
    }
    count++;
    //printf("%d",rev);
    printf("%d",count);
}
int main(){
    int n;
    scanf("%d",&n);
    reverse(n);
    return 0;
}
