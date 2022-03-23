#include<stdio.h>
int main(){
	int h,m,e;
	scanf("%d%d%d", &h,&m,&e);
	if(m+e>=60){
		if((h+(m+e)/60)>=24){
			printf("%d %d", (h+(m+e)/60)-24,(m+e)%60);
		}
		else printf("%d %d", (h+(m+e)/60),(m+e)%60);
	}
	else printf("%d %d", h,m+e);
}
