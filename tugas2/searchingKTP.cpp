#include <iostream>
using namespace std;

struct Tanggal
{
    char tmpt[10];
    int tanggal;
    int bln;
    int thn;
};

struct biodata
{
    char nik[16]; // karena NIK terdiri dari 16 character
    char nama[30];
    Tanggal tgl;
    char gender; // jenis kelamin
    string agama;
    string status;
    string kerja;
};

struct KTP
{
    biodata orang;
    int jmlh;
};

struct KTP data_ktp[15];
struct KTP *p = data_ktp;
int jmlh_data = 0;

void penulis()
{
    cout << "#### TUGAS PERKULIAHAN SESI 6 - STRUKTUR DATA ####" << endl;
    cout << "==================================================" << endl;
    cout << "|        20220801328 - Muhammad Noval Rais       |" << endl;
    cout << "==================================================" << endl;
    cout << endl;
}

void inputData()
{

    cout << "NIK \t\t\t: ";
    cin >> p->orang.nik;
    cout << "Nama \t\t\t: ";
    cin >> p->orang.nama;
    cout << "Jenis Kelamin (L / P) \t: ";
    cin >> p->orang.gender;
    cout << "TTL \t\t\t: ";
    cin >> p->orang.tgl.tmpt >> p->orang.tgl.tanggal >> p->orang.tgl.bln >> p->orang.tgl.thn;
    cout << "Agama \t\t\t: ";
    cin >> p->orang.agama;
    cout << "Status \t\t\t: ";
    cin >> p->orang.status;
    cout << "Pekerjaan \t\t: ";
    cin >> p->orang.kerja;

    p++;
}

void totalData()
{
    cout << "Jumlah data yang ingin diinput : ";
    cin >> jmlh_data;
    cout << "################------INPUT DATA------################" << endl;

    for (int i = 0; i < jmlh_data; i++)
    {
        cout << "Data Ke-" << i + 1 << endl;
        inputData();
        cout << "======================================================" << endl;
    }
}

void mencariData()
{
    p = data_ktp;
    int tahun, hasil = 0;

    cout << "################------ MENCARI DATA BERDASARKAN TAHUN KELAHIRAN ------################" << endl;
    cout << "Input tahun kelahiran anda : ";
    cin >> tahun;
    cout << "======================= HASIL PENCARIAN =======================" << endl;

    for (int i = 0; i < jmlh_data; i++)
    {
        if ((p + i)->orang.tgl.thn != tahun)
            continue;

        cout << endl
             << "Data ke-" << ++hasil << endl;
        cout << "NIK \t\t : " << (p + i)->orang.nik << endl;
        cout << "Nama \t\t : " << (p + i)->orang.nama << endl;
        cout << "Jenis kelamin \t : " << (p + i)->orang.gender << endl;
        cout << "Tanggal Lahir \t : " << (p + i)->orang.tgl.tanggal << endl;
        cout << "Bulan Lahir \t : " << (p + i)->orang.tgl.bln << endl;
        cout << "Tahun Lahir \t : " << (p + i)->orang.tgl.thn << endl;
        cout << "Agama \t\t : " << (p + i)->orang.agama << endl;
        cout << "Status \t\t : " << (p + i)->orang.status << endl;
        cout << "Pekerjaan \t : " << (p + i)->orang.kerja << endl;
    }
}

void menampilkanData()
{
    p = data_ktp;
    int hasil = 0;
    char gender;

    cout << "################------ MENCARI DATA BERDASARKAN JENIS KELAMIN ------################" << endl;
    cout << "Input jenis kelamin (L / P) : ";
    cin >> gender;

    cout << "======================= HASIL PENCARIAN =======================" << endl;
    for (int i = 0; i < jmlh_data; i++)
    {
        if ((p + i)->orang.gender != gender)
            continue;

        cout << endl
             << "Hasil ke-" << ++hasil << endl;
        cout << "NIK \t\t : " << (p + i)->orang.nik << endl;
        cout << "Nama \t\t : " << (p + i)->orang.nama << endl;
        cout << "Jenis kelamin \t : " << (p + i)->orang.gender << endl;
        cout << "Tanggal Lahir \t : " << (p + i)->orang.tgl.tanggal << endl;
        cout << "Bulan Lahir \t : " << (p + i)->orang.tgl.bln << endl;
        cout << "Tahun Lahir \t : " << (p + i)->orang.tgl.thn << endl;
        cout << "Agama \t\t : " << (p + i)->orang.agama << endl;
        cout << "Status \t\t : " << (p + i)->orang.status << endl;
        cout << "Pekerjaan \t : " << (p + i)->orang.kerja << endl;
    }
}

void editData()
{
    if (jmlh_data <= 0)
    {
        cout << "Data tidak ditemukan";
        return;
    }
    p = data_ktp;
    int pilih = 0;

    char nik[16];
    char nama[30];
    Tanggal tgl;
    char gender;
    string agama;
    string status;
    string kerja;

    cout << endl
         << "List Data : " << endl;
    for (int i = 0; i < jmlh_data; i++)
    {
        cout << i + 1 << ". " << (p + i)->orang.nik << " " << (p + i)->orang.nama << endl;
    }

    cout << "NIK \t\t : " << (p + pilih)->orang.nik << endl;
    cout << "> ";
    cin.ignore(100, '\n');
    cin.get((p + pilih)->orang.nik, 16);

    cout << "Nama \t\t : " << (p + pilih)->orang.nama << endl;
    cout << "> ";
    cin.ignore(100, '\n');
    cin.get((p + pilih)->orang.nama, 30);

    cout << "Jenis Kelamin \t : " << (p + pilih)->orang.gender << endl;
    cout << "> ";
    cin >> gender;
    (p + pilih)->orang.gender = gender;

    cout << "Tanggal Lahir \t : " << (p + pilih)->orang.tgl.tanggal << endl;
    cout << "> ";
    cin >> (p + pilih)->orang.tgl.tanggal;

    cout << "Bulan Lahir \t : " << (p + pilih)->orang.tgl.bln << endl;
    cout << "> ";
    cin >> (p + pilih)->orang.tgl.bln;

    cout << "Tahun Lahir \t : " << (p + pilih)->orang.tgl.thn << endl;
    cout << "> ";
    cin >> (p + pilih)->orang.tgl.thn;

    cout << "Agama \t\t : " << (p + pilih)->orang.agama << endl;
    cout << "> ";
    cin >> (p + pilih)->orang.agama;

    cout << "Status \t\t : " << (p + pilih)->orang.status << endl;
    cout << "> ";
    cin >> (p + pilih)->orang.status;

    cout << "Pekerjaan \t : " << (p + pilih)->orang.kerja << endl;
    cout << "> ";
    cin >> (p + pilih)->orang.kerja;
}

int main()
{

    penulis();

    int pil;
    char kembali;

MENU:
    cout << "==================== MENU ======================" << endl;
    cout << "1. Menambah data" << endl;
    cout << "2. Mencari data berdasarkan tahun kelahiran" << endl;
    cout << "3. Menampilkan data berdasarkan L dan P" << endl;
    cout << "4. Mengedit data" << endl;
    cout << "5. Exit" << endl;
    cout << "Input pilihan anda [1 - 5]: ";
    cin >> pil;
    switch (pil)
    {
    case 1:
        totalData();

        cout << "\nBack to MENU? [y/n] : ";
        cin >> kembali;
        if (kembali == 'y')
        {
            goto MENU;
        }
        else if (kembali == 'n')
        {
            cout << "Si Riyan makan nasi, sekian Terima Kasih :)" << endl;
        }
        else
        {
            cout << "Salah hey -_-" << endl;
        }
        break;

    case 2:
        mencariData();

        cout << "\nBack to MENU? [y/n] : ";
        cin >> kembali;
        if (kembali == 'y')
        {
            goto MENU;
        }
        else if (kembali == 'n')
        {
            cout << "Si Riyan makan nasi, sekian Terima Kasih :)" << endl;
        }
        else
        {
            cout << "Salah hey -_-" << endl;
        }
        break;
    case 3:
        menampilkanData();

        cout << "\nBack to MENU? [y/n] : ";
        cin >> kembali;
        if (kembali == 'y')
        {
            goto MENU;
        }
        else if (kembali == 'n')
        {
            cout << "Si Riyan makan nasi, sekian Terima Kasih :)" << endl;
        }
        else
        {
            cout << "Salah hey -_-" << endl;
        }
        break;
    case 4:
        editData();

        cout << "\nBack to MENU? [y/n] : ";
        cin >> kembali;
        if (kembali == 'y')
        {
            goto MENU;
        }
        else if (kembali == 'n')
        {
            cout << "Si Riyan makan nasi, sekian Terima Kasih :)" << endl;
        }
        else
        {
            cout << "Salah hey -_-" << endl;
        }
        break;
    case 5:
        cout << "Si Riyan makan nasi, sekian Terima Kasih :)" << endl;
    }
    return 0;
}