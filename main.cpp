#include <iostream>
#include <Windows.h>
#include <vector>
#include <array>
#include <set>
#include <cstdlib>
#include <ctime>
#include <string>
#include "resource.h"

HINSTANCE g_hInst;
LPCTSTR lpszClass = L"Window Class Name";
LPCTSTR lpszWindowName = L"스트라이크 랭크 관리 시스템";

LRESULT CALLBACK WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpszCmdParam, int nCmdShow)
{

    // 콘솔 창에 출력하기 위해 콘솔 핸들을 가져옵니다.

    HWND hWnd;
    MSG Message;
    WNDCLASSEX WndClass;
    g_hInst = hInstance;
    WndClass.cbSize = sizeof(WndClass);
    WndClass.style = CS_HREDRAW | CS_VREDRAW;
    WndClass.lpfnWndProc = (WNDPROC)WndProc;
    WndClass.cbClsExtra = 0;
    WndClass.cbWndExtra = 0;
    WndClass.hInstance = hInstance;
    WndClass.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_ICON1));
    WndClass.hCursor = LoadCursor(NULL, IDC_ARROW);
    WndClass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
    WndClass.lpszMenuName = NULL;//MAKEINTRESOURCE(IDR_MENU1);
    WndClass.lpszClassName = lpszClass;
    WndClass.hIconSm = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_ICON1));
    RegisterClassEx(&WndClass);
    hWnd = CreateWindow(lpszClass, lpszWindowName, WS_OVERLAPPEDWINDOW,
        0, 0, 1016, 1038, NULL, (HMENU)NULL, hInstance, NULL);
    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);
    while (GetMessage(&Message, 0, 0, 0)) {
        TranslateMessage(&Message);
        DispatchMessage(&Message);
    }
    return Message.wParam;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam)
{
    PAINTSTRUCT ps;
    HDC hDC;
    static HWND hwndScrollBar;

    switch (iMessage) {
    case WM_CREATE:
        hwndScrollBar = CreateWindow(
            TEXT("EDIT"),
            TEXT(""),
            WS_TABSTOP | WS_VISIBLE | WS_CHILD | WS_BORDER | ES_LEFT, // 스타일 (SBS_VERT는 세로 스크롤바)
            100, 100, 200, 400,
            hWnd,
            (HMENU)2,
            GetModuleHandle(NULL),
            NULL
        );
        break;
    case WM_CHAR:

        break;
    case WM_LBUTTONDOWN:

        break;
    case WM_RBUTTONDOWN:

        break;
    case WM_MOUSEMOVE:

        break;
    case WM_LBUTTONUP:

        break;
    case WM_COMMAND:
        break;

    case WM_DESTROY:

        PostQuitMessage(0);
        return 0;
    }
    return (DefWindowProc(hWnd, iMessage, wParam, lParam));
}