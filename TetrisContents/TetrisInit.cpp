#include "TetrisInit.h"
#include <EngineCore/ConsoleEngine.h>
#include <EngineCore/ConsoleWindow.h>

#include "Block.h"
#include "TetrisImage.h"


void TetrisInit::UserBeginPlay(ConsoleEngine* _MainEngine)
{
	// 시작을 합니다.
	_MainEngine->GetWindow()->SetScreenSize({6, 10});
	_MainEngine->SpawnActor<TetrisImage>();
	_MainEngine->SpawnActor<Block>();
}