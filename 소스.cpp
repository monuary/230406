//연산자 오버로딩은 본래의 의도에 어느정도 맞춰서 쓰는 것이 좋다. 착오가 일어날 수 있기 때문이다.
//이미 정의된 연산자에 대해서는 새롭게 정의가 불가능하다.

//단항 연산자: 1만 증가하거나 감소

#include<iostream>
using namespace std;

class Point
{
	int xpos, ypos;
public:
	Point(int x=0,int y=0):xpos(x),ypos(y){}
	void ShowPosition()const { cout << "[" << xpos << ", " << ypos << "]" << endl; }
	Point& operator++()
	{
		xpos += 1;
		ypos += 1;
		return*this;
	}
	Point& operator--()
	{
		xpos -= 1;
		ypos -= 1;
		return*this;
	}
};

int main()
{
	Point pos(1, 2);
	++pos;	//오버로딩된 연산자는 이렇게 사용할 수 있다.
	pos.ShowPosition();
	--pos;
	pos.ShowPosition();

	++(++pos);	//괄호 연산자로 두 번 연산을 수행
	pos.ShowPosition();
	--(--pos);
	pos.ShowPosition();
	return 0;
}