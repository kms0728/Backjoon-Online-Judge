#include<stdio.h>
int main(){
	int a[3];
	int b[7]={};
	
	scanf("%d%d%d", &a[0],&a[1],&a[2]);
	
	
	for(int i=1, n=0; i<=6; i++){
		if(a[0]==i) b[i]++;
		if(a[1]==i) b[i]++;
		if(a[2]==i) b[i]++;
		
		if(n<a[0]) n=a[0];
		if(n<a[1]) n=a[1];
		if(n<a[2]) n=a[2];
		
		if(b[i]==3){
			printf("%d", 10000+i*1000);
			break;	
		}
		else if(b[i]==2){
			printf("%d", 1000+i*100);
			break;
		}
		else if(i==6){
			printf("%d", n*100);
		}
	}
	

	
}
