#include<stdio.h>
 int main(){
 	int i,j,x,y;
	printf("Enter The Number Row & Col:\n");
	scanf("%d%d",&x,&y);
 	int a[x][y] ,b[x][y] ,c[x][y];
	printf("Enter The Value Of Matrix A:\n");
 	for(i=0;i<x;i++){
 		for(j=0;j<y;j++){
 			scanf("%d",&a[i][j]);	
			}	
		}
	for(i=0;i<x;i++){
 		for(j=0;j<y;j++){
 			printf("%d ",a[i][j]);	
			}
		printf("\n");	
		}
	printf("Enter The Value Of Matrix B:\n");
	for(i=0;i<x;i++){
 		for(j=0;j<y;j++){
 			scanf("%d",&b[i][j]);
			}	
		}
	for(i=0;i<x;i++){
 		for(j=0;j<y;j++){
 			printf("%d ",b[i][j]);
			}
		printf("\n");	
		}
	for(i=0;i<x;i++){
 		for(j=0;j<y;j++){
 			c[i][j]=a[i][j]+b[i][j];
			}	
		}
	printf("Addition Of 2 Matrix:\n");
	for(i=0;i<x;i++){
 		for(j=0;j<y;j++){
 			printf("%d ",c[i][j]);
			}
		printf("\n");	
		}	 
}
