#include <iostream>
#include <windows.h>
#include<stdio.h>

using namespace std;

bool Click = false;


static void Clicker() {

	while (true) {


		if (GetKeyState(VK_F12)) { 
			exit(0);
		}

		if (GetKeyState(VK_F8)) { Click = true; }
		if (GetKeyState(VK_F9)) { Click = false; }
		if (Click) {
			if (GetAsyncKeyState(VK_XBUTTON2)) {
				mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
				Sleep(31);
				mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
				Sleep(31);
			}

			if (GetAsyncKeyState(VK_XBUTTON1)) {
				mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
				Sleep(31);
				mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
				Sleep(31);
			}


		}
	}
}


int main()
{

	system("Title GhostClicker By Fontesie");

	system("color D");

	printf("[F4] == ON\n");
	printf("[F3] == OFF\n");
	printf("\n[MOUSE5] Left Click");
	printf("\n[MOUSE4] Right Click\n");
	printf("\n[F12] Destruct");

	Clicker();
	return 0;
}
