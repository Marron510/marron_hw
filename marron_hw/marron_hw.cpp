// 000_StringCount.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

// 지금만들라고 하는 함수들은
// strlen

int NumberCount(int _Value)
{
	int Result = 0;
	while (_Value)
	{
		_Value /= 10;
		Result += 1;
	}
	return Result;
}

void NumberToString(char* Buffer, int BufferSize, int _Value)

{
	int Count = NumberCount(_Value);

	int Value = 3;
	char ch = Value + '0';

	int CurValue = _Value / 10;
}

const int IntMaxCount = 10;
const int ParameterInter = 8;

int MyPrintf(const char* const _Ptr, ...)
{
	
	__int64 FAdd = reinterpret_cast<__int64>(&_Ptr);

	int ChCount = 0;

	while (_Ptr[ChCount])
	{

		char Ch = _Ptr[ChCount];

		if (Ch == '%')
		{
			Ch = _Ptr[ChCount + 1];

			switch (Ch)
			{
			case 'd':
			{
				int* Ptr = reinterpret_cast<int*>
					(FAdd += ParameterInter);
				int ConvertValue = *Ptr;

				char Arr[IntMaxCount] = {};
				NumberToString(Arr, IntMaxCount, ConvertValue);


				MyPrintf("100");
				ChCount += 2;
				break;

			}
			default:
				break;
			}
			

		}

		putchar(_Ptr[ChCount]);
		ChCount += 1;

	}
		return ChCount;
}



int main()
{


	MyPrintf("Number : %d|n", 12321);
	
	int Value = 123;
	int MulValue = 1;


	
	//Arr[0] = Value / 100;
	//Arr[1] = Value / 10;
	//Arr[2] = Value / 1;
}
