// 10.09.18.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<cstring>
#include<locale.h>
#include<Windows.h>
using namespace std;

int Aatoi_t(char* s)
{
	int sum = 0;
	for (int i = 0; i < strlen(s) && isdigit(s[i]); i++)
	{
		sum = sum * 10 + s[i] - 48;
	}
	return sum;
	/*while (*s >= '0' && *s <= '9') {
		n *= 10;
		n += *s++;
		n -= '0';
	}
	return n;*/
}
int Aatoi_t1(char* s)
{
	int sum = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (isdigit(s[i]))
			sum = sum * 10 + s[i] - 48;
	}
	return sum;

}
void test1(char* s)
{


	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		cout << s[i] << endl;

	}


}
int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
#pragma region Theory



	//char str[100] = "hello ";
	//char str1[100] = "hi world";
	//strncpy_s(str,str1, 3); //копирование определенное количество символов
	//strcpy_s(str, str1);//копирование в первый массив второй

	//strcpy_s(str, strstr(str1, "w"));

	//strcat_s(str, str1); // str= str+str1

	//strncat_s(str, str1, 4);

	//strncat_s(str, strstr(str1,"w"), 4);

	//cout << strcmp(str, str1) << endl;

	//cout << strncmp(str, str1,2) << endl;

	//cout << str << endl;

	//char str[100] = "This!is example for.my#students"; //разбивка на контекст

	//char* context;
	//char* p = strtok_s(str, "!.#is ", &context);
	//while (p!=NULL)
	//{
	//	cout << p << "    " << endl;
	//	p = strtok_s(context, "!.#is ", &context);
	//}
#pragma endregion


#pragma region Замена текста

	//char final_text[100] = "";
	//char a[100] = "This is example for my example";
	//char b[100] = "example";
	//char c[100] = "test";

	//char* context;
	//char* p = strtok_s(a, " ", &context);
	//while (p != NULL)
	//{
	//	if (strcmp(p, b) != 0)
	//		//strcat_s(final_text, c);
	//
	//		strncat_s(final_text, p, strlen(p));
	//	strcat_s(final_text, " ");
	//			
	//	p = strtok_s(context, " ", &context);
	//	
	//}
	//cout << final_text << endl;

#pragma endregion

#pragma region atoi,itoa

	/*int a;
	char str[30];
	int index = 0;
	cin >> str;
	cout << Aatoi_t(str) << endl;
	cout << Aatoi_t1(str) << endl;*/
	//_itoa_s(a, str, 10);
	//cout<<atoi(str)<<endl;


	/*for (int i = 0; i < strlen(str); i++)
	{
		cout << str[i] << endl;
	}*/
	/*while (a)
	{
		str[index++] = char(48 + a % 10);
		a /= 10;
	}
	for (int k = index-1; k >= 0; k--)
	{
		cout << str[k] << endl;
	}*/



#pragma endregion

	char str[30];
	cin >> str;
	test1(str);

	system("pause");
	return 0;
}

