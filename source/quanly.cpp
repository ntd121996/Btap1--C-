#include "quanly.h"

// map< string, string >  CanBo::Nhap ()

KySu::KySu( string hoten ) : CanBo ( hoten, "Ky Su" ){}
CongNhan::CongNhan( string hoten ) : CanBo ( hoten, "Cong Nhan" ){}
NhanVien::NhanVien( string hoten ) : CanBo ( hoten, "Nhan Vien" ){}
CanBo::CanBo ( string hoten, string chucvu )
{
    this->hoten = hoten;
    this->chucvu = chucvu;
}
CanBo::~CanBo()
{

}
QuanLyCanBo::QuanLyCanBo()
{
}
void CanBo::Xuat()
{
    cout <<" Ten: "<< this->hoten << "\t---Chuc Vu: " << this->chucvu << endl;
}
void QuanLyCanBo::Nhap( string hoten, CanBo *canbo )
{
    this->DanhSach.insert( pair<string,CanBo>( hoten,*canbo ));
} 
void QuanLyCanBo::Xuat()
{
     map <string, CanBo> :: iterator it;
    for ( it = this->DanhSach.begin() ; it!= this->DanhSach.end(); it++)
    it->second.Xuat();
}
void QuanLyCanBo::Timkiem( string hoten )
{
    map <string, CanBo> :: iterator it = this->DanhSach.find( hoten );
    if( it == this->DanhSach.end())
    {
        cout << "Invalid";
    }
    else
    {
        it->second.Xuat();
    }
}

