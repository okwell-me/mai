#include <iostream>
#include <string>

using namespace std;

void variant(char * name)
{
	char letter = name[0];
	cout << "Ваш вариант " << letter % 2 + 1;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите имя" << endl;
	char name[15];
	cin >> name;
	char letter = name[0];
	variant(name);
}