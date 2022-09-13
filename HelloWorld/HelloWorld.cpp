#include <windows.h>

int APIENTRY wWinMain(HINSTANCE hInstance,
       HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nCmdShow)
{
    int id;
    id = MessageBox(NULL, L"MessageBoxが判りましたか？", L"確認", MB_YESNO | MB_ICONEXCLAMATION);
    // id = MessageBox(NULL, L"MessageBoxが判りましたか？", L"確認", 52);
    switch (id)
    {
    case IDYES:
        MessageBox(NULL, L"すばらしい！", L"結果", MB_ICONINFORMATION);
        // MessageBox(NULL, L"すばらしい！", L"結果", 64);
        break;
    case IDNO:
        MessageBox(NULL, L"がんばりましょう！", L"結果", MB_ICONINFORMATION);
        // MessageBox(NULL, L"がんばりましょう！", L"結果", 64);
        break;
    }
    return 0;
}
