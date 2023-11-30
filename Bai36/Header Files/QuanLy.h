#ifndef QUAN_LY_H
#define QUAN_LY_H

#include <iostream>
#include <string>

#include "HocSinh.h"

class QuanLy
{
private:
    MyVector<HocSinh> ds;
public:
    void docDanhSachHocSinh();
    void themMotHocSinh(HocSinh a);
    void capNhatThongTin(int maHocSinh);
    void xoaHocSinh(int maHocSinh);
    void timKiem(string tenHocSinh);
    void sapXepTheoDiemTb();
    void sapXepTheoTen();
    void hienDanhSachHocSinh();
    void ghiDanhSachHocSinh();
};

#endif