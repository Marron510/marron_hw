#include "FightUnit.h"
#include "StatusUnit.h"
#include <iostream>

int UFightUnit::GetDamage() const
{
	// minAtt ~ MaxAtt ������ ���ڰ� ���ϵǴ� �Լ��� ���弼��.
	return  ThisUnit->GetMinAtt() + (rand() % (ThisUnit->GetMaxAtt() - ThisUnit->GetMinAtt() + 1));
}

// ���� ������ �޴� �Լ�
void UFightUnit::DamageLogic(class UFightUnit& _Unit)
{
	UStatusUnit* Def = this->ThisUnit;
	UStatusUnit* Att = _Unit.ThisUnit;

	PrevDamage = _Unit.GetDamage();
	int CurHp = Def->GetHp() - PrevDamage;
	Def->SetHp(CurHp);
}

bool UFightUnit::IsDeath() const
{
	return 0 >= ThisUnit->GetHp();
}
