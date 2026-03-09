#include<stdio.h>
#define INF 100000000
int min_monedas(int monedas[], int n_monedas, int valor){
    int dp[valor+1];
    dp[0]=0;
    for(int i=1; i<=valor; i++){
        dp[i] = INF;
    }
    for(int i =1;i<=valor;i++){ //aqui para cada cantidad de moneda
        for(int j=0;j<n_monedas;j++){ //aqui cada valor de moneda
            if(i - monedas[j]>=0){
                int minimo = dp[i-monedas[j]]+1;
                if(minimo < dp[i]){
                    dp[i] = minimo; // [0-0,1-1,2-2,3-1,4-2,]
                }
            }
        }
    }
    return (dp[valor] >= INF) ? -1 : dp[valor];
}
int main(){
    int monedas[]={1,3,4};
    int n = sizeof (monedas) / sizeof (monedas[0]);
    int valor = 11;
    int minimo = min_monedas(monedas, n, valor);
    if(minimo != -1){
        printf("Minimo de monedas: %d\n", minimo);
    }else{
        printf("No es posible.\n");
    }
    return 0;
}
// 1 con la cantidad de combinaciones posibles y 