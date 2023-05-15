#include <iostream>
using namespace std;

struct Tanggal
{
    char tempat[20];
    int tanggal;
    int bulan;
    int tahun;
};

struct Mahasiswa
{
    char nama[20];
    string nim;
    char fakultas[20];
    char prodi[20];
    Tanggal tgl;
};

struct Data
{
    Mahasiswa person;
};

struct Data data[10];
struct Data *p = data;
int jumlah_data = 0;

void inputData()
{
    cout << "Masukkan jumlah data yang ingin ditambahkan : ";
    cin >> jumlah_data;
    cout << "=============== INPUT DATA ===============" << endl;
    for (int i = 0; i < jumlah_data; i++)
    {
        cout << "Nama \t\t\t: ";
        cin.ignore();
        cin.getline((p + i)->person.nama, 20);
        cout << "NIM \t\t\t: ";
        cin >> (p + i)->person.nim;
        cout << "Fakultas \t\t: ";
        cin.ignore();
        cin.getline((p + i)->person.fakultas, 20);
        cout << "Jurusan \t\t: ";
        cin.ignore(-1);
        cin.getline((p + i)->person.prodi, 20);
        cout << "Tempat, tanggal lahir \n(dd mm yyyy) \t\t: ";
        cin >> (p + i)->person.tgl.tempat >> (p + i)->person.tgl.tanggal >> (p + i)->person.tgl.bulan >> (p + i)->person.tgl.tahun;

        cout << "\n======= Menampilkan Data Mahasiswa yang Telah Ditambahkan =======" << endl;
        cout << endl;
        cout << i + 1 << ") Nama \t\t: " << (p + i)->person.nama << endl;
        cout << "   NIM \t\t\t: " << (p + i)->person.nim << endl;
        cout << "   Fakultas \t\t: " << (p + i)->person.fakultas << endl;
        cout << "   Jurusan \t\t: " << (p + i)->person.prodi << endl;
        cout << "   Tempat Lahir \t: " << (p + i)->person.tgl.tempat << endl;
        cout << "   Tanggal Lahir \t: " << (p + i)->person.tgl.tanggal << endl;
        cout << "   Bulan Lahir \t\t: " << (p + i)->person.tgl.bulan << endl;
        cout << "   Tahun Lahir \t\t: " << (p + i)->person.tgl.tahun << endl;
        cout << "\n===========================================================" << endl;
    }
}

void cariNim()
{
    string cari;
    int hasilCari = 0;

    cout << "=========== Mencari Data Mahasiswa Berdasarkan NIM ==============" << endl;
    cout << "Masukkan NIM : ";
    cin >> cari;
    cout << "\n======================= HASIL PENCARIAN =======================" << endl;
    for (int i = 0; i < jumlah_data; i++)
    {
        if ((p + i)->person.nim == cari)
        {
            cout << i + 1 << ") Nama \t\t: " << (p + i)->person.nama << endl;
            cout << "   NIM \t\t\t: " << (p + i)->person.nim << endl;
            cout << "   Fakultas \t\t: " << (p + i)->person.fakultas << endl;
            cout << "   Jurusan \t\t: " << (p + i)->person.prodi << endl;
            cout << "   Tempat Lahir \t: " << (p + i)->person.tgl.tempat << endl;
            cout << "   Tanggal Lahir \t: " << (p + i)->person.tgl.tanggal << endl;
            cout << "   Bulan Lahir \t\t: " << (p + i)->person.tgl.bulan << endl;
            cout << "   Tahun Lahir \t\t: " << (p + i)->person.tgl.tahun << endl;
            hasilCari++;
        }
        if (hasilCari == 0)
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
}

void editData()
{
    string cariData;
    int hasilCari = 0;
    cout << "========================== MENGEDIT DATA =======================" << endl;
    cout << "Masukkan NIM pemilik data yang ingin diubah : ";
    cin >> cariData;
    cout << "\n======================= HASIL PENCARIAN =======================" << endl;
    for (int i = 0; i < jumlah_data; i++)
    {
        if ((p + i)->person.nim == cariData)
        {
            cout << "Masukkan data yang baru : " << endl;
            cout << "Nama \t\t\t: ";
            cin.ignore();
            cin.getline((p + i)->person.nama, 20);
            cout << "NIM \t\t\t: ";
            cin >> (p + i)->person.nim;
            cout << "Fakultas \t\t: ";
            cin.ignore();
            cin.getline((p + i)->person.fakultas, 20);
            cout << "Jurusan \t\t: ";
            cin.ignore(-1);
            cin.getline((p + i)->person.prodi, 20);
            cout << "Tempat, tanggal lahir \n(dd mm yyyy) \t\t: ";
            cin >> (p + i)->person.tgl.tempat >> (p + i)->person.tgl.tanggal >> (p + i)->person.tgl.bulan >> (p + i)->person.tgl.tahun;

            cout << "\n======= Menampilkan Data Mahasiswa yang Telah Diedit =======" << endl;
            cout << endl;
            cout << i + 1 << ") Nama \t\t: " << (p + i)->person.nama << endl;
            cout << "   NIM \t\t\t: " << (p + i)->person.nim << endl;
            cout << "   Fakultas \t\t: " << (p + i)->person.fakultas << endl;
            cout << "   Jurusan \t\t: " << (p + i)->person.prodi << endl;
            cout << "   Tempat Lahir \t: " << (p + i)->person.tgl.tempat << endl;
            cout << "   Tanggal Lahir \t: " << (p + i)->person.tgl.tanggal << endl;
            cout << "   Bulan Lahir \t\t: " << (p + i)->person.tgl.bulan << endl;
            cout << "   Tahun Lahir \t\t: " << (p + i)->person.tgl.tahun << endl;
            cout << "\n===========================================================" << endl;
        }
        else
        {
            cout << "Data tidak ditemukan!" << endl;
        }
    }
}

int main()
{
    int pil;
    char kembali;
    system("clear");
menu:
    cout << "Selamat Datang di Aplikasi Manajemen Data Mahasiswa" << endl;
    cout << "\n===================== MENU UTAMA ======================" << endl;
    cout << "1. Input Data Mahasiswa\n2. Cari Data Mahasiswa Berdasarkan NIM\n3. Edit / Tampilkan Data Mahasiswa\n4. Keluar" << endl;
    cout << "=======================================================" << endl;
    cout << "Silahkan Pilih Menu Anda [1/2/3/4] : ";
    cin >> pil;

    switch (pil)
    {
    case 1:
        system("clear");
        inputData();

        cout << "\nKembali ke menu? [y/n] : ";
        cin >> kembali;
        if (kembali == 'y')
        {
            system("clear");
            goto menu;
        }
        else if (kembali == 'n')
        {
            system("clear");
            cout << "Terima Kasih!" << endl;
        }
        else
        {
            cout << "Kode salah!" << endl;
        }
        break;

    case 2:
        system("clear");
        cariNim();
        cout << "\nKembali ke menu? [y/n] : ";
        cin >> kembali;
        if (kembali == 'y')
        {
            system("clear");
            goto menu;
        }
        else if (kembali == 'n')
        {
            system("clear");
            cout << "Terima Kasih!" << endl;
        }
        else
        {
            cout << "Kode salah!" << endl;
        }
        break;

    case 3:
        system("clear");
        editData();
        cout << "\nKembali ke menu? [y/n] : ";
        cin >> kembali;
        if (kembali == 'y')
        {
            system("clear");
            goto menu;
        }
        else if (kembali == 'n')
        {
            system("clear");
            cout << "Terima Kasih!" << endl;
        }
        else
        {
            cout << "Kode salah!" << endl;
        }
        break;

    case 4:
        system("clear");
        cout << "Terima Kasih!" << endl;
        break;

    default:
        cout << "Kode salah!" << endl;
        cout << "\nUlangi? [y/n] : ";
        cin >> kembali;
        if (kembali == 'y')
        {
            system("clear");
            goto menu;
        }
        else if (kembali == 'n')
        {
            system("clear");
            cout << "Terima Kasih!" << endl;
        }
        else
        {
            cout << "Kode salah!" << endl;
        }
        break;
    }
    return 0;
}