// AlienFX Sample App.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "AlienFX_SDK.h"
#include <iostream>
int main()
{
	int isInit = AlienFX_SDK::Functions::AlienFXInitialize(AlienFX_SDK::vid);
	std::cout << "PID: " << isInit;
	if (isInit != -1)
	{
		//bool ready = AlienFX_SDK::Functions::IsDeviceReady();

		bool result = AlienFX_SDK::Functions::Reset(false);
		result = AlienFX_SDK::Functions::IsDeviceReady();
		std::cout << "\nReady: " << result; 
		AlienFX_SDK::Functions::SetColor(AlienFX_SDK::Index::AlienFX_Macro, 25, 134, 245);

		AlienFX_SDK::Functions::SetColor(AlienFX_SDK::Index::AlienFX_leftZone, 225, 134, 245);
		AlienFX_SDK::Functions::SetColor(AlienFX_SDK::Index::AlienFX_rightZone, 25, 114, 245);
		AlienFX_SDK::Functions::SetColor(AlienFX_SDK::Index::AlienFX_leftMiddleZone, 155, 134, 205);
		AlienFX_SDK::Functions::UpdateColors();
		Sleep(2000);
		AlienFX_SDK::Functions::AlienFXClose();
	}

	std::cin.get();
	return 0;
}

