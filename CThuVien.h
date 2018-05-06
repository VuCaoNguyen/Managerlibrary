#pragma once
//#ifndef Nguyendeptrai
//#define Nguyendeptrai
#include "DocGiaTreEm.h"
#include "DocGiaNguoiLon.h"
#include <vector>
class CThuVien
{
private:
	vector<DocGiaTreEm> ListDGTE;
	vector<DocGiaNguoiLon> ListDGNL;
public:
	friend istream& operator >>(istream &, CThuVien &);
	friend ostream& operator <<(ostream &, CThuVien);
	float TinhTongTienLamThe();

	CThuVien();
	~CThuVien();
};
//#endif Nguyendeptrai

