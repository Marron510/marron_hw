#pragma once
#include <EngineCore/Actor.h>
#include <EngineCore/ConsoleImage.h>
class TetrisImage : public AActor
{
public:
	void BeginPlay() override;
	void Tick() override;
	void GetBlockImage();

	void AddBlock(FIntPoint _Pos);

	static TetrisImage* BackImage;

	Renderer* Render = nullptr;
};

