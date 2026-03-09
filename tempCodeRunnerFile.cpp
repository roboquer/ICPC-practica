#include<stdio.h>
#include<iostream>
using namespace std;
main(){
    int i,j,n,lugm;
    int sumf1 = 0, sumf2 = 0;
    cin >> n;
    int mat[n][2];
    for(i=0;i<n;i++){
        for(j=0;j<2;j++){
            cin >> mat[i][j];
            if(j==0){
                sumf1 = sumf1 + mat[i][j];
            }else{
                sumf2 = sumf2 + mat[i][j];
            }
        }
        if(i==0){
            lugm = i;
        }else if(mat[lugm][0] > mat[i][0]){
            lugm = i;
        }
    }
    int probar = sumf2 - mat[lugm][0] + mat[lugm][1];
    if(probar >= sumf2){
        cout << lugm + 1;
    }else{
        cout << "impossible";
    }
}