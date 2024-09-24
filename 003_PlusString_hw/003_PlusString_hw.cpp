#include <iostream>

int StringCount(const char* const _Str)
{
    int Count = 0;

    while (true)
    {
        char Ch = _Str[Count];
        if (0 == Ch)
        {
            break;
        }
        Count += 1;
    }

    return Count;
}
const int IntMaxCount = 10;
const int ParameterInter = 8;

void PlusString(char* _Buffer, int _BufferSize, const char* const _Value0, const char* const _Value1)
{
	while (_Value0[ChCount])
	{

		int Str0Count = StringCount(_Value0);
		int Str1Count = StringCount(_Value1);
		__int64 FAdd0 = reinterpret_cast<__int64>(&_Value0);
		__int64 FAdd1 = reinterpret_cast<__int64>(&_Value1);
		char Ch0 = _Value0[Str0Count];
		char Ch1 = _Value1[Str0Count];

		if (Ch == )
		{
			Ch = _Value0[Str0Count + 1];

			switch (Ch)
			{
			case 'd':
			{
				int* Ptr = reinterpret_cast<int*>(FAdd += ParameterInter);
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
			// 함수내부에서 자기자신을 다시 호출하는 방식을 사용해볼겁니다.
			// 이걸 재귀함수라고 부릅니다.
		}

		putchar(_Ptr[ChCount]);
		ChCount += 1;
	}
    
    
   
    for (int i = 0; i < Str0Count; i += 1)
    {
        
        _Buffer[i] = ;
        int* Ch0 = reinterpret_cast<int*>(FAdd0 += ParameterInter);
    }



}

int main()
{
    char Arr[100] = {};

    PlusString(Arr, 100, "AAAA", "BBBB");


}
