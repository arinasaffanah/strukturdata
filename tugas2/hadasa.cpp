#include <iostream>
#include <string.h>
using namespace std;

int bersih()
{
    cout << "\n\n";
    system("PAUSE");
    system("cls");
}

int system()
{
    system("cls");
}

int nama()
{
    cout << "\n\t\t\t ==> TUGAS PROGRAM KTP <== " << endl;
    cout << "\n\t\t\t NAMA     : HADASA SARAH DIVANDA GASPERSZ ";
    cout << "\n\t\t\t NIM      : 20220801197 ";
    cout << "\n\t\t\t JURUSAN  : TEKNIK INFORMATIKA ";
    cout << "\n\t\t\t FAKULTAS : ILMU KOMPUTER     ";
}

int garis()
{
    for (int i = 0; i <= 79; i++)
    {
        cout << "_";
    }
    cout << endl;
}

typedef struct
{
    char tmpt[20];
    int tgl;
    int bln;
    int th;
} Tanggal;

typedef struct
{
    char noNIK[5];
    char nama[30];
    Tanggal t;
    char jenis_kelamin; // 'L' atau 'P'
    char alamat[30];
    char rt_rw[10];
    char kelurahan[30];
    char kecamatan[20];
    char agama[30];
    char status_perkawinan[20];
    char pekerjaan[30];
    char kewarganegaraan[5];
} KTP;

typedef struct
{
    KTP ktp;
    int jml;
} Data_KTP;

Data_KTP data_ktp[100]; // array data KTP dengan maksimal 100 data
Data_KTP *p = data_ktp; // pointer menunjuk pada alamat awal data_ktp
int jumlah_data = 0;

void tambah_data()
{
    cout << "\t\t\t ===== TAMBAH DATA =====" << endl;
    garis();

    cout << "\n Masukkan NIK: ";
    cin >> p->ktp.noNIK;

    cout << "\n Masukkan nama: ";
    cin.ignore();
    cin.getline(p->ktp.nama, 30);

    cout << "\n Masukkan tempat, tanggal lahir (dd mm yyyy): ";
    cin >> p->ktp.t.tmpt >> p->ktp.t.tgl >> p->ktp.t.bln >> p->ktp.t.th;

    cout << "\n Masukkan jenis kelamin (L/P): ";
    cin >> p->ktp.jenis_kelamin;

    cout << "\n Masukkan alamat: ";
    cin >> p->ktp.alamat;

    cout << "\n Masukkan RT/RW: ";
    cin >> p->ktp.rt_rw;

    cout << "\n Masukkan kelurahan: ";
    cin >> p->ktp.kelurahan;

    cout << "\n Masukkan kecamatan: ";
    cin >> p->ktp.kecamatan;

    cout << "\n Masukkan agama: ";
    cin >> p->ktp.agama;

    cout << "\n Masukkan status perkawinan: ";
    cin >> p->ktp.status_perkawinan;

    cout << "\n Masukkan pekerjaan: ";
    cin >> p->ktp.pekerjaan;

    cout << "\n Masukkan kewarganegaraan: ";
    cin >> p->ktp.kewarganegaraan;

    p->jml++;
    jumlah_data++;
    p++; // pointer p di-increment agar menunjuk pada alamat data KTP selanjutnya
}

void cari_data(int tahun)
{
    int i;
    bool ditemukan = false;

    for (i = 0; i < jumlah_data; i++)
    {
        if (data_ktp[i].ktp.t.th == tahun)
        {
            cout << "\n NIK: " << data_ktp[i].ktp.noNIK << endl;
            cout << "\n Nama: " << data_ktp[i].ktp.nama << endl;
            cout << "\n Tempat, Tanggal Lahir: " << data_ktp[i].ktp.t.tmpt << "," << data_ktp[i].ktp.t.tgl << "-" << data_ktp[i].ktp.t.bln << "-" << data_ktp[i].ktp.t.th << endl;
            cout << "\n Jenis Kelamin: " << data_ktp[i].ktp.jenis_kelamin << endl;
            cout << "\n Alamat: " << data_ktp[i].ktp.alamat << endl;
            cout << "\n RT/RW: " << data_ktp[i].ktp.rt_rw << endl;
            cout << "\n Kelurahan: " << data_ktp[i].ktp.kelurahan << endl;
            cout << "\n Kecamatan: " << data_ktp[i].ktp.kecamatan << endl;
            cout << "\n Agama: " << data_ktp[i].ktp.agama << endl;
            cout << "\n Status Perkawinan: " << data_ktp[i].ktp.status_perkawinan << endl;
            cout << "\n Pekerjaan: " << data_ktp[i].ktp.pekerjaan << endl;
            cout << "\n Kewarganegaraan: " << data_ktp[i].ktp.kewarganegaraan << endl;

            ditemukan = true;
        }
    }

    if (!ditemukan)
    {
        cout << "Data tidak ditemukan" << endl;
    }
}

void tampilkan_data(char jenis_kelamin)
{
    int i;

    for (i = 0; i < jumlah_data; i++)
    {
        if (data_ktp[i].ktp.jenis_kelamin == jenis_kelamin)
        {
            cout << "\t\t\t ===== DATA BERDASARKAN JENIS KELAMIN =====" << endl;
            garis();

            cout << "\n NIK: " << data_ktp[i].ktp.noNIK << endl;
            cout << "\n Nama: " << data_ktp[i].ktp.nama << endl;
            cout << "\n Tempat, Tanggal Lahir: " << data_ktp[i].ktp.t.tmpt << "," << data_ktp[i].ktp.t.tgl << "-" << data_ktp[i].ktp.t.bln << "-" << data_ktp[i].ktp.t.th << endl;
            cout << "\n Jenis Kelamin: " << data_ktp[i].ktp.jenis_kelamin << endl;
            cout << "\n Alamat: " << data_ktp[i].ktp.alamat << endl;
            cout << "\n RT/RW: " << data_ktp[i].ktp.rt_rw << endl;
            cout << "\n Kelurahan: " << data_ktp[i].ktp.kelurahan << endl;
            cout << "\n Kecamatan: " << data_ktp[i].ktp.kecamatan << endl;
            cout << "\n Agama: " << data_ktp[i].ktp.agama << endl;
            cout << "\n Status Perkawinan: " << data_ktp[i].ktp.status_perkawinan << endl;
            cout << "\n Pekerjaan: " << data_ktp[i].ktp.pekerjaan << endl;
            cout << "\n Kewarganegaraan: " << data_ktp[i].ktp.kewarganegaraan << endl;
            cout << endl;
        }
    }
}

void edit_data(char *noNIK)
{
    int i;
    bool ditemukan = false;

    for (i = 0; i < jumlah_data; i++)
    {
        if (strcmp(data_ktp[i].ktp.noNIK, data_ktp[i].ktp.noNIK) == 0)
        {
            cout << "\n Masukkan nomor KTP baru: ";
            cin >> data_ktp[i].ktp.noNIK;

            cout << "\n Masukkan nama baru: ";
            cin.ignore();
            cin.getline(data_ktp[i].ktp.nama, 30);

            cout << "\n Masukkan Tempat, tanggal lahir baru (dd mm yyyy): ";
            cin >> data_ktp[i].ktp.t.tmpt >> data_ktp[i].ktp.t.tgl >> data_ktp[i].ktp.t.bln >> data_ktp[i].ktp.t.th;

            cout << "\n Masukkan jenis kelamin baru (L/P): ";
            cin >> data_ktp[i].ktp.jenis_kelamin;

            cout << "\n Masukkan Alamat Baru: ";
            cin >> data_ktp[i].ktp.alamat;

            cout << "\n Masukkan RT/RW Baru: ";
            data_ktp[i].ktp.rt_rw;

            cout << "\n Masukkan Kelurahan baru: ";
            cin >> data_ktp[i].ktp.kelurahan;

            cout << "\n Masukkan Kecamatan Baru: ";
            cin >> data_ktp[i].ktp.kecamatan;

            cout << "\n Masukkan Agama Baru: ";
            cin >> data_ktp[i].ktp.agama;

            cout << "\n Masukkan Status Perkawinan Baru: ";
            cin >> data_ktp[i].ktp.status_perkawinan;

            cout << "\n Masukkan Pekerjaan Baru: ";
            cin >> data_ktp[i].ktp.pekerjaan;

            cout << "\n Masukkan Kewarganegaraan Baru: ";
            cin >> data_ktp[i].ktp.kewarganegaraan;

            ditemukan = true;
            break;
        }
    }

    if (!ditemukan)
    {
        cout << "Data tidak ditemukan" << endl;
    }
}

int main()
{
    int kode, tahun;
    char jenis_kelamin, noNIK[5];
    nama();
    bersih();
menu:
    cout << "\t\t\t ===== MENU PROGRAM KTP =====" << endl;
    garis();
    cout << "\n\t\n\t 1. Tambah Data" << endl;
    cout << "\n\t\n\t 2. Cari Data berdasarkan tahun kelahiran" << endl;
    cout << "\n\t\n\t 3. Tampilkan Data berdasarkan jenis kelamin" << endl;
    cout << "\n\t\n\t 4. Edit Data" << endl;
    cout << "\n\n\t\t Masukan Kode [1/2/3/4]: ";
    cin >> kode;
    system();

    switch (kode)
    {
    case 1:
        tambah_data();
        bersih();
        goto menu;
    case 2:
        cout << "\t\t\t ===== DATA BERDASARKAN TAHUN KELAHIRAN =====" << endl;
        garis();
        cout << "\n Masukkan tahun kelahiran: ";
        cin >> tahun;
        cari_data(tahun);
        bersih();
        goto menu;
    case 3:
        cout << "\t\t\t ===== DATA BERDASARKAN JENIS KELAMIN =====" << endl;
        garis();
        cout << "\n Masukkan jenis kelamin (L/P): ";
        cin >> jenis_kelamin;
        tampilkan_data(jenis_kelamin);
        bersih();
        goto menu;
    case 4:
        cout << "\t\t\t ===== EDIT DATA =====" << endl;
        garis();
        cout << "\n Masukkan NIK: ";
        cin >> noNIK;
        edit_data(noNIK);
        bersih();
        goto menu;
    default:
        cout << "Kode Tidak Valid" << endl;
        break;
    }

    return 0;
}