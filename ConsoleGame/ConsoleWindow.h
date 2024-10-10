#pragma once
class UConsoleWindow
{

public:
	UConsoleWindow();

	// 초미니 컴퓨터가 있다고 생각하자.
	char Arr[10][20 + 1];

	// "****************"0
	// "****************"0
	// "****************"0
	// "****************"0
	// "****************"0
	// "****************"0
	// "****************"0

	void BeginPlay();

	void ScreenRender();

	void SetPixel(int _X, int _Y, char _Text);
};

