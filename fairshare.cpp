#include<stdio.h>
#include<iostream>
using namespace std;
main(){
    bool listo = false;
    int i,n,lugm;
    int sumf1 = 0, sumf2 = 0, probar;
    cin >> n;
    int mat[n][2];
    for(i=0;i<n;i++){
        cin >> mat[i][0] >> mat[i][1];
        sumf1 = sumf1 + mat[i][0];
        sumf2 = sumf2 + mat[i][1];
    }
    for(i=0;i<n;i++){
        probar = sumf1 - mat[i][0] + mat[i][1];
        if(probar >= sumf2){
            listo = true;
            lugm = i;
            break;
        }
    }
    if(listo == true){
        cout << lugm + 1;
    }else{
        cout << "impossible";
    }
}