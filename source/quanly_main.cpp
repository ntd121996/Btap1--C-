
#include "quanly.h"

void displayScreen()
{
    cout << "1.Nhap Thong Tin Moi"; cout << endl;
    cout << "2.Tim Kiem Theo Ho Ten"; cout << endl;
    cout << "3.Hien Thi Thong Tin Ve Danh Sach"; cout << endl;
    cout << "4.Thoat Chuong Trinh"; cout << endl;
}
void displayChoice()
{
    cout << "1.Nhap Thong Tin Cho Cong Nhan"; cout << endl;
    cout << "2.Nhap Thong Tin Cho Ky Su"; cout << endl;
    cout << "3.Nhap Thong Tin Cho Nhan Vien"; cout << endl;
    cout << "4.Thoat Chuong Trinh"; cout << endl;
}
void inputInfomation( string *hoten )
{
    cout << "Nhap Thong Tin Ho Ten: " << endl;
    cin.get();
    getline( cin, *hoten );
}
void ClearScreen()
{
    cout << string( 3, '\n');
}
int main( int argc, char* argv[])
{
    string uiSelect;
    uint Value;
    uint Choice;
    QuanLyCanBo Quanly;
    string hoten;
    bool exit = false;
    while (true)
    {
        displayScreen();
        while( true)
        {
            try
            {
                cin >> uiSelect;
                Value = stoi( uiSelect,nullptr,0 );
            }
            catch( std::exception &e)
            {
                // cout << e.what() << endl;
                // continue;
            }
            if ( Value < 1 || Value > 4 )
            {
                cout << " Vui Long Nhap Lai Gia Tri Tu 1 -> 4 " << endl;
            }
            else
            {
                cout << "Chon So " << Value << endl;
                break;
            }
        }
        
        switch ( Value )
        {
            case 1:
                ClearScreen();
                displayChoice();
                while( true)
                {
                    try
                    {
                        cin >> uiSelect;
                        Choice = stoi( uiSelect,nullptr,0 );
                    }
                    catch( std::exception &e)
                    {
                        // cout << e.what() << endl;
                        // continue;
                    }
                    if ( Choice < 1 || Choice > 4 )
                    {
                        cout << " Vui Long Nhap Lai Gia Tri Tu 1 -> 4 " << endl;
                    }
                    else
                    {
                        break;
                    }
                }
                if( Choice == 1)
                {
                    inputInfomation( &hoten );
                    CongNhan *CongNhanNew = new CongNhan( hoten );
                    Quanly.Nhap( hoten ,CongNhanNew );
                    delete CongNhanNew;
                }
                if( Choice == 2)
                {
                    inputInfomation( &hoten );
                    KySu *KySuNew = new KySu( hoten );
                    Quanly.Nhap( hoten,KySuNew );
                    delete KySuNew;
                }
                if( Choice == 3)
                {
                    inputInfomation( &hoten );
                    NhanVien *NhanVienNew = new NhanVien( hoten);
                    Quanly.Nhap( hoten,NhanVienNew );
                    delete NhanVienNew;
                }
                break;
            case 2:
                cout << "\nChon Tim Kiem: \n";
                inputInfomation( &hoten );
                Quanly.Timkiem( hoten );
                break;
            case 3:
                cin.get();
                Quanly.Xuat();
                break;
            
            case 4:
                exit = true;
                break;
            default:
                break;
        }
        if( exit ) break;
        cout << "\nEnter to continue ..." << endl;
        cin.get();
        ClearScreen();
        Choice = Value = 0;
    }
    cout << "Exit ...";
    return 0;
}