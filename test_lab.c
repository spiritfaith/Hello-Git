#include <stdio.h>
#include <math.h>

void fractionToDecimal(int numberator, int denominator)
{
	bool sign = (numberator ^ denominator) >= 0; //����ķ���?
	numberator = abs(numberator);
	denominator = abs(denominator);
	int integer = numberator / denominator; //����С����ǰ��
	int decimal[10];						//�洢С���������?
	bool num[10], loop = false;				//num��ʶ��Щ������ֹ���loop��ʶС�������Ƿ���ѭ��
	int p = -1, start;						//p�Ǵ洢С�������һ���±꣬start�ǿ�ʼѭ����λ��
	for (int i = 0; i < 10; i++)
		num[i] = false;
	numberator = numberator % denominator;
	while (numberator)
	{ //����ǲ��?��С��������������?��
		numberator *= 10;
		int tmp = numberator / denominator; //����С���ĵ�ǰλ����
		if (num[tmp] == true)
		{ //�ж��Ƿ���ֹ������ֹ�����С���?����������while
			loop = true;
			start = tmp;
			break;
		}
		num[tmp] = true;
		decimal[++p] = tmp;					   //��С����ǰλ
		numberator = numberator % denominator; //����ʣ������
	}
	if (!sign)
		cout << '-'; //���������?
	cout << integer;
	if (p != -1)
		cout << '.';
	{
		for (int i = 0; i <= p; i++)
		{
			if (loop && start == decimal[i])
				cout << '(';
			cout << decimal[i];
		}
		if (loop)
			cout << ')';
	}
	cout << endl;
}
int main()
{
	int n, m;
	while (cin >> n >> m)
		fractionToDecimal(n, m);
	return 0;
}