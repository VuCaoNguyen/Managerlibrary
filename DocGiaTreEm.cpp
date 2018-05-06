#include "DocGiaTreEm.h"

istream& operator >>(istream &is, DocGiaTreEm &x)
{
	//Goi lai phuong thuc nhap cua cha
	DocGia  *cha = static_cast<DocGia *>(&x);
	is >> *cha;

	cin.ignore();
	cout << "\nNhap ho ten nguoi dai dien: ";
	getline(is, x.HoTenNguoiDaiDien);

	return is;
}
ostream& operator <<(ostream &os, DocGiaTreEm x)
{
	//goi lai operator xuat cua cha
	DocGia cha = static_cast<DocGia>(x);
	os << cha;

	os << "\nHo ten nguoi dai dien: " << x.HoTenNguoiDaiDien;
	os << "\nTien Lam the: " << (size_t)x.TinhTienLamThe();
	return os;
}

float DocGiaTreEm::TinhTienLamThe()
{
	return 20000;
}
DocGiaTreEm::DocGiaTreEm()
{
}


DocGiaTreEm::~DocGiaTreEm()
{
}
