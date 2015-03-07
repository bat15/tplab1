#define _CRT_SECURE_NO_WARNINGS 1
#include "argsParse.h"
using namespace std;

char argsParsing::getCMNDArg(char *procA)
{

	if (strcmp(procA, "GENERATE") == 0 || strcmp(procA, "Generate") == 0 || strcmp(procA, "generate") == 0 || strcmp(procA, "CREATE") == 0 || strcmp(procA, "create") == 0 || strcmp(procA, "Create") == 0){
		//cout << "SUCCESS_FIRST_ARG \t First argument is [" << procA << "]\t First letter is " << *procA << "\n";
		this->CMNDarg='G';
		return 'G';
	}
	if (strcmp(procA, "DEL") == 0 || strcmp(procA, "del") == 0 || strcmp(procA, "Del") == 0 || strcmp(procA, "DELETE") == 0 || strcmp(procA, "delete") == 0 || strcmp(procA, "Delete") == 0){
		//cout << "SUCCESS_FIRST_ARG \t First argument is [" << procA << "]\t First letter is " << *procA << "\n";
		this->CMNDarg = 'D';
		return 'D';
	}
	if (strcmp(procA, "RENAME") == 0 || strcmp(procA, "rename") == 0 || strcmp(procA, "Rename") == 0){
		//cout << "SUCCESS_FIRST_ARG \t First argument is [" << procA << "]\t First letter is " << *procA << "\n";
		this->CMNDarg = 'R';
		return 'R';
	}
	if (strcmp(procA, "COPY") == 0 || strcmp(procA, "copy") == 0 || strcmp(procA, "Copy") == 0){
		//cout << "SUCCESS_FIRST_ARG \t First argument is [" << procA << "]\t First letter is " << *procA << "\n";
		this->CMNDarg = 'C';
		return'C';
	}
	if (strcmp(procA, " ") == 0 || strcmp(procA, "") == 0){
		//cout << "EMPTY_ARGS \t First argument [" << procA << "]\t First letter is " << *procA << "\n";
		this->CMNDarg = 'N';
		return 'N';
	}
	if (strcmp(procA, "ISEXIST") == 0) {
		//cout << "SUCCESS_FIRST_ARG \t First argument [" << procA << "]\t First letter is " << *procA << "\n";
		this->CMNDarg = 'S';
		return 'S';
	}
	if (strcmp(procA, "ABZ") == 0) {
		this->CMNDarg = 'A';
		return 'A';
	}
	//cout << "FAULT_CMND_ARG \t First argument is [" << procA << "]\t First letter is " << *procA << "\n";
	this->CMNDarg = 'E';
	return 'E';
}
