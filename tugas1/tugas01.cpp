#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <conio.h>

using namespace std;

int length = 10;
int arr[10];
int temp = 0;
int pil;
string lagi;
string ulangi;

void namaklp()
{
    cout << "==== TUGAS STRUKTUR DATA PRAKTIKUM 2 ====" << endl;
    cout << "| Arina Saffanah Zakiyyah - 20220801189 |" << endl;
    cout << "| Muhammad Noval Rais     - 20220801328 |" << endl;
    cout << "=========================================" << endl;
    cout << endl;
}

void menu()
{
    cout << endl;
    cout << "Pilih menu sorting yang diinginkan : " << endl;
    cout << "1. Bubble Sort" << endl;
    cout << "2. Selection Sort" << endl;
    cout << "3. Insertion Sort" << endl;
    cout << "4. Merge Sort" << endl;
    cout << "5. Quick Sort" << endl;
    cout << "6. Redix Sort" << endl;
    cout << endl;
    cout << "Masukkan pilihan anda : ";
    cin >> pil;
    cout << endl;
}

void data()
{

    cout << "\nMasukkan jumlah data : ";
    cin >> length;
    cout << "\nInput data : " << endl;
    for (int a = 0; a < length; a++)
    {
        cout << "# Data ke-" << a << " : ";
        cin >> arr[a];
    }

    // tampilkan data sebelum di-sort
    cout << "\n# Data sebelum dilakukan Bubble Sort : ";
    for (int i = 0; i < length; i++)
    {
        cout << setw(2) << arr[i] << " ";
    }
    cout << endl;
}

void bubblesort()
{
    // do
    // {
    system("clear");
    cout << "=========================================" << endl;
    cout << "|\t#1 Program Bubble Sort\t\t|" << endl;
    cout << "=========================================" << endl;

    int pil2;
    cout << "\nPilih metode Bubble Sort : " << endl;
    cout << "1. Ascending \n2. Descending \n3. Kembali" << endl;
    cout << "\nMasukkan pilihan anda : ";
    cin >> pil2;

    if (pil2 == 1)
    {
        system("clear");
        cout << "\n=========== Ascending Bubble Sort ===========" << endl;
        data();

        // proses sorting data menggunakan metode bubble sort
        // ascending
        cout << "\nTahapan sort Ascending : " << endl;
        for (int i = 1; i < length; i++)
        {
            cout << "Langkah " << i << " : ";
            for (int j = 0; j < length - i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            // tahapan sorting
            for (int k = 0; k < length; k++)
            {
                cout << setw(3) << arr[k] << " ";
            }
            cout << endl;
        }

        // tampilkan data setelah di-sort ascending
        cout << "\n# Data setelah dilakukan Bubble Sort : ";

        for (int a = 0; a < length; a++)
        {
            cout << setw(2) << arr[a] << " ";
        }
        cout << endl;

        cout << "\n=============== Program Selesai ==============" << endl;
    }
    else if (pil2 == 2)
    {
        system("clear");
        cout << "\n=========== Descending Bubble Sort ===========" << endl;
        data();

        // proses sorting data menggunakan metode bubble sort
        // descending
        cout << "\nTahapan sort Descending : " << endl;
        for (int i = 1; i < length; i++)
        {
            cout << "Langkah " << i << " : ";
            for (int j = 0; j < length - i; j++)
            {
                if (arr[j] < arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            for (int k = 0; k < length; k++)
            {
                cout << setw(3) << arr[k] << " ";
            }
            cout << endl;
        }

        // tampilkan data setelah di-sort descending
        cout << "\nHasil akhir data sort Descending  : ";
        for (int b = 0; b < length; b++)
        {
            cout << setw(2) << arr[b] << " ";
        }
        cout << endl;

        cout << "\n=============== Program Selesai ==============" << endl;
    }
    else if (pil2 == 3)
    {
        system("clear");
        namaklp();
        menu();
    }
    else
    {
        system("clear");
        cout << "Kode yang anda masukkan salah!" << endl;
    }

    // } while (pil == 1);
}

int main()
{

    namaklp();
    cout << "Welcome!" << endl;

    menu();
    /*if(pil == 1){
        bubblesort();
    } else if (pil == 2){
        selectionsort();
    } else if (pil == 3){
        insertionsort();
    } else if (pil == 4){
        mergesort();
    } else if (pil == 5){
        quicksort();
    } else if (pil == 6){
        redixsort();
    } else {
        cout << "Kode yang anda masukkan salah!" << endl;
    }*/

    switch (pil)
    {
    case 1:

        do
        {
            system("clear");
            bubblesort();
            cout << "\nKembali? [Y/N] : ";
            cin >> ulangi;
        } while (ulangi == "Y" || "y");
        cout << "Terima Kasih!" << endl;
        break;
    case 2:
        system("clear");
        // selectionsort();
        break;
    case 3:
        system("clear");
        // insertionsort();
        break;
    case 4:
        system("clear");
        // mergesort();
        break;
    case 5:
        system("clear");
        // quicksort();
        break;
    case 6:
        system("clear");
        // redixsort();
        break;
    default:
        break;
    }

    // if (pil == 1)
    // {
    //     system("clear");
    //     bubblesort();
    // }
    return 0;
}