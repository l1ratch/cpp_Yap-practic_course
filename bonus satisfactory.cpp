#include <iostream>
#include <Windows.h>
#include <string.h>
#include <string>
#include "StudentClass.h"
#include "ClassCrypt.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
	SetConsoleOutputCP(1251);

	ClassCrypt* pCrypt = new ClassCrypt();

	pCrypt->Decrypt();

	StudentClass* st = new StudentClass();
	st->mainMenu();

	pCrypt->Crypt();
}