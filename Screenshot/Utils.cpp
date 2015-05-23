#include "stdafx.h"
#include "Windows.h"
#include "Utils.h"

Utils::Utils()
{
}


Utils::~Utils()
{
}

void Utils::log(std::wstring msg){
    OutputDebugString((LPCWSTR)msg.c_str());
    OutputDebugString(L"\n");
}
