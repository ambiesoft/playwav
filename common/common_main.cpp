#include <Windows.h>
#include <tchar.h>
#include <playsoundapi.h>

#include <functional>
#include <string>

#include "common_main.h"

int common_main(int argc, _TCHAR* argv[], std::function<void(std::wstring)> fnStandardOutput)
{
	if (argc <= 1)
	{
		fnStandardOutput(L"No input wav");
		return 1;
	}
	LPCTSTR pFile = argv[1];
	return TRUE == PlaySound(pFile, NULL, SND_FILENAME) ? 0 : 1;
}