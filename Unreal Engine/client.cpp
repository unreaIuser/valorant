#include <thread>
#include "stdafx.h"
#include "game.h"
#include "driver.h"

int main() {
	system("cls");
	printf("Press F2 once Valorant Launched! [BETA]");

	while (true)
	{

		if (GetAsyncKeyState(VK_F2))
		{
			break;
			Beep(300, 300);
		}
	}

	if (mem::find_driver()) {
		std::cout << "\nfound driver you monkey \n";
	}
	else {
		std::cout << "\ndriver not found you monkey Nigga \n";
	}
	mem::find_process(L"VALORANT-Win64-Shipping.exe");


	virtualaddy = mem::get_guarded_region(); // our main virtual addres needed to make any guarded calculation getting it 1 time per game launch is enough
	printf(("virtualaddy: %p.\n"), virtualaddy);

	
	std::cout << "\nhandle: " << (uintptr_t)mem::driver_handle;
	game::start_cheat();
	Sleep(-1);
	return NULL;
}