#include <iostream>
using namespace std;
#include "getVolumeSurface.h"

int main()
{
	const int BoxCount = 3;
	BOX boxes[BoxCount];
	for (int i = 0; i < BoxCount; i++) {
		double x, y, z;
		cout << "������́F";
		cin >> x;
		cout << "��������́F";
		cin >> y;
		cout << "���s����́F";
		cin >> z;
		boxes[i] = BOX(x, y, z);
		cout << "�̐ς�" << boxes[i].volume << endl;
		cout << "�\�ʐς�" << boxes[i].surface << endl;
		if (boxes[i].isSendable()) {
			cout << "��}�փT�C�Y��" << boxes[i].packSize << endl;
		}
		else {
			cout << "��}�ւł͑���܂���" << endl;
		}

	}
	return 0;
}