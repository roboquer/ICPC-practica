#include<stdio.h>
#include<math.h>
main(){
    int n,i;
    int A[n];
    scanf("%i",n);
    for(i=1;i<=n;i++){
        A[i-1]=i;
    }
    for(i=1;i<=n;i++){
        if(pow(i,2)>n){
            break;
        }
        if(A[i]!=0){
            for(j=i*2;j<n;j++){
                A[j]
            }
        }
    }
}