// handmade.cpp

#include <Windows.h>

WNDPROC Wndproc;

LRESULT MainWindowCallback( HWND WindowHandle,
                            UINT Message,
                            WPARAM WParam,
                            LPARAM LParam)
{
    LRESULT Result = 0;

    switch(Message)
    {
        case WM_SIZE:
        {
            OutputDebugStringA("WM_SIZE\n");
        } break;

        case WM_DESTROY:
        {
            OutputDebugStringA("WM_DESTROY\n");
        } break;

        case WM_CLOSE:
        {
            OutputDebugStringA("WM_CLOSE\n");
        } break;

        case WM_ACTIVATEAPP:
        {
            OutputDebugStringA("WM_ACTIVATEAPP\n");
        } break;

        default:
        {
            // OutputDebugStringA("DEFAULT\n");
            Result = DefWindowProc(WindowHandle, Message, WParam, LParam);
        } break;

        return Result;
    }
}

int WinMain(HINSTANCE Instance,
            HINSTANCE PrevInstance,
            LPSTR     CommandLine,
            int       ShowCode)
{
    WNDCLASSEXA WindowClass = {};
    // TODO(paul): check if CS_HREDRAW or CS_VREDRAW still matter
    WindowClass.style = CS_OWNDC | CS_HREDRAW | CS_VREDRAW;
    WindowClass.lpfnWndProc = MainWindowCallback;
    WindowClass.hInstance = Instance;
    // WindowClass.hInstance = GetModuleHandle(0);
    // WindowClass.hIcon =  ;
    WindowClass.lpszClassName = "HandmadeHeroWindowClass";

    MessageBoxA(0, "Are you sure?", "Confirm", 
                    MB_YESNO 
                |   MB_ICONQUESTION 
                |   MB_DEFBUTTON1 
                );

    return 0;
}
 