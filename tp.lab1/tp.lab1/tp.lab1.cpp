#include "tp.lab1.h"
using namespace std;
int main(int argc,char *argv[4])
{
	filew *file=new filew;
	if (argc < 2) { cout << "a)Not enough arguments" << endl; return -1; }
	file->getproc(argv[1], argv[2], argv[3], file,argc);
	delete file;
	return 0;
}