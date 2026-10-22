//Лубенец Илья 201-ИС-25
/*Функция получает на вход строку. Вернуть ее длину
int my_strlen(char s[]);*/
#include <stdio.h>
#define AR_LEN 100
int my_strlen(char s[]) {
	int len = 0;
	while (s[len] != '\0') {
		len = len + 1;
	}
	return len;
}

int main(){
	char str[AR_LEN];
	int i = 0;
	char ch;
	
	// Читаем символы пока не будет конец файла
	while (ch != EOF){
		ch = getchar();
		str[i] = ch;
		i = i + 1;
	}
	i = i-1;//Отступаем на один шаг назад от символа конца файла
	str[i] = '\0';   // обязательно завершаем строку
	
	int len = my_strlen(str);
	printf("len = %d\n", len);
	
	return 0;
}
