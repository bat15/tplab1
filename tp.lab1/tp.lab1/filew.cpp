#define _CRT_SECURE_NO_WARNINGS 1
#include "tp.lab1.h"
using namespace std;

void filew::fcreate()
{
	if (fname1 == "" )
	{
		cout << "b)Error! Empty file name! Enter file name!" << endl;
		return;
	}
	else
	{
		char *temp2 = new char[strlen(fname1)];
		strcpy(temp2, fname1);
		int i = strlen(temp2) - 1;
		while (temp2[i] != '\\')
		{
			i--;
		}
		i++;
		temp2[i] = '\0';
		if (_access(fname1, 0)&&!_access(temp2,0))
		{
			ofstream desc(fname1); cout << "z)Successful" << endl;
		}
		else
			cout << "g)cant create file" << endl;
	}
}
void filew::fdelete()
{
	if (fname1 == "")
	{
		cout << "b)Error! Empty file name! Enter file name!" << endl;
		return;
	}
	else
	{
		char *temp = new char[strlen(fname1) + 5];
		strcpy(temp,"DEL ");
		strcat(temp, fname1);
		if (!_access(fname1, 0))
		{
			system(temp); cout << "z)Successful" << endl;
		}
		else
			cout << "g)file not found" << endl;
	}
}
void filew::fcopy()
{
	if (fname1 == "" || fname2 == "")
	{
		cout << "b)Error! Empty file name! Enter file name!" << endl;
		return;
	}
	else
	{
		char *temp = new char[strlen(fname1) + strlen(fname2) + 15];
		strcpy(temp,"COPY ");
		strcat(temp, fname1);
		strcat(temp, " ");
		strcat(temp,fname2);
		char *temp2 = new char[strlen(fname1)];
		strcpy(temp2, fname1);
		int i = strlen(temp2) - 1;
		while (temp2[i] != '\\')
		{
			i--;
		}
		i++;
		temp2[i] = '\0';
		if (_access(fname2, 0) && !_access(fname1, 0) && !_access(temp2, 0))
		{
			system(temp); cout << "z)Successful" << endl;
		}
		else
			cout << "g)cant copy file or first file not found" << endl; 
		
	}
}
void filew::frename()
{
	if (fname1 == ""||fname2=="")
	{
		cout << "b)Error! Empty file name!Enter file name!" << endl;
		return;
	}
	else
	{
		if (rename(fname1, fname2) != 0)
		{
			cout << "c)Rename error" << endl; return;
		}
		else cout << "z)Successful" << endl;
	}
}
void filew::getproc(char *fproc,char *str1,char *str2,filew *file,int argentum)
{
	fname1 = str1;
	fname2 = str2;
	char proc[6]; proc[0] = 'e';
	*proc = *fproc;
	switch (proc[0])
	{
	case 'G':{if (argentum < 3){ cout << "d)argument error" << endl; return; } file->fcreate(); return; }
	case 'D':{if (argentum < 3){ cout << "d)argument error" << endl; return; }file->fdelete(); return; }
	case 'C':{if (argentum < 4){ cout << "d)argument error" << endl; return; }file->fcopy(); return; }
	case 'R':{if (argentum < 4){ cout << "d)argument error" << endl; return; }file->frename(); return; }
	case 'g':{if (argentum < 3){ cout << "d)argument error" << endl; return; } file->fcreate(); return; }
	case 'd':{if (argentum < 3){ cout << "d)argument error" << endl; return; }file->fdelete(); return; }
	case 'c':{if (argentum < 4){ cout << "d)argument error" << endl; return; }file->fcopy(); return; }
	case 'r':{if (argentum < 4){ cout << "d)argument error" << endl; return; }file->frename(); return; }
	case 'e':cout << "e)command was not given" << endl; return;
	default: cout << "f)404 illegal command not found" << endl; return;
	}
}