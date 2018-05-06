#include "CThuVien.h"

istream& operator >>(istream &is, CThuVien &x)
{
	int luachon;
	do
	{
		cout << "\n------------------Menu------------------";
		cout << "\n------------Nhap vao lua chon!------------";
		cout << "\n------------1.Nhap doc gia tre em.----------";
		cout << "\n--------------2. Nhap doc gia nguoi lon.----";
		cout << "\n---------------3. Thoat.-------------------";
		cout << "\n-----------------------------------------";
		do
		{
			cout << "\nNhap vao lua chon cua ban: ";
			is >> luachon;

			if (luachon < 1 || luachon >  3)
			{
				cout << "\nLua chon khong hop le xin kiem tra lai: ";
			}

		} while (luachon < 1 || luachon > 3);
		if (luachon == 1)
		{
			DocGiaTreEm a ;
			is >> a;
			x.ListDGTE.push_back(a);
		}
		else if (luachon == 2)
		{
			DocGiaNguoiLon y;
			bool Check;
			do
			{
				
				cin >> y;
				
				Check = true;
				int size = x.ListDGNL.size();
				for (int i = 0; i < size; i++)
				{
					if (x.ListDGNL[i].Getter_CMND() == y.Getter_CMND())
					{
						Check = false;
						break;
					}
				}
				if (Check == false)
				{
					cout << "\nSo CMND da trung xin nhan enter de nhap lai!";
				}
			} while (Check == false);
			x.ListDGNL.push_back(y);
		}

	} while (luachon != 3);
	return is;
}

ostream& operator <<(ostream &os, CThuVien x)
{
	os << "\n--------------------Danh sach doc gia Tre Em----------------------";
	int sizetreem = x.ListDGTE.size();
	for (int i = 0; i < sizetreem; i++)
	{
		os << "\n------------------------Doc Gia tre em thu: " << i + 1 << x.ListDGTE[i];
	}


	os << "\n--------------------Danh sach doc Gia Nguoi lon ----------------------";
	int sizeNguoilon = x.ListDGNL.size();
	for (int i = 0; i < sizeNguoilon; i++)
	{
		os << "\n------------------------Doc Gia nguoi lon thu: " << i + 1 << x.ListDGNL[i];
	}
	os << "\n\n===========>Tong so tien lam the: " << x.TinhTongTienLamThe();
	return os;
}

float CThuVien::TinhTongTienLamThe()
{
	float Tong = 0;
	int sizetreem = ListDGTE.size();
	for (int i = 0; i < sizetreem; i++)
	{
		Tong += ListDGTE[i].TinhTienLamThe();
	}

	int sizenguoilon = ListDGNL.size();
	for (int i = 0; i < sizenguoilon; i++)
	{
		Tong += ListDGNL[i].TinhTienLamThe();
	}
	return Tong;
}
CThuVien::CThuVien()
{
}


CThuVien::~CThuVien()
{
}
