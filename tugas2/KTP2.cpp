#include <iostream>
using namespace std;

struct Tanggal
{
    char tempat[20];
    int tanggal;
    int bulan;
    int tahun;
};

struct Data
{
    string nik;
    char nama[50];
    Tanggal tgl;
    char gender; // L atau P
    char agama[10];
    string status;
    char pekerjaan[20];
};

struct KTP
{
    Data person;
    int jml;
};

struct KTP data_ktp[10];
struct KTP *p = data_ktp;
int jumlah_data = 0;

void menambahData()
{
    cout << "NIK \t\t\t: ";
    cin >> p->person.nik;
    cout << "Nama \t\t\t: ";
    cin >> p->person.nama;
    cout << "Tempat, tanggal lahir \n(dd mm yyyy) \t\t: ";
    cin >> p->person.tgl.tempat >> p->person.tgl.tanggal >> p->person.tgl.bulan >> p->person.tgl.tahun;
    cout << "Jenis Kelamin \t\t: 1. Laki-laki[L]\n\t\t\t  2. Perempuan [P]" << endl;
    cout << "Jenis kelamin [L/P] \t: ";
    cin >> p->person.gender;
    cout << "Agama \t\t\t: ";
    cin >> p->person.agama;
    cout << "Status Perkawinan \t: 1. Belum Kawin\n\t\t\t  2. Sudah Kawin" << endl;
    cout << "Status [1/2] \t\t: ";
    cin >> p->person.status;
    cout << "Pekerjaan \t\t: ";
    cin >> p->person.pekerjaan;

    p++;
}

void jumlahData()
{

    cout << "Masukkan jumlah data yang ingin ditambahkan : ";
    cin >> jumlah_data;
    cout << "=============== INPUT DATA ===============" << endl;
    for (int i = 1; i <= jumlah_data; i++)
    {
        // cout << "Input data ke-" << i + 1 << endl;
        menambahData();

        cout << "\n======= Menampilkan Data KTP yang telah ditambahkan =======" << endl;
        cout << endl;
        cout << "   NIK \t\t\t: " << (p + i)->person.nik << endl;
        cout << "   Nama \t\t: " << (p + i)->person.nama << endl;
        cout << "   Tempat Lahir \t: " << (p + i)->person.tgl.tempat << endl;
        cout << "   Tanggal Lahir \t: " << (p + i)->person.tgl.tanggal << endl;
        cout << "   Bulan Lahir \t\t: " << (p + i)->person.tgl.bulan << endl;
        cout << "   Tahun Lahir \t\t: " << (p + i)->person.tgl.tahun << endl;
        cout << "   Jenis Kelamin \t: " << (p + i)->person.gender << endl;
        cout << "   Agama \t\t: " << (p + i)->person.agama << endl;
        if ((p + i)->person.status == "1")
        {
            (p + i)->person.status = "Belum Kawin";
        }
        else
        {
            (p + i)->person.status = "Sudah Kawin";
        }
        cout << "   Status Perkawinan \t: " << (p + i)->person.status << endl;
        cout << "   Pekerjaan \t\t: " << (p + i)->person.pekerjaan << endl;
        cout << "\n===========================================================" << endl;
    }
}

void cariDataLahir()
{
    p = data_ktp;
    int cari, hasilCari = 0;

    cout << "=========== MENCARI DATA BERDASARKAN TAHUN KELAHIRAN ==============" << endl;
    cout << "Masukkan tahun kelahiran : ";
    cin >> cari;
    cout << "\n======================= HASIL PENCARIAN =======================" << endl;
    for (int i = 1; i <= jumlah_data; i++)
    {
        if ((p + i)->person.tgl.tahun == cari)
        {
            cout << endl;
            cout << "   NIK \t\t\t\t: " << (p + i)->person.nik << endl;
            cout << "   Nama \t\t\t: " << (p + i)->person.nama << endl;
            cout << "   Tempat Lahir \t\t: " << (p + i)->person.tgl.tempat << endl;
            cout << "   Tanggal Lahir \t\t: " << (p + i)->person.tgl.tanggal << endl;
            cout << "   Bulan Lahir \t\t\t: " << (p + i)->person.tgl.bulan << endl;
            cout << "\n   = Tahun Lahir \t\t: " << (p + i)->person.tgl.tahun << " = " << endl;
            cout << "\n   Jenis Kelamin \t\t: " << (p + i)->person.gender << endl;
            cout << "   Agama \t\t\t: " << (p + i)->person.agama << endl;
            if ((p + i)->person.status == "1")
            {
                (p + i)->person.status = "Belum Kawin";
            }
            else
            {
                (p + i)->person.status = "Sudah Kawin";
            }
            cout << "   Status Perkawinan \t\t: " << (p + i)->person.status << endl;
            cout << "   Pekerjaan \t\t\t: " << (p + i)->person.pekerjaan << endl;
            hasilCari++;
        }
        if (hasilCari == 0)
        {
            cout << "Data tidak ditemukan" << endl;
        }
    }
}

void cariDataGender()
{
    p = data_ktp;
    char cari;
    int hasilCari = 0;
    int temp;
    cout << "============== MENCARI DATA BERDASARKAN JENIS KELAMIN ==============" << endl;
    cout << "Pilih informasi jenis kelamin : 1. Laki-laki[L] \n\t\t\t\t2. Perempuan[P]" << endl;
    cout << "Masukkan pilihan anda [L/P]   : ";
    cin >> cari;
    if (cari == 'l' || 'L')
    {
        cari == 'l' == 'L';
        temp = 1;
    }
    else if (cari == 'p' || 'P')
    {
        cari == 'p' == 'P';
        temp = 2;
    }
    cout << "\n======================= HASIL PENCARIAN =======================" << endl;
    for (int i = 1; i <= jumlah_data; i++)
    {

        if ((p + i)->person.gender == cari)
        {
            if (temp = 1)
            {
                cout << endl;
                cout << "   NIK \t\t\t\t: " << (p + i)->person.nik << endl;
                cout << "   Nama \t\t\t: " << (p + i)->person.nama << endl;
                cout << "   Tempat Lahir \t\t: " << (p + i)->person.tgl.tempat << endl;
                cout << "   Tanggal Lahir \t\t: " << (p + i)->person.tgl.tanggal << endl;
                cout << "   Bulan Lahir \t\t\t: " << (p + i)->person.tgl.bulan << endl;
                cout << "   Tahun Lahir \t\t\t: " << (p + i)->person.tgl.tahun << endl;
                cout << "\n   = Jenis Kelamin \t\t: " << (p + i)->person.gender << " = " << endl;
                cout << "\n   Agama \t\t\t: " << (p + i)->person.agama << endl;
                if ((p + i)->person.status == "1")
                {
                    (p + i)->person.status = "Belum Kawin";
                }
                else
                {
                    (p + i)->person.status = "Sudah Kawin";
                }
                cout << "   Status Perkawinan \t\t: " << (p + i)->person.status << endl;
                cout << "   Pekerjaan \t\t\t: " << (p + i)->person.pekerjaan << endl;
            }
            else if (temp = 2)
            {
                cout << endl;
                cout << "   NIK \t\t\t\t: " << (p + i)->person.nik << endl;
                cout << "   Nama \t\t\t: " << (p + i)->person.nama << endl;
                cout << "   Tempat Lahir \t\t: " << (p + i)->person.tgl.tempat << endl;
                cout << "   Tanggal Lahir \t\t: " << (p + i)->person.tgl.tanggal << endl;
                cout << "   Bulan Lahir \t\t\t: " << (p + i)->person.tgl.bulan << endl;
                cout << "   Tahun Lahir \t\t\t: " << (p + i)->person.tgl.tahun << endl;
                cout << "\n   = Jenis Kelamin \t\t: " << (p + i)->person.gender << " = " << endl;
                cout << "\n   Agama \t\t\t: " << (p + i)->person.agama << endl;
                if ((p + i)->person.status == "1")
                {
                    (p + i)->person.status = "Belum Kawin";
                }
                else
                {
                    (p + i)->person.status = "Sudah Kawin";
                }
                cout << "   Status Perkawinan \t\t: " << (p + i)->person.status << endl;
                cout << "   Pekerjaan \t\t\t: " << (p + i)->person.pekerjaan << endl;
            }
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
    p = data_ktp;
    string cariData;
    int hasilCari = 0;
    cout << "========================== MENGEDIT DATA =======================" << endl;
    cout << "Masukkan NIK pemilik data yang ingin diubah : ";
    cin >> cariData;
    cout << "\n======================= HASIL PENCARIAN =======================" << endl;
    for (int i = 1; i <= jumlah_data; i++)
    {
        if ((p + i)->person.nik == cariData)
        {
            cout << "Masukkan data yang baru : " << endl;
            cout << "\nNIK \t\t\t: ";
            cin >> (p + i)->person.nik;
            cout << "Nama \t\t\t: ";
            cin >> (p + i)->person.nama;
            cout << "Tempat, tanggal lahir \n(dd mm yyyy) \t\t: ";
            cin >> (p + i)->person.tgl.tempat >> (p + i)->person.tgl.tanggal >> (p + i)->person.tgl.bulan >> (p + i)->person.tgl.tahun;
            cout << "Jenis Kelamin \t\t: 1. Laki-laki[L]\n\t\t\t  2. Perempuan [P]" << endl;
            cout << "Jenis kelamin [L/P] \t: ";
            cin >> (p + i)->person.gender;
            cout << "Agama \t\t\t: ";
            cin >> (p + i)->person.agama;
            cout << "Status Perkawinan \t: 1. Belum Kawin\n\t\t\t  2. Sudah Kawin" << endl;
            cout << "Status [1/2] \t\t: ";
            cin >> (p + i)->person.status;
            cout << "Pekerjaan \t\t: ";
            cin >> (p + i)->person.pekerjaan;

            cout << "\n================= Menampilkan Data Baru Yang Telah Diubah =================" << endl;
            cout << endl;
            cout << "   NIK \t\t\t: " << (p + i)->person.nik << endl;
            cout << "   Nama \t\t: " << (p + i)->person.nama << endl;
            cout << "   Tempat Lahir \t: " << (p + i)->person.tgl.tempat << endl;
            cout << "   Tanggal Lahir \t: " << (p + i)->person.tgl.tanggal << endl;
            cout << "   Bulan Lahir \t\t: " << (p + i)->person.tgl.bulan << endl;
            cout << "   Tahun Lahir \t\t: " << (p + i)->person.tgl.tahun << endl;
            cout << "   Jenis Kelamin \t: " << (p + i)->person.gender << endl;
            cout << "   Agama \t\t: " << (p + i)->person.agama << endl;
            if ((p + i)->person.status == "1")
            {
                (p + i)->person.status = "Belum Kawin";
            }
            else
            {
                (p + i)->person.status = "Sudah Kawin";
            }
            cout << "   Status Perkawinan \t: " << (p + i)->person.status << endl;
            cout << "   Pekerjaan \t\t: " << (p + i)->person.pekerjaan << endl;
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
    cout << "------------------ APLIKASI DATA KTP ------------------" << endl;
    cout << "===================== MENU UTAMA ======================" << endl;
    cout << "1. Menambah data\n2. Mencari data berdasarkan kelahiran tertentu\n3. Menampilkan data berdasarkan L dan P\n4. Mengedit data\n5. Keluar" << endl;
    cout << "=======================================================" << endl;
    cout << "Masukkan pilihan anda [1/2/3/4/5] : ";
    cin >> pil;
    switch (pil)
    {
    case 1:
        system("clear");
        jumlahData();

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
        cariDataLahir();
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
        cariDataGender();
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

    case 5:
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