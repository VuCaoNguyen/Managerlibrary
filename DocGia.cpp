#include "DocGia.h"

istream& operator >>(istream &is, DocGia &x)
{
	is.ignore();
	fflush(stdin);
	cout << "\nNhap vao ho ten: ";
	getline(is, x.HoTen);

	cout << "\nNhap vao ngay lap the: ";
	is >> x.NgayLapThe;

	do {
		cout << "\nNhap so thang co hieu luc: ";
		is >> x.SoThangHieuLuc;

		if (x.SoThangHieuLuc <= 0)
		{
			cout << "\nSo thang co hieu luc khong hop le xin kiem tra lai!";
		}
	} while (x.SoThangHieuLuc <= 0);

	return is;
}

ostream& operator << (ostream &os, DocGia x)
{
	os << "\nHo va ten: " << x.HoTen;
	os << "\nNgay lap: " << x.NgayLapThe;
	os << "\So Thang co hieu luc: " << x.SoThangHieuLuc;
	return  os;
}
DocGia::DocGia()
{
}


DocGia::~DocGia()
{
}
