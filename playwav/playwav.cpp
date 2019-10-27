// playwav.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



#pragma comment(lib,"Winmm.lib")

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	if(argc <= 1)
	{
		cerr << "No input wav" << endl;
		return 1;
	}
	LPCTSTR pFile = argv[1];
	return !PlaySound(pFile, NULL, SND_FILENAME);
}

