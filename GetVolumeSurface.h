#pragma once
struct BOX {	//���̒�`
	double x;	//��
	double y;	//����
	double z;	//���s
	double volume;	//�̐�
	double surface; //�\�ʐ�
	double packSize; //������}�փT�C�Y
}; 
void getVolumeSurface(BOX* box);
//��}�֔���֐�
bool isSendable( 
	BOX* box	//BOX�̃|�C���^
	);
