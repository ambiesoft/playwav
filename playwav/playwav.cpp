// playwav.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <Windows.h>
#include <tchar.h>
#include <iostream>
#include <playsoundapi.h>
#include <string>

#include "../common/common_main.h"

#pragma comment(lib,"Winmm.lib")

using namespace std;

void printStandardOutput(wstring output)
{

}
void printErrorOutput(wstring output)
{
	wcerr << output << endl;
}
int _tmain(int argc, _TCHAR* argv[])
{
	return common_main(argc, argv, printErrorOutput);
}

