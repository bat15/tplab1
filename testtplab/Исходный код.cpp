#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include "stdio.h"
using namespace std;
void main()
{
	system("c:\\1\\test.bat");
	system("pause");
	system("cls");
	FILE *f;
	if ((f = fopen("c:\\1\\test.log", "rt")) == NULL)
	{
		printf("Error");
		system("pause");
		return;
	}
	char e = ' ', compl[] = { 'a', 'f', 'd', 'z', 'z', 'z', 'z', '\0'};
	int i = 0;
	for (i = 1; i<=strlen(compl); i++)
	{
	fscanf(f, "%c", &e);
	if (e == compl[i-1]) cout << i  << '\t' << "done" << endl;
	else cout << i << '\t' << "undone" << endl;
	while (e != '\n') 	fscanf(f, "%c", &e);
	if (i == 4) while (e != '\n') 	fscanf(f, "%c", &e);
}
	system("pause");
}