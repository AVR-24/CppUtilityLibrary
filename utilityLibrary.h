#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include <vector>
#include <algorithm>

using namespace std;

void showCharVector(vector <char> received)
{
	
	for (auto const& i : received)
	{
		cout << i;
	}

}

void simulateMouseRightClickPressed()
{
	INPUT input;
	input.type = INPUT_MOUSE;
	input.mi.dx = 0;
	input.mi.dy = 0;
	input.mi.dwFlags = (MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP);
	input.mi.mouseData = 0;
	input.mi.dwExtraInfo = NULL;
	input.mi.time = 0;
	SendInput(1, &input, sizeof(INPUT));
}

void simulateEnterKeyPressed()
{
	INPUT input;
	input.type = INPUT_KEYBOARD;
	input.ki.wScan = 0; //Hardware scan code for key
	input.ki.time = 0;
	input.ki.dwExtraInfo = 0;
	
	input.ki.wVk = VK_RETURN; 
	input.ki.dwFlags = 0; // 0 for key press
	SendInput(1, &input, sizeof(INPUT));
	Sleep(5);
	input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
	SendInput(1, &input, sizeof(INPUT));
}

void simulateLettersFromAWord(string s)
{
	//Simulates the string introduced in the arguments of the function.
	//Programmed by: histones
	//Last update - 

	//Usage: 
	//The function receives a string, it will type it within the time of 5 seconds.
	//Maximum size of string: 1000 characters
	//WARNING: FUNCTION ONLY ACCEPTS UPPER CASE LETTERS AND DO NOT ACCEPT NUMBERS
	INPUT input;
	
	std::for_each(s.begin(), s.end(), [](char& c) {
		c = ::toupper(c);
		});
	
	input.type = INPUT_KEYBOARD;
	input.ki.wScan = 0; //Hardware scan code for key
	input.ki.time = 0;
	input.ki.dwExtraInfo = 0;

	vector <char> v1;

	for (int i = 0; i < s.length(); i++)
	{
		v1.push_back(s[i]);
	}

	for (int i = 0; i < s.length(); i++)
	{
		if (v1.at(i) == 'A')
		{
			input.ki.wVk = 0x41; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}

		if (v1.at(i) == 'B')
		{
			input.ki.wVk = 0x42; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}

		if (v1.at(i) == 'C')
		{
			input.ki.wVk = 0x43; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}

		if (v1.at(i) == 'D')
		{
			input.ki.wVk = 0x44; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}

		if (v1.at(i) == 'E')
		{
			input.ki.wVk = 0x45; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}

		if (v1.at(i) == 'F')
		{
			input.ki.wVk = 0x46; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}

		if (v1.at(i) == 'G')
		{
			input.ki.wVk = 0x47; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}

		if (v1.at(i) == 'H')
		{
			input.ki.wVk = 0x48; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}

		if (v1.at(i) == 'I')
		{
			input.ki.wVk = 0x49; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}
		
		if (v1.at(i) == 'J')
		{
			input.ki.wVk = 0x4A; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}

		if (v1.at(i) == 'K')
		{
			input.ki.wVk = 0x4B; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}

		if (v1.at(i) == 'L')
		{
			input.ki.wVk = 0x4C; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}

		if (v1.at(i) == 'M')
		{
			input.ki.wVk = 0x4D; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}

		if (v1.at(i) == 'N')
		{
			input.ki.wVk = 0x4E; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}

		if (v1.at(i) == 'O')
		{
			input.ki.wVk = 0x4F; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}

		if (v1.at(i) == 'P')
		{
			input.ki.wVk = 0x50; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}

		if (v1.at(i) == 'Q')
		{
			input.ki.wVk = 0x51; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}

		if (v1.at(i) == 'R')
		{
			input.ki.wVk = 0x52; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}

		if (v1.at(i) == 'S')
		{
			input.ki.wVk = 0x53; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}

		if (v1.at(i) == 'T')
		{
			input.ki.wVk = 0x54; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}

		if (v1.at(i) == 'U')
		{
			input.ki.wVk = 0x55; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}

		if (v1.at(i) == 'V')
		{
			input.ki.wVk = 0x56; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}

		if (v1.at(i) == 'W')
		{
			input.ki.wVk = 0x57; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}

		if (v1.at(i) == 'X')
		{
			input.ki.wVk = 0x58; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}

		if (v1.at(i) == 'Y')
		{
			input.ki.wVk = 0x59; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}

		if (v1.at(i) == 'Z')
		{
			input.ki.wVk = 0x5A; // virtual-key code for the "a" key
			input.ki.dwFlags = 0; // 0 for key press
			SendInput(1, &input, sizeof(INPUT));
			Sleep(5);
			input.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
			SendInput(1, &input, sizeof(INPUT));
		}

	}

}
