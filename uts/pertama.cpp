#include <iostream>
using namespace std;

struct Karyawan
{
    char id[10];      // input
    string name;      // input
    string typeStaff; // input (1/2) (permanen & tdk permanen)
    float tipe;
    string status; // input (1/2)
    float statusAkhir;
    string position; //
    // float staf = 1000000;
    // float supervisor = 3000000;
    // float manager = 4500000;
    // float hod = 10000000;
    // float director = 25000000;
};

struct Gaji
{
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

// struct Data{
//     Gaji person;
// };

struct Karyawan karyawan;
struct Gaji gaji;
// struct Data data;
// struct Data *p = data;

void inputData()
{
    cout << "Masukkan ID : ";
    cin >> karyawan.id;
    cout << "Masukkan Nama : ";
    cin >> karyawan.name;
    cout << "Tipe Staff : \n1. Permanen \n2. Non-Permanen" << endl;
    cout << "Masukkan Tipe Staff : ";
    cin >> karyawan.typeStaff;
    cout << "Status : \n1. Menikah \n2. Belum Menikah" << endl;
    cout << "Masukkan Status : ";
    cin >> karyawan.status;
    cout << "Masukkan Waktu Overtime (1-12): ";
    cin >> gaji.lembur;
    cout << "Posisi : \n1. Staf \n2. Supervisor\n3. Manager\n4. Head of Department\n5. Director" << endl;
    cout << "Masukkan Posisi : ";
    cin >> karyawan.position;
}

void hitungGaji()
{

    if (karyawan.typeStaff == "1")
    {
        karyawan.typeStaff == "Permanen";
        gaji.baseSalary == 5500000;
    }
    else if (karyawan.typeStaff == "2")
    {
        karyawan.typeStaff == "Non-Permanen";
        gaji.baseSalary == 4500000;
    }
    // ========================================================
    if (karyawan.status == "1")
    {
        karyawan.status == "Menikah";
        karyawan.statusAkhir == 1000000;
    }
    else if (karyawan.status == "2")
    {
        karyawan.status == "Belum Menikah";
        karyawan.statusAkhir == 0;
    }
    // ========================================================
    if (gaji.lembur <= 12)
    {
        gaji.overtime = gaji.lembur * 100000;
    }
    else
    {
        gaji.overtime = 0;
    }
    // ========================================================
    if (karyawan.position == "1")
    {
        karyawan.position == "Staf";
        gaji.intensitive == 1000000;
    }
    else if (karyawan.position == "2")
    {
        karyawan.position == "Supervisor";
        gaji.intensitive == 3000000;
    }
    else if (karyawan.position == "3")
    {
        karyawan.position == "Manager";
        gaji.intensitive == 4500000;
    }
    else if (karyawan.position == "4")
    {
        karyawan.position == "Head Of Department";
        gaji.intensitive == 10000000;
    }
    else if (karyawan.position == "5")
    {
        karyawan.position == "Director";
        gaji.intensitive == 25000000;
    }
    // ========================================================
    if (gaji.overtime > 0)
    {
        gaji.bonus = gaji.intensitive + gaji.overtime;
    }
    else
    {
        gaji.bonus = 0;
    }
    // ========================================================
    gaji.grossSalary = gaji.baseSalary + karyawan.statusAkhir + gaji.intensitive + gaji.bonus;
    gaji.tax = gaji.grossSalary * 0.1 * 0.025;
    gaji.netSalary = gaji.grossSalary - gaji.tax;
}

void print()
{
    inputData();
    system("clear");
    hitungGaji();
    cout << "=========================== SLIP GAJI ===========================" << endl;
    cout << "ID : " << karyawan.id << endl;
    ;
    cout << "Nama : " << karyawan.name << endl;
    ;
    cout << "Position : " << karyawan.position << endl;
    ;
    cout << "Status : " << karyawan.status << endl;
    ;
    cout << endl;
    cout << "Penghasilan : " << endl;
    cout << "Gaji Pokok : " << gaji.baseSalary << endl;
    ;
    cout << "Tunjangan Status : " << karyawan.statusAkhir << endl;
    ;
    cout << "Gaji Lembur : " << gaji.overtime << endl;
    ;
    cout << "Gaji Kotor : " << gaji.grossSalary << endl;
    ;
    cout << "Potongan : " << endl;
    cout << "Pajak (termasuk BPJS & Pph21): " << gaji.tax << endl;
    ;
    cout << "Gaji Bersih : " << gaji.netSalary << endl;
    ;
}

int main()
{
    // inputData();
    // hitungGaji();
    print();
}