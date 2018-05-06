#pragma once
#include "DocGia.h"
//Class DocGiaTreEm Ke thua lai tu class DocGia
class DocGiaTreEm :public DocGia
{
private:
	string HoTenNguoiDaiDien;
public:
	friend	istream& operator >>(istream &, DocGiaTreEm &);
	friend ostream& operator <<(ostream &, DocGiaTreEm);
	float TinhTienLamThe();
	DocGiaTreEm();
	~DocGiaTreEm();
};

