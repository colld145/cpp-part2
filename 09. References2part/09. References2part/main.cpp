#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;

void SetPos(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void AnyLine(int symbol, int count) {
	for (int i = 0; i < count; i++)
	{
		cout << char(symbol);
	}
}

void TextLine1() {
	SetPos(2, 2); 
	cout << "No";
	cout << setw(3);
}

void TextLine2() {
	SetPos(2, 2);
	cout << "Item";
	cout << setw(3);
}

void VerticalLineText() {
	AnyLine(179, 1);
	TextLine1();
	AnyLine(179, 1);
	TextLine2();

}

void VerticalLine() {
	// vertical line
	AnyLine(179, 1);
	AnyLine(255, 5);
	AnyLine(179, 1);
	AnyLine(255, 10);
	AnyLine(179, 1);
	AnyLine(255, 30);
	AnyLine(179, 1);
	AnyLine(255, 12);
	AnyLine(179, 1);
	AnyLine(255, 15);
	AnyLine(179, 1);
}

void HorizontalLine() {
	AnyLine(195, 1);
	AnyLine(196, 5);
	AnyLine(197, 1);
	AnyLine(196, 10);
	AnyLine(197, 1);
	AnyLine(196, 30);
	AnyLine(197, 1);
	AnyLine(196, 12);
	AnyLine(197, 1);
	AnyLine(196, 15);
	AnyLine(180, 1);
}

void TopLine() {
	AnyLine(218, 1);
	AnyLine(196, 5);
	AnyLine(194, 1);
	AnyLine(196, 10);
	AnyLine(194, 1);
	AnyLine(196, 30);
	AnyLine(194, 1);
	AnyLine(196, 12);
	AnyLine(194, 1);
	AnyLine(196, 15);
	AnyLine(191, 1);
}

void BottomLine() {
	AnyLine(192, 1);
	AnyLine(196, 5);
	AnyLine(193, 1);
	AnyLine(196, 10);
	AnyLine(193, 1);
	AnyLine(196, 30);
	AnyLine(193, 1);
	AnyLine(196, 12);
	AnyLine(193, 1);
	AnyLine(196, 15);
	AnyLine(217, 1);
}

int main() {
	// top line
	TopLine();
	cout << endl;
	// vertical line
	
	VerticalLine();
	cout << endl;

	VerticalLineText();

	// vertical line
	cout << endl;
	VerticalLine();

	// horizontal line
	cout << endl;
	HorizontalLine();

	// part2

	// vertical line
	cout << endl;
	VerticalLine();

	// vertical line
	cout << endl;
	VerticalLine();

	// vertical line
	cout << endl;
	VerticalLine();

	// vertical line
	cout << endl;
	VerticalLine();

	// vertical line
	cout << endl;
	VerticalLine();

	// vertical line
	cout << endl;
	VerticalLine();

	// vertical line
	cout << endl;
	VerticalLine();

	// vertical line
	cout << endl;
	VerticalLine();

	// vertical line
	cout << endl;
	VerticalLine();

	// vertical line
	cout << endl;
	VerticalLine();

	// horizontal line
	cout << endl;
	HorizontalLine();

	// vertical line
	cout << endl;
	VerticalLine();


	// vertical line
	cout << endl;
	BottomLine();






	return 0;
}