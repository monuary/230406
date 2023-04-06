//������ �����ε��� ������ �ǵ��� ������� ���缭 ���� ���� ����. ������ �Ͼ �� �ֱ� �����̴�.
//�̹� ���ǵ� �����ڿ� ���ؼ��� ���Ӱ� ���ǰ� �Ұ����ϴ�.

//���� ������: 1�� �����ϰų� ����

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
	++pos;	//�����ε��� �����ڴ� �̷��� ����� �� �ִ�.
	pos.ShowPosition();
	--pos;
	pos.ShowPosition();

	++(++pos);	//��ȣ �����ڷ� �� �� ������ ����
	pos.ShowPosition();
	--(--pos);
	pos.ShowPosition();
	return 0;
}