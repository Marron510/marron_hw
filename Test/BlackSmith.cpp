#include "BlackSmith.h"
#include "Player.h"
#include <BaseSystem/EngineDebug.h>
#include <conio.h>


bool BlackSmith::Rand()
{
	srand(time(nullptr));
	return rand() % 2;
}

void BlackSmith::WeaponUpgrade(class UPlayer& _Player)
{

	int EquipLev = _Player.GetEquipAtt();
	bool Value = Rand();
	if (15 == EquipLev)
	{
		printf_s("Ǯ���Ϸ�");
		_getch();

	}
	_Player.SetGold(_Player.GetGold() - (100 * EquipLev));

	


	if (true == Value && 5 > EquipLev)
	{
		EquipLev += 1;
		_Player.SetEquipAtt(EquipLev);
	}
	else if (true == Value && 5 <= EquipLev && 10 > EquipLev)
	{
		EquipLev += 1;
		_Player.SetEquipAtt(EquipLev);
	}

	else if (true == Value && 10 <= EquipLev && 15 > EquipLev)
	{
		EquipLev += 1;
		_Player.SetEquipAtt(EquipLev);
	}

	else if (false == Value && 5 <= EquipLev && 10 > EquipLev)
	{
		EquipLev -= 1;
		_Player.SetEquipAtt(EquipLev);
	}

	else if (false == Value && 10 <= EquipLev && 15 > EquipLev)
	{
		EquipLev = 0;
		_Player.SetEquipAtt(EquipLev);
	}
}


void BlackSmith::InPlayer(class UPlayer& _Player/*, int& Result*/)
{
	if (nullptr == ParentZone)
	{
		MSGASSERT("�θ����� ���õ��� �ʾҽ��ϴ�");
		return;
	}

	if (0 == _Player.GetGold())
	{
		_Player.SetGold(1000000);
	}
	

	
	while (true)
	{
		system("cls");
		_Player.StatusRender();
		std::cout << "1. ��ȭ\n";
		std::cout << "2. ������\n";
		int Select = _getch();
		
		switch (Select)
		{
		case '1':
			
			
			WeaponUpgrade(_Player);

			
			// Ȯ���� ���δ� 2���� 1
			// 1���� �𿩾� �Ѵ�. �÷��̾��� ��ȭ �ܰ� * 100
			// ���� ���� 5���� �����ϰ� �ִ�. �׷��� 500���� �￩�� �Ѵ�.
			// 1~5������ ���а� ����Ȯ���� ������.
			// �ٿ������ �ʴ´�.
			// 6~10������ �����ϸ� 1�� �ٿ�ȴ�.
			// 10~15�� 0���� �����ϸ� 0���� ��������.
			// 15�� �̻��̸� ��ȭ�� ���ϰ� �ؾ����Ѵ�.
			return;
		case '2':
			return;
		default:
			break;
		}
	}
}
