#pragma once
#include "Actor.h"

// ��� �߻����� ��������?
// ������ ���� �߻����� �������� ��üȭ �Ҽ� ����.
class AMonster : public AActor
{
public:
	// �����Լ�
	void BeginPlay() override;

	void SetRandomGold(int _Min, int _Max);

};

