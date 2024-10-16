#include "TetrisImage.h"
#include <EngineCore/Renderer.h>
#include <conio.h>
#include "Block.h"

TetrisImage* TetrisImage::BackImage = nullptr;
char TetrisImage::DefaultChar = '@';

void TetrisImage::BeginPlay()
{
	Super::BeginPlay();

	Render = CreateDefaultSubObject();
	Render->RenderImage.Create({ 3, 5 }, 'a');

	BackImage = this;
	
}

void TetrisImage::AddBlock(FIntPoint _Pos)
{
	if ('@' == Render->RenderImage.GetPixel(_Pos.X, _Pos.Y))
	{
		_Pos.Y = _Pos.Y - 1;
		Render->RenderImage.SetPixel(_Pos, '@');
	}
	else
	{
		Render->RenderImage.SetPixel(_Pos, '@');
	}
}

void TetrisImage::Tick()
{
	
}

void TetrisImage::GetBlockImage()
{
	
	
}
