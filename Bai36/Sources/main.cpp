#include <iostream>
#include <string>

#include "Vector.cpp"
#include "HocSinh.cpp"
#include "QuanLy.cpp"

using namespace std;


int main()
{
    int choose;
    QuanLy a;
    HocSinh c;
    int mhs;
    string ten;
    do
    {
        cout << "\n-------------------------------------------------------------------------------\n";
        cout << "1. doc danh sach hoc sinh tu file (pupil.txt) chua danh sach hoc sinh\n";
        cout << "2. them mot hoc sinh\n";
        cout << "3. cap nhat thong tin hoc sinh khi biet ma hoc sinh\n";
        cout << "4. xoa thi sinh boi ma hoc sinh\n";
        cout << "5. tim kiem thi sinh theo ten\n";
        cout << "6. sap xep thi sinh theo diem trung binh (gpa)\n";
        cout << "7. sap xep thi sinh theo ten\n";
        cout << "8. hien thi danh sach thi sinh\n";
        cout << "9. ghi danh sach thi sinh vao file pupil_output.txt\n";
        cout << "0. thoat chuong trinh\n";
        cout << "Lua chon cua ban la: ";
        cin >> choose;
        cin.ignore();
        switch (choose)
        {
        case 0:
            cout << "Thoat thanh cong!\n";
            break;
        case 1:
            a.docDanhSachHocSinh();
            break;
        case 2:
            cout << "Nhap thong tin hoc sinh muon them:\n";
            cin >> c;
            cin.ignore();
            a.themMotHocSinh(c);
            break;
        case 3:
            int mhs;
            cout << "Nhap ma hoc sinh: ";
            cin >> mhs;
            cin.ignore();
            a.capNhatThongTin(mhs);
            break;
        case 4:
            cout << "Nhap ma hoc sinh: ";
            cin >> mhs;
            cin.ignore();
            a.xoaHocSinh(mhs);
            break;
        case 5:
            cout << "Nhap ten thi sinh: ";
            getline(cin, ten);
            a.timKiem(ten);
            break;
        case 6:
            a.sapXepTheoDiemTb();
            break;
        case 7:
            a.sapXepTheoTen();
            break;
        case 8:
            a.hienDanhSachHocSinh();
            break;
        case 9:
            a.ghiDanhSachHocSinh();
            break;
        default:
            cout << "Vui long chon dung chuc nang menu!\n";
            break;
        }
    } while (choose != 0);
    
}
