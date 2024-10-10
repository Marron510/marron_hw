#include "FightZone.h"
#include "Monster.h"
#include "Player.h"
#include <conio.h>
#include "Orc.h"
#include "Goblin.h"
#include <BaseSystem/EngineDebug.h>
#include "TextRpgCore.h"
#include "Orc.h"
#include "Goblin.h"
#include <iostream>

void UFightZone::CreateMonster()
{
	// FightZone������ ������ 1������ ���� 
	// �� �޸� �����Դϴ�.

	// ���� ���ε�
	// �ʿ��� ���� �ʿ��� ��ŭ�� �޸𸮸� �Ҵ��Ѵ�.
	// new ������ �Դϴ�.
	switch (MonsterType)
	{
	case Enums::MONSTERTYPE::GOBLIN:
	{
		// class AMonster* CurMonster;
		AGoblin* Ptr = new AGoblin();
		CurMonster = Ptr;
		break;
	}
	case Enums::MONSTERTYPE::ORC:
		CurMonster = new AOrc();
		break;
	default:
		break;
	}

	// FightZone�� ����� ����� 
	
	// ������� ��ũ������ ��������.
	// ��δ� ��������� �غ���Ѿ� �Ѵ�.
	// FightZone�� ���͸� ����� �׶� BeginPlay�� ���ش�.
	CurMonster->BeginPlay();
}

void UFightZone::DamageRender(UObject* _Att, UObject* _Def, int _Damage)
{
	std::cout << _Att->GetName() << "�� " << _Def->GetName() << "���� " << _Damage << "�� �������� �־����ϴ�" << std::endl;
}

void UFightZone::Fight(AActor& _Left, AActor& _Right)
{

	// ���⼭ �ο����?
	while (true)
	{
		system("cls");
		_Left.StatusRender();
		_Right.StatusRender();
		_getch();

		_Right.DamageLogic(_Left);
		DamageRender(&_Left, &_Right, _Right.GetDamageValue());
		_getch();

		if (_Right.IsDeath())
		{
			std::cout << _Left.GetName() << "�� �¸��߽��ϴ�." << std::endl;
			_Left.SetGold(_Left.GetGold() + _Right.GetGold());
			_getch();
			break;
		}

		_Left.DamageLogic(_Right);
		DamageRender(&_Right, &_Left, _Left.GetDamageValue());
		_getch();
		if (_Left.IsDeath())
		{
			std::cout << _Right.GetName() << "�� �¸��߽��ϴ�." << std::endl;
			_Right.SetGold(_Right.GetGold() + _Right.GetGold());
			_getch();
			break;
		}

	}

}

UZone* UFightZone::InPlayer()
{
	if (Enums::MONSTERTYPE::NONE == MonsterType)
	{
		MSGASSERT("���� Ÿ���� �������� ���� ������Դϴ�.");
		return nullptr;
	}

	InMsgPrint();
	_getch();

	// ���������� ����Ͷ�� ������ �� �Ȱ��ٰ� �����Ѵ�.
	// ���� �ֵ���. <= �̹���� ���� �����մϴ�.
	// ���� <= Ŭ����
	// <= �̹����� 
	
	// ����Ϳ��� ������ �ο���� ����.
	// ����� ���̵��� ���� N������ ���Ͱ� �����Ҽ� �ִ�.

	// �� ���� �ȵɱ��?
	// �Լ� ���ο�����
	// �ɹ����������� 2������ ���Ͱ� ���ÿ� ��üȭ �Ǵ� ���� ����� �Ѵ�.
	// ��üȭ �Ǵ� 
	
	CreateMonster();
	// ������ ���ܿ� ����� ���������� ����ϱⰡ ���������.
	APlayer& Player = TextRpgCore::GetPlayer();
	AMonster& Monster = *CurMonster;

	Fight(Player, Monster);

	// ����� �� ������
	// �����ϰ� �����ָ� �˴ϴ�.
	if (nullptr != CurMonster)
	{
		delete CurMonster;
		CurMonster = nullptr;
	}

	// �� ���ο��� � �޸𸮵��� �Ҵ�Ǿ���
	// ������ �ڵ带 �׳� ����ص� �ɰ̴ϴ�.
	// 4�� 15�б��� ������ ���ư��� �ڵ� �Ʒ��ʿ� �־��ּ���.
	
	return GetZone(0);
}