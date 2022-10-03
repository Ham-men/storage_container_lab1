#pragma once
class furniture
{
private:
	char type;
	int razmer[3];
	char color;
	char material;
	int price;

public:
	furniture();
	furniture(char type2,
		int h, int w, int d,
		char color2,
		char material2,
		int price2);

};

