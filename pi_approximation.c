#include<stdio.h>
#include<string.h>
#include<stdlib.h>



long double PIappox(int n){
    long double PI = 0;

    for(int i = 0; i < n ; i++){
       // printf("%f\n",(float)power(-1,i)/(2*i+1));
        PI+=((long double)(i % 2 == 0 ? 1.0 : -1.0)/(2.0*i+1.0));
    }
    PI*=4.0;
    return PI;
}


int main(){
    printf("%.19Lf \n",PIappox(2000000));

    return 0;
}
