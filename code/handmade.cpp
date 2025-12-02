// handmade.cpp

#include <Windows.h>
 
int WinMain(HINSTANCE hInstance,
            HINSTANCE hPrevInstance,
            LPSTR     lpCmdLine,
            int       nShowCmd)
{

    MessageBoxA(0, "Are you sure?", "Confirm", MB_YESNO | MB_ICONQUESTION);

    return 0;
}
 