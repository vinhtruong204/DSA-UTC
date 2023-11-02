#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <stack>
#include <sstream>

#include "../Header Files/QuanLy.h"

using namespace std;

void QuanLy::docDanhSachHocSinh()
{
    fstream file("../Datas/pupil.txt");

    if (file.fail())
    {
        cout << "Khong the mo file!\n";
        return;
    }
    file >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        HocSinh t;
        file >> t;
        ds.push_back(t);
    }
}

void QuanLy::themMotHocSinh(HocSinh a)
{
    ds.push_back(a);
}

void QuanLy::capNhatThongTin(int maHocSinh)
{
    for (HocSinh &x : ds)
    {
        if (x.getMaHocsinh() == maHocSinh)
        {
            cout << "Cap nhat thong tin cho hoc sinh " << x.getHoTen() << ":\n";
            cin >> x;
        }
    }
}

void QuanLy::xoaHocSinh(int maHocSinh)
{
    for (int i = 0; i < n; i++)
    {
        if (ds[i].getMaHocsinh() == maHocSinh)
        {
            ds.erase(ds.begin() + i);
        }
    }
}

void QuanLy::timKiem(string tenHocSinh)
{
    bool flag = false;
    int cnt = 0;
    for (auto x : ds)
    {
        if (x.getHoTen() == tenHocSinh)
        {
            flag = true;
            cnt++;
        }
    }

    if (flag)
    {
        cout << "Tim thay " << cnt << " hoc sinh co ho ten " << tenHocSinh << ":\n";
        for (auto x : ds)
        {
            if (x.getHoTen() == tenHocSinh)
                cout << x;
        }
    }
    else
    {
        cout << "404 - Not found!\n";
    }
}

void QuanLy::sapXepTheoDiemTb()
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ds[i].getDiemTb() < ds[j].getDiemTb())
            {
                HocSinh temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}

void QuanLy::sapXepTheoTen()
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ds[i].getTen() > ds[j].getTen())
            {
                HocSinh temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}

void QuanLy::hienDanhSachHocSinh()
{
    for (HocSinh x : ds)
    {
        cout << x;
    }
}

void QuanLy::ghiDanhSachHocSinh()
{
    fstream file("../Datas/pupil_output.txt");
    for (auto x : ds)
    {
        file << x;
    }
}
