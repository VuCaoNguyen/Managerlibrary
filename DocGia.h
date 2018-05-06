#pragma once
#include "CNgay.h"
#include <string>
//Lop Cha
class DocGia
{
protected:
	string HoTen;
	CNgay NgayLapThe;
	int SoThangHieuLuc; 
public:
	friend istream& operator >>(istream &, DocGia &);
	friend ostream& operator <<(ostream &, DocGia);
	DocGia();
	~DocGia();
};

