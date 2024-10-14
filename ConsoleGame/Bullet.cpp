#include "Bullet.h"
#include "Actor.h"

void Bullet::BeginPlay()
{
	Super::BeginPlay();
	RenderImage.Create({ 1, 1 }, 'I');
}

void Bullet::Tick()
{
	Super::Tick();
	Super::AddActorLocation(FIntPoint::UP);
	
}
