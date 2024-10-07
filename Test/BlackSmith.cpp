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
		printf_s("풀강완료");
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
		MSGASSERT("부모존이 세팅되지 않았습니다");
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
		std::cout << "1. 강화\n";
		std::cout << "2. 나간다\n";
		int Select = _getch();
		
		switch (Select)
		{
		case '1':
			
			
			WeaponUpgrade(_Player);

			
			// 확률은 전부다 2분의 1
			// 1돈이 깎여야 한다. 플레이어의 강화 단계 * 100
			// 내가 현재 5강에 도전하고 있다. 그러면 500원씩 깍여야 한다.
			// 1~5까지는 실패가 실패확률은 있지만.
			// 다운되지는 않는다.
			// 6~10까지는 실패하면 1씩 다운된다.
			// 10~15는 0으로 실패하면 0으로 떨어진다.
			// 15강 이상이면 강화를 못하게 해야해한다.
			return;
		case '2':
			return;
		default:
			break;
		}
	}
}
