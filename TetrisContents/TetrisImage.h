#pragma once
#include <EngineCore/Actor.h>

class TetrisImage : public AActor
{
public:
	void BeginPlay() override;
	
	void GetTetrisLocation(FIntPoint _Pos)
	{
		TetrisImage::GetActorLocation() = _Pos;
	}

};

