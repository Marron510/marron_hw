#include "Monster.h"
#include <iostream>
#include <BaseSystem/EngineDebug.h>
#include "GlobalValue.h"

void AMonster::BeginPlay()
{
	// ��
	AActor::BeginPlay();
	
}

void AMonster::SetRandomGold(int _Min, int _Max)
{
	if (_Min > _Max)
	{
		MSGASSERT("���� ����� Max�� Min���� �۽��ϴ�.");
	}

	// srand�� ���⼭ �Ұų�?
	int Gold = rand() % (_Max - _Min) + _Min;
	SetGold(Gold * GlobalValue::GoldRatio);
}