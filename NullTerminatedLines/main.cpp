#include <iostream>
#include <Windows.h>
using namespace std;

void InputLine(char str[], const int n);
int StringLength(char str[]);
void ToUpper(char str[]); // Переводит строку в верхний регистр
void ToLower(char str[]); // Переводит строку в нижний регистр
void Shrink(char str[]);

bool ispalindrome(const char str[]);
bool isInteger(char str[]);

void main()
{
	setlocale(LC_ALL, "");
	/*cout << "Hello" << endl;
	cout << sizeof("Hello") << endl;
	cout << typeid("Hello").name() << endl;*/

	/*char str[] = { 'H', 'e', 'l', 'l', 'o', '\0'};
	cout << str << endl;
	cout << typeid(str).name() << endl;*/

	/*char str[] = "Hello";
	cout << str << endl;
	cout << sizeof(str) << endl;
	cout << typeid(str).name() << endl;

	const char* str1 = "Hello";
	cout << str1 << endl;
	cout << sizeof(str1) << endl;
	cout << typeid(str1).name() << endl;*/

	const int n = 256;
	char str[n] = {};
	cout << "Введите строку: "; InputLine(str, n);
	cout << "Пробулировання введеная строка: " << str << endl;
	cout << "Длина введеной строки: " << StringLength(str) << endl;
	cout << endl;
	cout << "Введите строку для перевода в верхних регистр: "; InputLine(str, n);
	ToUpper(str);
	cout << "Перевод строки в верхний регистр: " << str << endl;
	cout << endl;
	cout << "Введите строку для перевода в нижний регистр: "; InputLine(str, n);
	ToLower(str);
	cout << "Перевод строки в нижний регистр: " << str << endl;
	cout << endl;
	cout << "Введите строку с пробелами, лишние пробелы будут удалены: "; InputLine(str, n);
	Shrink(str);
	cout << "Лишние пробелы были удалены: " << str << endl;
	cout << endl;
	cout << "Введите строку для проверки на то является строка палиндромом или нет: ";
	InputLine(str, n);
	cout << "Если результат '1' то строка палиндором, если '0' то не палидром: " << endl;
	cout << "Результат: " << ispalindrome(str) << endl;
	cout << endl;
	cout << "Введите строку для проверки, является ли строка числом: "; InputLine(str, n);
	cout << "Если результат '1' то строка число, если '0' то не число: " << endl;
	cout << "Результат: " << isInteger(str) << endl;
	
}

void InputLine(char str[], const int n)
{
	SetConsoleCP(1251);
	cin.getline(str, n);
	SetConsoleCP(866);
}
int StringLength(char str[])
{
	int i = 0;
	for (; str[i]; i++);
	return i;
}
void ToUpper(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'а' && str[i] <= 'я')str[i] -= 32;
	}
	cout << endl;
}
void ToLower(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'А' && str[i] <= 'Я')str[i] += 32;
	}
	cout << endl;
}
void Shrink(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == '\t')
		{
			str[i] = ' ';
			i--;
		}
	}
	for (int i = 0; str[i]; i++)
	{
		if(str[i] == ' ' && str[i + 1] == ' ')
		{
			for (int j = i--; str[j]; j++)
			{
				str[j] = str[j + 1];
			}
		}
	}
}
bool ispalindrome(const char str[])
{
	int i = 0;
	for (; str[i]; i++);
	for (int j = 0; str[j]; j++)
	{
		if (str[j] == str[i - j - 1])
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
bool isInteger(char str[])
{
	int i = 0;

	for (; str[i]; i++)
	{
		if ((str[i] >= '1' && str[i] <= '9'))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

