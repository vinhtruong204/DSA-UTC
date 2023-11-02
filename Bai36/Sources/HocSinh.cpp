#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <stack>

#include "../Header Files/HocSinh.h"

using namespace std;

HocSinh::HocSinh(int maHocSinh, string hoTen, string gioiTinh, int tuoi, float diemToan, float diemLy, float diemHoa)
{
  this->maHocSinh = maHocSinh;
  this->hoTen = hoTen;
  this->gioiTinh = gioiTinh;
  this->tuoi = tuoi;
  this->diemToan = diemToan;
  this->diemLy = diemLy;
  this->diemHoa = diemHoa;
  this->diemTB = (diemToan + diemLy + diemHoa) / 3;
  this->xetXepLoai();
}

void HocSinh::xetXepLoai()
{
  if (diemTB >= 8.0f && diemTB <= 10.0f)
  {
    xepLoai = "Gioi";
  }
  else if (diemTB >= 7.0f && diemTB <= 8.0f)
  {
    xepLoai = "Kha";
  }
  else if (diemTB >= 5.0f && diemTB <= 7.0f)
  {
    xepLoai = "Trung binh";
  }
  else if (diemTB >= 0.0f && diemTB <= 5.0f)
  {
    xepLoai = "Yeu";
  }
}

HocSinh::~HocSinh()
{
  this->maHocSinh = 0;
  this->hoTen = "";
  this->gioiTinh = "";
  this->tuoi = 0;
  this->diemToan = 0;
  this->diemLy = 0;
  this->diemHoa = 0;
  this->diemTB = 0;
  this->xepLoai = "";
}

string HocSinh::getHoTen()
{
  return this->hoTen;
}

string HocSinh::getTen()
{
  stack<string> x;
  stringstream ss(hoTen);
  string temp;
  while (ss >> temp)
  {
    x.push(temp);
  }
  return x.top();
}

int HocSinh::getMaHocsinh()
{
  return this->maHocSinh;
}

float HocSinh::getDiemTb()
{
  return this->diemTB;
}

istream &operator>>(istream &inp, HocSinh &a)
{
  cout << "\nMa hoc sinh: ";
  inp >> a.maHocSinh;
  inp.ignore();
  cout << "Ho ten: ";
  getline(inp, a.hoTen);
  cout << "Gioi tinh: ";
  getline(inp, a.gioiTinh);
  cout << "Tuoi: ";
  inp >> a.tuoi;
  cout << "Diem toan: ";
  inp >> a.diemToan;
  cout << "Diem ly: ";
  inp >> a.diemLy;
  cout << "Diem hoa: \n";
  inp >> a.diemHoa;
  inp.ignore();
  a.diemTB = (a.diemHoa + a.diemLy + a.diemToan) / 3;
  a.xetXepLoai();
  return inp;
}

ostream &operator<<(ostream &out, HocSinh a)
{
  out << fixed << setprecision(1) << left << setw(10) << a.maHocSinh << "\t|" << setw(25) << a.hoTen << "\t|" << setw(10) << a.gioiTinh << "\t|" << setw(5) << a.tuoi << "\t|" << setw(5) << a.diemToan << "\t|" << setw(5) << a.diemLy << "\t|" << setw(5) << a.diemHoa << "\t|" << setw(5) << a.diemTB << "\t|" << setw(10) << a.xepLoai << "\t\n";
  return out;
}