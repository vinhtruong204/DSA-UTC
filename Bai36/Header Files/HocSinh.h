#ifndef HOC_SINH_H
#define HOC_SINH_H

#include <iostream>
#include <string>

#include "Vector.h"

using namespace std;

class HocSinh
{
private:
    int maHocSinh, tuoi;
    string hoTen, gioiTinh, xepLoai;
    float diemToan, diemLy, diemHoa, diemTB;
public:
    void xetXepLoai();
    HocSinh(int maHocSinh = 0, string hoTen = "", string gioiTinh = "", int tuoi = 0, float diemToan = 0, float diemLy = 0, float diemHoa = 0);
    int getMaHocsinh();
    string getHoTen();
    string getTen();
    float getDiemTb();
    friend istream &operator>>(istream &inp, HocSinh &a);
    friend ostream &operator<<(ostream &out, HocSinh a);
    ~HocSinh();
};

#endif