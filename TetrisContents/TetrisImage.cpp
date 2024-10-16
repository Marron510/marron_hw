#include "TetrisImage.h"
#include <EngineCore/Renderer.h>
#include <conio.h>
#include "Block.h"

TetrisImage* TetrisImage::BackImage = nullptr;

void TetrisImage::BeginPlay()
{
	Super::BeginPlay();

	Render = CreateDefaultSubObject();
	Render->RenderImage.Create({ 3, 5 }, 'a');

	BackImage = this;
	
}

void TetrisImage::AddBlock(FIntPoint _Pos)
{
	Render->RenderImage.SetPixel(_Pos, '@');
}

void TetrisImage::Tick()
{
	
}

