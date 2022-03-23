#include<stdio.h>
int main(){
    int a[3]={};
    int b;
	scanf("%d", &b);
    scanf("%1d%1d%1d", &a[0],&a[1],&a[2]);   
    printf("%d\n", a[2]*b);
    printf("%d\n", a[1]*b);
    printf("%d\n", a[0]*b);
    printf("%d", (a[2]*b)+((a[1]*10)*b)+((a[0]*100)*b));
    
}
