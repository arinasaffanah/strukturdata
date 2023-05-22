#include <iostream>
using namespace std;

struct Karyawan
{
    char id[10];      // input
    string name;      // input
    string typeStaff; // input (1/2) (permanen & tdk permanen)
    string menikah;   // input (1/2)
    string position;  //
};

struct Gaji
{
    float tunjanganStatus; // menikah = 1.000.000; belum menikah = 0;
    float baseSalary;      // permanen 5jt; non-permanen 4.5jt
    float overtime;        // sejam 100rb
    float bonus;           // insentive bonus jika karyawan ada overtime
    float grossSalary;     // jumlahin base salary, status, insentive, dan bonus
    float tax;             // tax10% bpjs 20%
    float netSalary;       // akumulasi final net salary (gross salary - tax)
};

struct Karyawan karyawan;
struct Gaji gaji;

void inputData()
{
    cout << "Masukkan ID : ";
    cin >> karyawan.id;
    cout << "Masukkan Nama : ";
    cin >> karyawan.name;
    cout << "Masukkan Tipe Staff : \n1. Permanen \n2.Non-Permanen" << endl;
    cout << "Masukkan Tipe Staff : ";
    cin >> karyawan.typeStaff;
}