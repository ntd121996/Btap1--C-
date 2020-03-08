#ifndef H_Quan_Ly_H
#define H_Quan_Ly_H
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
class CanBo
{
protected :
    string hoten;
    string chucvu;
public:
CanBo ( string hoten, string chucvu );
virtual void Xuat();
};

class CongNhan : public CanBo
{
private:
public: 
CongNhan( string hoten );
};

class KySu :public CanBo
{
private:

public:
KySu( string hoten );
};

class NhanVien : public CanBo
{
private:

public:
NhanVien( string hoten );

};

class QuanLyCanBo
{
private:
    map <string,CanBo> DanhSach;
public:
    QuanLyCanBo();
    void Nhap( string hoten ,CanBo *canbo );
    void Timkiem( string hoten );
    void Xuat();
};



#endif