#ifndef H_Quan_Ly_H
#define H_Quan_Ly_H
#include <iostream>
#include <string>
#include <map>
using namespace std;
class Person
{

string hoten;
string ngaysinh;
map < string, string > person;
public:

map< string, string > Nhap();
// void Nhap();
void Xuat();
};

class CongNhan : public Person
{
private:
    /* data */
public:
};

class KySu :Person
{
private:
    /* data */
public:
};

class NhanVien : public Person
{
private:
    /* data */
public:
};

class QuanLyCanBo
{
private:
    /* data */
    map < string, string > CongNhan;

public:
    void Nhap( Person *person);
    void Timkiem( string hoten );
    void Xuat ( Person *Person );
};




















#endif