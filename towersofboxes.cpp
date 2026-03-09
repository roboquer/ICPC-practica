#include<iostream>
using namespace std;
main(){
    int t,n,m,d,soporte,columnas,i;
    cin >> t;
    for(i = 0; i<t;i++){
        cin >> n >> m >> d;
        soporte = d/m + 1;
        if(n%soporte == 0){
            columnas = n/soporte;
        }else{
            columnas = n/soporte + 1;
        }
        cout << columnas << "\n";
    }
}