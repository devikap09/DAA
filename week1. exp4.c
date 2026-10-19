#include<stdio.h>
void function(int n){
    //int c=0;
    int c=1;
    for(int i=n/2;i<n;i++){
        c++;
        for(int j=1;j<n;j=j*2){
            c++;
            for(int k=1;k<n;k=k*2){
                c++; //c++; already in program so we need to iterate it seperatly so another c++
                c++;
            }
        }
    }
    c++;
    printf("%d",c);
}
int main(){
    int n;
    scanf("%d",&n);
    function(n);
    return 0;
}
