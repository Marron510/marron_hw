#pragma once
#include "Zone.h"

class BlackSmith
{
public:
	// �ȳ־��ָ� ������ �ȵ�.
	//BlackSmith(UZone& _ParentZone)
	//	: ParentZone(_ParentZone)
	//{

	//}

	void TryUpgrade(class UPlayer& _Player);

	void InPlayer();

	inline void SetParent(class UZone* _ParentZone)
	{
		ParentZone = _ParentZone;
	}

private:
	// class UZone& ParentZone;

	class UZone* ParentZone = nullptr;
};

