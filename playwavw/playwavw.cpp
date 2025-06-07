#include <Windows.h>
#include <Shlwapi.h>

#include <tchar.h>
#include <iostream>
#include <playsoundapi.h>
#include <string>
#include <functional>

#include "../common/common_main.h"

#pragma comment(lib,"Winmm.lib")
#pragma comment(lib,"Shlwapi.lib")

using namespace std;

#define APP_NAME L"playwavw"

void printStandardOutput(wstring output)
{

}
void printErrorOutput(wstring output)
{
    MessageBox(nullptr,
        output.c_str(),
        APP_NAME,
        MB_ICONERROR);
}
int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPWSTR    lpCmdLine,
    _In_ int       nCmdShow)
{
    int argc;
    unique_ptr<LPWSTR, std::function<HLOCAL(HLOCAL)>>
        arg(::CommandLineToArgvW(GetCommandLine(), &argc), std::function<HLOCAL(HLOCAL)>(::LocalFree));

    return common_main(argc, arg.get(), printErrorOutput);
}
