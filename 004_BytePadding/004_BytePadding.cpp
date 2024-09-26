// 004_BytePadding.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Player
{
public:
    __int64 int66;
    int int4;
    bool b0;
    short sh0;
    int int1;
    char ch1;
    bool b2;
    __int64 int123;
    short sh123;




};



int main()
{

    Player Yoom = Player();
    int Size = sizeof(Player);

    Player& Refa = Yoom;
    __int64 YoomRef = reinterpret_cast<__int64>(&Yoom);
    bool& RefB = Yoom.b0;
    __int64 Whatthis = reinterpret_cast<__int64>(&RefB);
    short& SHA = Yoom.sh0;
    __int64 SHRef = reinterpret_cast<__int64>(&SHA);

    int a = 0;

}
