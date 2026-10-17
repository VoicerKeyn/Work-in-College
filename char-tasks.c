//Лубенец Илья 201ИС-25 17.10.26
/* Символы. 17.10.2026. Гусятинер Л.Б., 201ИС-25 */
/* Задания.
1. Подсчитать количество цифр
2. Подсчитать количество пробельных символов:
пробел, табуляция, перевод строки
3.Подсчитать количество заглавных латинских букв */

#include <stdio.h>
#include<ctype.h>
int main() {
	int a;
	a = getchar();
	int kolvo_chisel=0;
	int kolvo_probel=0;
	int kolvo_bukv=0;
	// ...
	while (a != EOF) {
	// ...
		a = getchar();
		//Проверяем цифра ли символ
		if(isdigit(a)){
			kolvo_chisel = kolvo_chisel+1;
		}
		//Проверяем символ на пробел табуляцию перенос строки
		if(isspace(a)){
			kolvo_probel = kolvo_probel+1;
		}
		//Проверяем символ на заглавную латинскую букву
		if(isalpha(a) && isupper(a)){
			kolvo_bukv=kolvo_bukv+1;
		}
	}
	printf("kolvo_chisel = %d\n",kolvo_chisel);
	printf("kolvo_probelov = %d\n",kolvo_probel);
	printf("kolvo_bukv = %d",kolvo_bukv);
    return 0;
}

