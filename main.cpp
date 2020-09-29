#include <windows.h>
#include <string>
#include <vector>
#include <memory>
#include <functional>
#include <atlbase.h>
#include <d2d1.h>
#include <dwrite.h>
#undef min
#undef max
#include <algorithm>

#pragma comment(lib,"dwrite.lib")
#pragma comment(lib,"d2d1.lib")


#pragma comment(linker,"\"/manifestdependency:type='win32' \
name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")

#pragma warning(disable:4100)


#include "colorpick.hpp"
float COLORPICK::ScaleDPI = 96.0f;

COLORPICK prx;
int __stdcall WinMain(HINSTANCE h, HINSTANCE, LPSTR, int)
{
	D2D1_COLOR_F c1 = {};// = { 1.0f,0,0,1.0f };
	prx.Show(0, c1);
}