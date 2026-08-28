#include "gameFramework/GameApplication.h"
#include "Level/GameLevelOne.h"
#include "Level/MainMenuLevel.h"
#include "framework/AssetManager.h"
#include "config.h"

ly::Application* GetApplication() // Scope Resolution Operator ::
{
	return new ly::GameApplication{};
}

namespace ly
{
	GameApplication::GameApplication()
		: Application{600, 880, "Light Years" , sf::Style::Titlebar | sf::Style::Close }
	{
		AssetManager::Get().SetAssetRootDirectory(GetResourceDir());
		weak<MainMenuLevel> newWorld = LoadWorld<MainMenuLevel>();
	}
}

