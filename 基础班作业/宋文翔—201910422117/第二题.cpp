#include<iostream>
using namespace std;
int main()
{
	cout << "�����������ߣ�Ӣ�ߣ�:";

	double hight;
	cin >> hight;
	cout << "��Ӣ�磩:";
	double hight_1;
	cin >> hight_1;
	cout << "������������أ�����";
	double weight;
	cin >> weight;
	double hight_m = (hight * 12.0 + hight_1) * 0.0254;
	double weight_k = weight / 2.2;
	double BMI = weight_k / hight_m * hight_m;
	cout << "BIM=" << BMI << endl;
}