#include <iostream>
#include <iomanip>
using namespace std;

struct Karyawan
{
    char id[10];      // input
    char name[20];    // input
    string typeStaff; // input (1/2) (permanen & tdk permanen)
    string status;    // input (1/2)
    float statusAkhir;
    string position;
};

struct Gaji
{
    Karyawan karyawan;
    float tunjanganStatus; // menikah = 1.000.000; belum menikah = 0;
    float baseSalary;      // permanen 5jt; non-permanen 4.5jt
    int lembur;
    float overtime; // sejam 100rb
    float intensitive;
    float bonus;       // insentive bonus jika karyawan ada overtime
    float grossSalary; // jumlahin base salary, status, insentive, dan bonus
    float tax;         // tax10% bpjs 20%
    float bpjs;
    float netSalary; // akumulasi final net salary (gross salary - tax)
};

struct Data
{
    Gaji person;
};

struct Data data[5];
struct Data *p = data;
int jumlah_data = 5;

void inputData()
{
    system("clear");
    for (int i = 0; i < jumlah_data; i++)
    {
        cout << "=========================== INPUT DATA " << i + 1 << " ==========================" << endl;
        cout << "Masukkan ID \t\t\t: ";
        cin >> (p + i)->person.karyawan.id;
        cout << "Masukkan Nama \t\t\t: ";
        cin.ignore();
        cin.getline((p + i)->person.karyawan.name, 20);
        // cin >> (p+i)->person.karyawan.name;
        cout << "Tipe Staff \t\t\t: \n1. Permanen \n2. Non-Permanen" << endl;
        cout << "Masukkan Tipe Staff \t\t: ";
        cin >> (p + i)->person.karyawan.typeStaff;
        cout << "Status \t\t\t\t: \n1. Menikah \n2. Belum Menikah" << endl;
        cout << "Masukkan Status \t\t: ";
        cin >> (p + i)->person.karyawan.status;
        cout << "Masukkan Waktu Overtime (1-12) \t: ";
        cin >> (p + i)->person.lembur;
        cout << "Posisi \t\t\t\t: \n1. Staf \n2. Supervisor\n3. Manager\n4. Head of Department\n5. Director" << endl;
        cout << "Masukkan Posisi \t\t: ";
        cin >> (p + i)->person.karyawan.position;
        cout << "===================================================================" << endl;
        cout << endl;
        cout << endl;
    }
}

void hitungGaji()
{
    for (int i = 0; i < jumlah_data; i++)
    {
        if ((p + i)->person.karyawan.typeStaff == "1")
        {
            (p + i)->person.karyawan.typeStaff = "Permanen";
            (p + i)->person.baseSalary = 5500000;
        }
        else if ((p + i)->person.karyawan.typeStaff == "2")
        {
            (p + i)->person.karyawan.typeStaff = "Non-Permanen";
            (p + i)->person.baseSalary = 4500000;
        }
        // ========================================================
        if ((p + i)->person.karyawan.status == "1")
        {
            (p + i)->person.karyawan.status = "Menikah";
            (p + i)->person.karyawan.statusAkhir = 1000000;
        }
        else if ((p + i)->person.karyawan.status == "2")
        {
            (p + i)->person.karyawan.status = "Belum Menikah";
            (p + i)->person.karyawan.statusAkhir = 0;
        }
        // ========================================================
        if ((p + i)->person.lembur <= 12)
        {
            (p + i)->person.overtime = (p + i)->person.lembur * 100000;
        }
        else
        {
            (p + i)->person.overtime = 0;
        }
        // ========================================================
        if ((p + i)->person.karyawan.position == "1")
        {
            (p + i)->person.karyawan.position = "Staf";
            (p + i)->person.intensitive = 1000000;
        }
        else if ((p + i)->person.karyawan.position == "2")
        {
            (p + i)->person.karyawan.position = "Supervisor";
            (p + i)->person.intensitive = 3000000;
        }
        else if ((p + i)->person.karyawan.position == "3")
        {
            (p + i)->person.karyawan.position = "Manager";
            (p + i)->person.intensitive = 4500000;
        }
        else if ((p + i)->person.karyawan.position == "4")
        {
            (p + i)->person.karyawan.position = "Head Of Department";
            (p + i)->person.intensitive = 10000000;
        }
        else if ((p + i)->person.karyawan.position == "5")
        {
            (p + i)->person.karyawan.position = "Director";
            (p + i)->person.intensitive = 25000000;
        }
        // ========================================================
        if ((p + i)->person.overtime > 0)
        {
            (p + i)->person.bonus = (p + i)->person.intensitive + (p + i)->person.overtime;
        }
        else
        {
            (p + i)->person.bonus = 0;
        }
        // ========================================================
        (p + i)->person.grossSalary = (p + i)->person.baseSalary + (p + i)->person.karyawan.statusAkhir + (p + i)->person.intensitive + (p + i)->person.bonus;
        (p + i)->person.tax = (p + i)->person.grossSalary * 0.1 * 0.025;
        (p + i)->person.netSalary = (p + i)->person.grossSalary - (p + i)->person.tax;
    }
}

void print()
{
    // system("clear");
    cout << endl;
    cout << endl;
    for (int i = 0; i < jumlah_data; i++)
    {
        hitungGaji();
        cout << "=========================== SLIP GAJI " << i + 1 << " ===========================" << endl;
        cout << "ID \t\t\t\t: " << (p + i)->person.karyawan.id << endl;
        cout << "Nama \t\t\t\t: " << (p + i)->person.karyawan.name << endl;
        cout << "Position \t\t\t: " << (p + i)->person.karyawan.position << endl;
        cout << "Status \t\t\t\t: " << (p + i)->person.karyawan.status << endl;
        cout << endl;
        cout << "Penghasilan \t\t\t: " << endl;
        cout << "Gaji Pokok \t\t\t: " << setprecision(10) << (p + i)->person.baseSalary << endl;
        cout << "Tunjangan Status \t\t: " << (p + i)->person.karyawan.statusAkhir << endl;
        cout << "Gaji Lembur \t\t\t: " << (p + i)->person.overtime << endl;
        cout << "Gaji Kotor \t\t\t: " << (p + i)->person.grossSalary << endl;
        cout << endl;
        cout << "Potongan \t\t\t: " << endl;
        cout << "Pajak (termasuk BPJS & Pph21) \t: " << (p + i)->person.tax << endl;
        cout << "Gaji Bersih \t\t\t: " << (p + i)->person.netSalary << endl;
        cout << "===================================================================" << endl;
        cout << endl;
        cout << endl;
    }
}

int main()
{
    inputData();
    print();
    cout << endl;
    return 0;
}