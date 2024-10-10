#pragma once

// 다른 클래스를 사용만 할겁니다.
class UFightUnit
{
public:
	void DamageLogic(UFightUnit& _Unit);

	inline void Init(class UStatusUnit* _ThisUnit)
	{
		ThisUnit = _ThisUnit;
	}

	virtual int GetDamage() const;

	inline int GetDamageValue() const 
	{
		return PrevDamage;
	}

	bool IsDeath() const;

private:
	class UStatusUnit* ThisUnit = nullptr;
	class UFightUnit* AttUnit = nullptr;
	int PrevDamage = 0;
};

