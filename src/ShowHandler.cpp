#include "showhandler.h"
#include "player.h"
#include "scaleform/statsmenu.h"

ShowHandler* ShowHandler::GetSingleton() {
	static ShowHandler singleton;
	return std::addressof(singleton);
}

void ShowHandler::ShowWindow() {
	logger::trace("Gather Value and Show Window");
	Locker locker(_lock);
	//Player* playerinfo = Player::GetSingleton();
	//ValueMap playerValues = playerinfo->getValues();
	//ShowHandler::Show(playerinfo->getValues());
	ShowHandler::Show();
	
}

void ShowHandler::Show() {

	RE::DebugNotification("Showing menu and information now.");

	Scaleform::StatsMenu::Open();
}

ShowHandler::ShowHandler() :
	_lock()
{}