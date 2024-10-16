#include "Block.h"
#include <EngineCore/Renderer.h>
#include <conio.h>
#include <TetrisContents/TetrisImage.h>
#include <EngineCore/ConsoleEngine.h>
#include <EngineCore/ConsoleWindow.h>

void Block::BeginPlay()
{
	Super::BeginPlay();

	Renderer* Render = CreateDefaultSubObject();
	Render->RenderImage.Create({ 1, 1 }, 'X');

}

void Block::CheckBlock()
{

		/*if (ConsoleEngine::GetEngine().GetWindow()->GetBackBufferRef().GetImageSize().Y - 1 == Super::GetActorLocation().Y)
		{
			TetrisImage::BackImage->AddBlock(Super::GetActorLocation());
			Super::SetActorLocation({ 0, 0 });
		}*/
	if (ConsoleEngine::GetEngine().GetWindow()->GetBackBufferRef().GetImageSize().Y - 1 == Super::GetActorLocation().Y)
	{
		TetrisImage::BackImage->Render->RenderImage.Copy(Super::GetActorLocation(), Super::GetImageRenderer()->RenderImage);
		Super::SetActorLocation({ 0, 0 });
	}
	else if ('X' == ConsoleEngine::GetEngine().GetWindow()->GetBackBufferRef().GetPixel(Super::GetActorLocation().X, Super::GetActorLocation().Y + 1))
	{
		TetrisImage::BackImage->Render->RenderImage.Copy(Super::GetActorLocation(), Super::GetImageRenderer()->RenderImage);
		Super::SetActorLocation({ 0, 0 });
	}
		
}

void Block::Tick()
{
	Super::Tick();
	CheckBlock();
	AddActorLocation(FIntPoint::DOWN);
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
			break;
		default:
			break;
		}
		
		

	}
	



}

