#pragma once
struct BOX {	//���̒�`
	double x;	//��
	double y;	//����
	double z;	//���s
	double volume;	//�̐�
	double surface; //�\�ʐ�
	double packSize; //������}�փT�C�Y

	BOX(double inX = 0, double inY = 0, double inZ = 0) {
		x = inX;
		y = inY;
		z = inZ;
		bool p = isSendable();
		getVolumeSurface();
	}
	void getVolumeSurface() {
		volume = x * y * z;
		surface = 2 * (x * y + x * z + y * z);
	}

	//��}�֔���֐�
	bool isSendable()
	{
		bool sendable = false;
		packSize = -1;
		double length = x + y + z;
		const int packs = 5;
		double packSizeList[packs] = { 60,80,100,120,160 };

		for (int i = 0; i < packs; i++) {
			if (length <= packSizeList[i]) {
				sendable = true;
				packSize = packSizeList[i];
				break;
			}
		}
		return sendable;
	}
}; 


