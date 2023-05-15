#include <iostream>
using namespace std;

int pil;
void menu()
{
    cout << "------------------ APLIKASI DATA KTP ------------------" << endl;
    cout << "===================== MENU UTAMA ======================" << endl;
    cout << "1. Menambah data\n2. Mencari data berdasarkan kelahiran tertentu\n3. Menampilkan data berdasarkan L dan P\n4. Mengedit data\n5. Keluar" << endl;
    cout << "=======================================================" << endl;
    cout << "Masukkan pilihan anda [1/2/3/4/5] : ";
    cin >> pil;
}

struct Tanggal
{
    char tempat[20];
    int tanggal;
    int bulan;
    int tahun;
};

struct Data
{
    char nik[5];
    char nama[50];
    Tanggal tgl;
    char gender; // L atau P
    char agama[10];
    int status;
    char pekerjaan[20];
};

struct KTP
{
    Data person[10];
    int jml;
};

KTP data_ktp;
KTP *p;

void menambahTanggal()
{
    struct Tanggal person[10];
    cout << "Tempat lahir \t\t: ";
    cin >> person[10].tempat;
    cout << "Tanggal lahir \t\t: ";
    cin >> person[10].tanggal;
    cout << "Bulan lahir \t\t: ";
    cin >> person[10].bulan;
    cout << "Tahun lahir \t\t: ";
    cin >> person[10].tahun;
}

void menambahData()
{

    struct Data person[10], *ptr;

    cout << "NIK \t\t\t: ";
    cin >> person[10].nik;
    cout << "Nama \t\t\t: ";
    cin >> person[10].nama;
    menambahTanggal();
    cout << "Jenis Kelamin \t\t: 1. Laki-laki[L]\n\t\t\t  2. Perempuan [P]" << endl;
    cout << "Jenis kelamin [L/P] \t: ";
    cin >> person[10].gender;
    cout << "Agama \t\t\t: ";
    cin >> person[10].agama;
    cout << "Status Perkawinan \t: 1. Belum Kawin\n\t\t\t  2. Sudah Kawin" << endl;
    cout << "Status [1/2] \t\t: ";
    cin >> person[10].status;
    cout << "Pekerjaan \t\t: ";
    cin >> person[10].pekerjaan;
}

void jumlahData()
{
    struct KTP person[10];
    cout << "Masukkan jumlah data yang ingin ditambahkan : ";
    cin >> person[10].jml;
    cout << "=============== INPUT DATA ===============" << endl;
    for (int i = 0; i < person[10].jml; i++)
    {
        cout << "Input data ke-" << i + 1 << endl;
        menambahData();
        cout << "\n================================================" << endl;
    }
}

void cariDataLAhir(int *tahunPtr)
{
    int cariTahun, hasilCari;
    struct KTP person[10];
    cout << "======== MENCARI DATA DENGAN TAHUN KELAHIRAN ========" << endl;
    cout << "Masukkan tahun kelahiran : ";
    cin >> cariTahun;
    cout << *tahunPtr;
    cout << "\n======================= HASIL PENCARIAN =======================" << endl;
    for (int i = 0; i < *tahunPtr; i++)
    {
        if (cariTahun == tahunPtr[i])
        {
            hasilCari++;
        }
    }
    if (hasilCari == 0)
    {
        cout << "Data tidak ditemukan" << endl;
    }
    else
    {
        cout << "Adadeh" << endl;
    }
}

int main()
{

    char kembali;
    do
    {
        system("clear");
        menu();
        switch (pil)
        {
        case 1:
            system("clear");
            jumlahData();
            cout << "\nKembali ke menu? [y/n] : ";
            cin >> kembali;
            switch (kembali)
            {
            case 'y':
                system("clear");
                menu();
                break;
            case 'n':
                system("clear");
                cout << "Terima Kasih!" << endl;
                break;
            default:
                cout << "Kode salah!" << endl;
                break;
            }

            break;

        case 2:
            system("clear");
            struct Tanggal *person;
            // struct Tanggal *ptr = &person;
            cariDataLAhir(&person);
            break;
        }

    } while (kembali == 'y');

    return 0;
}

/*
do
{
bubblesort();
cout << "\nBubble Sort lagi? [y/n] : ";
cin >> ulangi;
} while (ulangi == 'y');
case3();
break;
*/