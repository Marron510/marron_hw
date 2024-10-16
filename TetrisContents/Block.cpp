#include "Block.h"
#include <EngineCore/Renderer.h>
#include <conio.h>
#include <TetrisContents/TetrisImage.h>


void Block::BeginPlay()
{
	Super::BeginPlay();

	Renderer* Render = CreateDefaultSubObject();
	Render->RenderImage.Create({ 1, 1 }, '@');

}



void Block::Tick()
{
	Super::Tick();

	int Value = _kbhit();
	if (Value != 0)
	{
		int Select = _getch();

		switch (Select)
		{
		case 'A':
		case 'a':
			AddActorLocation(FIntPoint::LEFT);
			break;
		case 'D':
		case 'd':
			AddActorLocation(FIntPoint::RIGHT);
			break;
		case 'W':
		case 'w':
			AddActorLocation(FIntPoint::UP);
			break;
		case 'S':
		case 's':
			
			AddActorLocation(FIntPoint::DOWN);
			if (4 == Super::GetActorLocation().Y)
			{
				TetrisImage::BackImage->AddBlock(Super::GetActorLocation());
				Super::SetActorLocation({0, 0});
			}
			if (Super::GetActorLocation().Y)
			{

			}
			
			
			break;
		default:
			break;
		}

	}




}

