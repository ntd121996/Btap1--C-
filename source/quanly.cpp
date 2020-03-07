#include "quanly.h"

map< string, string >  Person::Nhap ()
// void Person::Nhap()
{
    cout << " Nhap ho ten: ";
    cin >> this->hoten;
    cout << " Nhap ngay sinh: ";
    cin >> this->ngaysinh;
    this->person.emplace( this->hoten, this->ngaysinh );
    return this->person;
}
void Person::Xuat()
{
    cout << " Thong Tin " << "\nTen: " << this->hoten \
     << "\nNgay sinh: " << this->ngaysinh << endl;
}
void QuanLyCanBo::Nhap( Person *person )
{
    map <string, string > temp;
    temp =  person->Nhap();
    this->CongNhan.insert( temp.begin(), temp.end());
} 
void QuanLyCanBo::Xuat( Person *person )
{
    // person->Xuat();
    for ( auto x : this->CongNhan )
    cout << "Ten: " << x.first << "\nNgaysinh: " << x.second;
}
void QuanLyCanBo::Timkiem( string hoten )
{
    
    map <string, string> :: iterator it = this->CongNhan.find( hoten );
    if( it == this->CongNhan.end() ) cout << "Invalid";
    cout << "\nTim Kiem\t\n" << it->first << it->second;
}

