#pragma once
#include <string>
class Screengrab
{
public:
    Screengrab();
    ~Screengrab();
    static int CaptureAnImage(HWND hWnd, std::wstring imageFilename);
    static int CaptureImagesOnInterval(HWND hWnd);
};

