#include <iostream>
#include <Windows.h>
#include "resource.h"
#pragma comment(lib, "winmm.lib")
using namespace std;

int main()
{
    cout << "Press Enter to play The Great Strategy";
    cin.get();
    PlaySound(MAKEINTRESOURCE(IDR_WAVE1), NULL, SND_RESOURCE | SND_SYNC);
    cout << "\nDone!";
    cout << "\nPress Enter to quit";
    cin.get();
}