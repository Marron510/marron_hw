#pragma once
class UConsoleWindow
{

public:
	UConsoleWindow();

	// �ʹ̴� ��ǻ�Ͱ� �ִٰ� ��������.
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

