#include "DocGiaNguoiLon.h"

istream& operator >>(istream &is, DocGiaNguoiLon &x)
{
	//Goi operator cua DocGia
	DocGia *cha = static_cast<DocGia *>(&x);
	is >> *cha;

	is.ignore();
	cout << "\nNhap so CMND: ";
	getline(is, x.CMND);

	return is;
}
ostream& operator <<(ostream &os, DocGiaNguoiLon x)
{
	// goi operator xuat cua DocGia
	DocGia cha = static_cast<DocGia>(x);
	os << cha;

	os << "\nSo CMND: " << x.CMND;
	os << "\nTien Lam the: " << (size_t)x.TinhTienLamThe();
	return os;
}
float DocGiaNguoiLon::TinhTienLamThe()
{
	return SoThangHieuLuc * 10000;
}
void DocGiaNguoiLon::Setter_CMND(string cmnd)
{
	CMND = cmnd;
}
string DocGiaNguoiLon::Getter_CMND()
{
	return CMND;
}
DocGiaNguoiLon::DocGiaNguoiLon()
{
}


DocGiaNguoiLon::~DocGiaNguoiLon()
{
}
