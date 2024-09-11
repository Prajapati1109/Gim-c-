#include<stdio.h>
int main(){
	int i,j,k;
	for(i=0;i<=4;i++){
		for(j=i;j<=4;j++){
			printf("");
		}
		for(k=i;k<=4;k++){
			printf("%d",k+75);
		}
		printf("\n");
		}
}
