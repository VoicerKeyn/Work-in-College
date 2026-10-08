// 18.09.2026 Лыжники Лубенец Илья 201-Ис-25
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	double start1,start2;
	scanf("%lf%lf",&start1,&start2);
	double finish1,finish2;
	scanf("%lf%lf",&finish1,&finish2);
	double time1,time2;
	time1 = finish1 - start1;
	time2 = finish2 - start2;
	if (time1<time2){
		printf("Победил первый лыжник");
	}
	else if (time2<time1){
		printf("Победил второй лыжник");
	}
	else {
		printf("Ничья");
	}
	return 0;
}

