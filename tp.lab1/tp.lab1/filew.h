#include <iostream>
#include <fstream>
#include "io.h"
using namespace std;
class filew
{
private:
	char *fname1,*fname2;
protected:
	void fcreate();
	void fdelete();
	void fcopy();
	void frename();
	bool fsearch(std::string);

public:
	filew(){}
	~filew(){}
	void getproc(char *,char *,char*,filew *,int);
};
