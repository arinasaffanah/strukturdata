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

// struct Tanggal
// {

// };

struct Data
{
    char nik[5];
    char nama[50];
    // Tanggal tgl;
    char tempat[20];
    int tanggal;
    int bulan;
    int tahun;
    char gender; // L atau P
    char agama[10];
    int status;
    char pekerjaan[20];
    int jml;
};

// struct KTP
// {
//     Data person[10];

// };

// KTP data_ktp;
// KTP *p;

// void menambahTanggal()
// {

// }

void menambahData()
{

    struct Data person, *ptr;

    cout << "NIK \t\t\t: ";
    cin >> person.nik;
    cout << "Nama \t\t\t: ";
    cin >> person.nama;
    // menambahTanggal();
    //  struct Tanggal person;
    cout << "Tempat lahir \t\t: ";
    cin >> person.tempat;
    cout << "Tanggal lahir \t\t: ";
    cin >> person.tanggal;
    cout << "Bulan lahir \t\t: ";
    cin >> person.bulan;
    cout << "Tahun lahir \t\t: ";
    cin >> person.tahun;
    cout << "Jenis Kelamin \t\t: 1. Laki-laki[L]\n\t\t\t  2. Perempuan [P]" << endl;
    cout << "Jenis kelamin [L/P] \t: ";
    cin >> person.gender;
    cout << "Agama \t\t\t: ";
    cin >> person.agama;
    cout << "Status Perkawinan \t: 1. Belum Kawin\n\t\t\t  2. Sudah Kawin" << endl;
    cout << "Status [1/2] \t\t: ";
    cin >> person.status;
    cout << "Pekerjaan \t\t: ";
    cin >> person.pekerjaan;
}

void jumlahData()
{
    struct Data person;
    cout << "Masukkan jumlah data yang ingin ditambahkan : ";
    cin >> person.jml;
    cout << "=============== INPUT DATA ===============" << endl;
    for (int i = 0; i < person.jml; i++)
    {
        cout << "Input data ke-" << i + 1 << endl;
        menambahData();
        cout << "\n================================================" << endl;
    }
}

void cariDataLAhir(int *tahunPtr[])
{
    int cariTahun, hasilCari, *jmlPtr;
    struct Data person;
    cout << "======== MENCARI DATA DENGAN TAHUN KELAHIRAN ========" << endl;
    cout << "Masukkan tahun kelahiran : ";
    cin >> cariTahun;
    cout << *tahunPtr;
    jmlPtr = &person.jml;
    cout << "\n======================= HASIL PENCARIAN =======================" << endl;
    for (int i = 0; i < *jmlPtr; i++)
    {
        if (cariTahun == *tahunPtr[i])
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
    struct Data person;
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

            system("clear");
            // struct Data person, *ptr;
            // ptr = &person;

            // cout << "============= Menampilkan Data yang Telah diinput =============" << endl;
            // cout << "NIK : " << ptr->nik << "\nNama : " << ptr->nama

            //                                                    cout
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
            //  struct Tanggal person;
            cariDataLAhir(&person.tahun);
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