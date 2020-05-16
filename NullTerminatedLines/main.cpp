#include <iostream>
#include <Windows.h>
using namespace std;

void InputLine(char str[], const int n);
int StringLength(char str[]);
void ToUpper(char str[]); // ��������� ������ � ������� �������
void ToLower(char str[]); // ��������� ������ � ������ �������
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
	cout << "������� ������: "; InputLine(str, n);
	cout << "�������������� �������� ������: " << str << endl;
	cout << "����� �������� ������: " << StringLength(str) << endl;
	cout << endl;
	cout << "������� ������ ��� �������� � ������� �������: "; InputLine(str, n);
	ToUpper(str);
	cout << "������� ������ � ������� �������: " << str << endl;
	cout << endl;
	cout << "������� ������ ��� �������� � ������ �������: "; InputLine(str, n);
	ToLower(str);
	cout << "������� ������ � ������ �������: " << str << endl;
	cout << endl;
	cout << "������� ������ � ���������, ������ ������� ����� �������: "; InputLine(str, n);
	Shrink(str);
	cout << "������ ������� ���� �������: " << str << endl;
	cout << endl;
	cout << "������� ������ ��� �������� �� �� �������� ������ ����������� ��� ���: ";
	InputLine(str, n);
	cout << "���� ��������� '1' �� ������ ����������, ���� '0' �� �� ��������: " << endl;
	cout << "���������: " << ispalindrome(str) << endl;
	cout << endl;
	cout << "������� ������ ��� ��������, �������� �� ������ ������: "; InputLine(str, n);
	cout << "���� ��������� '1' �� ������ �����, ���� '0' �� �� �����: " << endl;
	cout << "���������: " << isInteger(str) << endl;
	
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
		if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= '�' && str[i] <= '�')str[i] -= 32;
	}
	cout << endl;
}
void ToLower(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= '�' && str[i] <= '�')str[i] += 32;
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

