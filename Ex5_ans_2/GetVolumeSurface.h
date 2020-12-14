#pragma once
struct BOX {	//箱の定義
	double x;	//幅
	double y;	//高さ
	double z;	//奥行
	double volume;	//体積
	double surface; //表面積
	double packSize; //送れる宅急便サイズ

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

	//宅急便判定関数
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


