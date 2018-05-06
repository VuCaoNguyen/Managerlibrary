#include "CNgay.h"

istream& operator >> (istream &is, CNgay &x)
{
	cout << "\nNhap vao Ngay: ";
	is >> x.Ngay;
	cout << "\nNhap vao thang: ";
	is >> x.Thang;
	cout << "\nNhap vao Nam: ";
	is >> x.Nam;
		

	return is;
}
ostream& operator <<(ostream &os, CNgay x)
{
	os << "\nNgay " << x.Ngay << " thang " << x.Thang << " nam " << x.Nam << endl;
	return os;
}

CNgay::CNgay()
{
}


CNgay::~CNgay()
{
}
