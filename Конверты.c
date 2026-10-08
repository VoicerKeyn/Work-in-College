// 22.09.2026 Конверты Лубенец Илья 201-Ис-25
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	int a,b;//размеры письма
	scanf("%d%d",&a,&b);
	int x,y;//размеры конверта
	scanf("%d%d",&x,&y);
	if (a<x && b<y){
		printf("Влезет");
	}
	else{
		printf("Не влезет");
	}
	return 0;
	
}
