#include <iostream>

using namespace std;

class Point
{
private:
	int x;
	int y;

public:
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	Point(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
	}

	int GetX()
	{
		return x;
	}
	int GetY()
	{
		return y;
	}
	Point& Initialization(int x, int y)
	{
		this->x = x;
		this->y = y;

		return *this;
	}

	Point& operator =(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;

		return *this;
	}
	Point& operator ++()
	{
		this->x++;
		this->y++;

		return *this;
	}
	Point& operator --()
	{
		this->x--;
		this->y--;

		return *this;
	}
	Point& operator ++(int postfix)
	{
		Point temp(*this);

		this->x++;
		this->y++;

		return temp;
	}
	Point& operator --(int postfix)
	{
		Point temp(*this);

		this->x--;
		this->y--;

		return temp;
	}
	Point& operator +=(const Point& other)
	{
		this->x += other.x;
		this->y += other.y;

		return *this;
	}
	Point& operator -=(const Point& other)
	{
		this->x -= other.x;
		this->y -= other.y;

		return *this;
	}
	bool operator ==(const Point& other)
	{
		return this->x == other.x && this->y == other.y;
	}
	bool operator !=(const Point& other)
	{
		return !(this->x == other.x && this->y == other.y);
	}
	bool operator >=(const Point& other)
	{
		return this->x >= other.x && this->y >= other.y;
	}
	bool operator <=(const Point& other)
	{
		return this->x <= other.x && this->y <= other.y;
	}
	bool operator >(const Point& other)
	{
		return this->x > other.x && this->y > other.y;
	}
	bool operator <(const Point& other)
	{
		return this->x < other.x&& this->y < other.y;
	}

};



void Assignment();
void IncrementPrefix();
void DecrementPrefix();
void IncrementPostfix();
void DecrementPostfix();
void PlusEqual();
void MinusEqual();
void Equal();
void NotEqual();
void MoreOrEqual();
void LessOrEqual();
void More();
//void Less();


int main()
{
	setlocale(0, "");

	Assignment();
	IncrementPrefix();
	DecrementPrefix();
	IncrementPostfix();
	DecrementPostfix();
	PlusEqual();
	MinusEqual();
	Equal();
	NotEqual();
	MoreOrEqual();
	LessOrEqual();
	More();
	//Less();

	return 0;
}


void Assignment()
{
	Point a(3, 5);
	Point b;
	cout << "---------------------------------" << endl;
	cout << "Оператор =" << endl;
	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
	cout << "  b(" << b.GetX() << ";" << b.GetY() << ")" << endl << endl;
	cout << "  b = a" << endl << endl;
	b = a;
	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
	cout << "  b(" << b.GetX() << ";" << b.GetY() << ")" << endl;
	cout << "---------------------------------" << endl;

}
void IncrementPrefix()
{
	Point a(3, 5);
	Point b;
	cout << "---------------------------------" << endl;
	cout << "Оператор ++ (префиксной формы)" << endl;
	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
	cout << "  b(" << b.GetX() << ";" << b.GetY() << ")" << endl << endl;
	cout << "  b = ++a" << endl << endl;
	b = ++a;
	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
	cout << "  b(" << b.GetX() << ";" << b.GetY() << ")" << endl;
	cout << "---------------------------------" << endl;
}
void DecrementPrefix()
{
	Point a(3, 5);
	Point b;
	cout << "---------------------------------" << endl;
	cout << "Оператор -- (префиксной формы)" << endl;
	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
	cout << "  b(" << b.GetX() << ";" << b.GetY() << ")" << endl << endl;
	cout << "  b = --a" << endl << endl;
	b = --a;
	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
	cout << "  b(" << b.GetX() << ";" << b.GetY() << ")" << endl;
	cout << "---------------------------------" << endl;
}
void IncrementPostfix()
{
	Point a(3, 5);
	Point b;
	cout << "---------------------------------" << endl;
	cout << "Оператор ++ (постофиксной формы)" << endl;
	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
	cout << "  b(" << b.GetX() << ";" << b.GetY() << ")" << endl << endl;
	cout << "  b = a++" << endl << endl;
	b = a++;
	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
	cout << "  b(" << b.GetX() << ";" << b.GetY() << ")" << endl;
	cout << "---------------------------------" << endl;
}
void DecrementPostfix()
{
	Point a(3, 5);
	Point b;
	cout << "---------------------------------" << endl;
	cout << "Оператор -- (постофиксной формы)" << endl;
	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
	cout << "  b(" << b.GetX() << ";" << b.GetY() << ")" << endl << endl;
	cout << "  b = a--" << endl << endl;
	b = a--;
	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
	cout << "  b(" << b.GetX() << ";" << b.GetY() << ")" << endl;
	cout << "---------------------------------" << endl;
}
void PlusEqual()
{
	Point a(3, 5);
	Point b(2, 1);
	cout << "---------------------------------" << endl;
	cout << "Оператор +=" << endl;
	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
	cout << "  b(" << b.GetX() << ";" << b.GetY() << ")" << endl << endl;
	cout << "  a += b" << endl << endl;
	a += b;
	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
	cout << "---------------------------------" << endl;
}
void MinusEqual()
{
	Point a(3, 5);
	Point b(2, 1);
	cout << "---------------------------------" << endl;
	cout << "Оператор -=" << endl;
	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
	cout << "  b(" << b.GetX() << ";" << b.GetY() << ")" << endl << endl;
	cout << "  a -= b" << endl << endl;
	a -= b;
	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
	cout << "---------------------------------" << endl;
}
void Equal()
{
	Point a(3, 5);
	Point b(7, 1);
	cout << "---------------------------------" << endl;
	cout << "Оператор ==" << endl;
	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
	cout << "  b(" << b.GetX() << ";" << b.GetY() << ")" << endl;
	cout << "  a == b  // ";
	if (a == b)
	{
		cout << "true" << endl << endl;
	}
	else
	{
		cout << "false" << endl << endl;
	}

	a.Initialization(5, 3);
	b.Initialization(5, 3);
	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
	cout << "  b(" << b.GetX() << ";" << b.GetY() << ")" << endl;
	cout << "  a == b  // ";
	if (a == b)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	cout << "---------------------------------" << endl;
}
void NotEqual()
{
	Point a(3, 5);
	Point b(7, 1);
	cout << "---------------------------------" << endl;
	cout << "Оператор !=" << endl;
	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
	cout << "  b(" << b.GetX() << ";" << b.GetY() << ")" << endl;
	cout << "  a != b  // ";
	if (a != b)
	{
		cout << "true" << endl << endl;
	}
	else
	{
		cout << "false" << endl << endl;
	}

	a.Initialization(5, 3);
	b.Initialization(5, 3);
	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
	cout << "  b(" << b.GetX() << ";" << b.GetY() << ")" << endl;
	cout << "  a != b  // ";
	if (a != b)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	cout << "---------------------------------" << endl;
}
void MoreOrEqual()
{
	Point a(3, 7);
	Point b(3, 5);
	cout << "---------------------------------" << endl;
	cout << "Оператор >=" << endl;
	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
	cout << "  b(" << b.GetX() << ";" << b.GetY() << ")" << endl;
	cout << "  a >= b  // ";
	if (a >= b)
	{
		cout << "true" << endl << endl;
	}
	else
	{
		cout << "false" << endl << endl;
	}

	a.Initialization(1, 3);
	b.Initialization(5, 8);
	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
	cout << "  b(" << b.GetX() << ";" << b.GetY() << ")" << endl;
	cout << "  a >= b  // ";
	if (a >= b)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	cout << "---------------------------------" << endl;
}
void LessOrEqual()
{
	Point a(3, 7);
	Point b(3, 5);
	cout << "---------------------------------" << endl;
	cout << "Оператор <=" << endl;
	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
	cout << "  b(" << b.GetX() << ";" << b.GetY() << ")" << endl;
	cout << "  a <= b  // ";
	if (a <= b)
	{
		cout << "true" << endl << endl;
	}
	else
	{
		cout << "false" << endl << endl;
	}

	a.Initialization(1, 3);
	b.Initialization(5, 8);
	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
	cout << "  b(" << b.GetX() << ";" << b.GetY() << ")" << endl;
	cout << "  a <= b  // ";
	if (a <= b)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	cout << "---------------------------------" << endl;
}
void More()
{
	Point a(3, 7);
	Point b(3, 5);
	cout << "---------------------------------" << endl;
	cout << "Оператор >" << endl;
	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
	cout << "  b(" << b.GetX() << ";" << b.GetY() << ")" << endl;
	cout << "  a > b  // ";
	if (a > b)
	{
		cout << "true" << endl << endl;
	}
	else
	{
		cout << "false" << endl << endl;
	}

	a.Initialization(8, 9);
	b.Initialization(3, 5);
	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
	cout << "  b(" << b.GetX() << ";" << b.GetY() << ")" << endl;
	cout << "  a > b  // ";
	if (a > b)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	cout << "---------------------------------" << endl;
}
//void Less()
//{
//	Point a(3, 7);
//	Point b(3, 5);
//	cout << "---------------------------------" << endl;
//	cout << "Оператор <" << endl;
//	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
//	cout << "  b(" << b.GetX() << ";" << b.GetY() << ")" << endl;
//	cout << "  a < b  // ";
//	if (a < b)
//	{
//		cout << "true" << endl << endl;
//	}
//	else
//	{
//		cout << "false" << endl << endl;
//	}
//
//	a.Initialization(1, 3);
//	b.Initialization(5, 8);
//	cout << "  a(" << a.GetX() << ";" << a.GetY() << ")" << endl;
//	cout << "  b(" << b.GetX() << ";" << b.GetY() << ")" << endl;
//	cout << "  a < b  // ";
//	if (a < b)
//	{
//		cout << "true" << endl;
//	}
//	else
//	{
//		cout << "false" << endl;
//	}
//	cout << "---------------------------------" << endl;
//}