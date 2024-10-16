#include "TetrisImage.h"
#include <EngineCore/Renderer.h>
#include <conio.h>
#include "Block.h"

TetrisImage* TetrisImage::BackImage = nullptr;

void TetrisImage::BeginPlay()
{
	Super::BeginPlay();

	Render = CreateDefaultSubObject();
	Render->RenderImage.Create({ 6, 10 }, 'O');

	BackImage = this;
	
}

void TetrisImage::AddBlock(FIntPoint _Pos)
{
	Render->RenderImage.SetPixel(_Pos, 'X');

}

void TetrisImage::Tick()
{
	
}

