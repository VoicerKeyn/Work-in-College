//08.10.2026 Лубенец Илья 201-ИС-25
// Задача: Переместить все отрицательные числа в массиве вправо а положительные в лево
#include <stdio.h>
int main(){
	int massive2[100];
	int massive[100];
	int n,i;
	printf("n=");
	scanf("%d",&n);
	//Заполняем массив числами
	for(i=0;i<=n;i++){
		scanf("%d",&massive[i]);
	}
	int j=0;
	//Перемещаем положительные числа в новый массив налево
	for(i=0;i<=n;i++){
		if(massive[i]>0 ){
			massive2[j++]=massive[i];
		}
	}
	//Перемещаем отрицательные числа в новый массив вправо
	for(i=0;i<=n;i++){
		if(massive[i]<0 ){
			massive2[j++]=massive[i];
		}
	}
	//Возвращаем в старый массив наший новый порядок
	for(i=0; i<=n;i++){
		massive[i]=massive2[i];
	}
	//Выводим наш массив
	for(i=0;i<=n;i++){
		printf("%d ",massive2[i]);
	}
	return 0;
	
}
