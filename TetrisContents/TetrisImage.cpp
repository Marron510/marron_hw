#include "TetrisImage.h"
#include <EngineCore/Renderer.h>
#include <conio.h>


void TetrisImage::BeginPlay()
{
	Super::BeginPlay();

	Renderer* Render = CreateDefaultSubObject();
	Render->RenderImage.Create({ 3, 5 }, 'a');

}

