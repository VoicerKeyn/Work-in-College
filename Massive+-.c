#include <stdio.h>
int main(){
	int massive2[100];
	int massive[100];
	int n,i;
	printf("n=");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		scanf("%d",&massive[i]);
	}
	int j=n;
	for(i=0;i<=n;i++){
		if(massive[i]<0 ){
			massive2[j]=massive[i];
			j=j-1;
		}
		else{
			massive2[i]=massive[i];
		}
	}
		for(i=0;i<=n;i++){
			printf("%d ",massive2[i]);
		}
	return 0;
	
}
