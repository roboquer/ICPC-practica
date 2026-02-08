#include<bits/stdc++.h>
main(){
    int a,b,c,n;
    scanf("%i" "%i" "%i" "%i",&a,&b,&c,&n);
    if(a>0 && a<=10 && b>0 && b<=10 && c>0 && c<=10 && n>=1 && n<=20 && n<=a+b+c){
        printf("Yes");
    }else{
        printf("No");
    }
}