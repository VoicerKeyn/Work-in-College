// 08.10.2026 Лубенец Илья 201-ИС-25
#include <stdio.h>
#define MAX 100
int main(){
	int index, N, massive[MAX];
	scanf("%d",&N);
	for(index=0;index<N;index++){
		scanf("%d",&massive[index]);	
	}
	for(index = index-1;index>=0;index = index-1){
		printf("%d",massive[index]);
		if(index>0){
			putchar('_');
		}
		else{putchar('\n');}
		
	} 
	return 0;
}
