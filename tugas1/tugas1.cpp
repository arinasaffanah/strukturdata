#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{
    cout << "==== TUGAS STRUKTUR DATA PRAKTIKUM 2 ====" << endl;
    cout << "| Arina Saffanah Zakiyyah - 20220801189 |" << endl;
    cout << "| Muhammad Noval Rais     - 20220801328 |" << endl;
    cout << "=========================================" << endl;

    int pil;
    cout << endl;
    cout << "Welcome!" << endl;
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

    if (pil == 1)
    {
        cout << "========= #1 Program Bubble Sort ========" << endl;
        cout << "| Arina Saffanah Zakiyyah - 20220801189 |" << endl;
        cout << "| Muhammad Noval Rais     - 20220801328 |" << endl;
        cout << "=========================================" << endl;

        int length;
        cout << "\nInput jumlah data : ";
        cin >> length;
        int arr[length];
        int temp = 0;
        for (int a = 0; a < length; a++)
        {
            cout << "# Data ke-" << a << " : ";
            cin >> arr[a];
        }

        // tampilkan jumlah data
        cout << "\nJumlah data : " << length << endl;

        // tampilkan data sebelum di-sort
        cout << "\n# Data sebelum dilakukan Bubble Sort : ";
        for (int i = 0; i < length; i++)
        {
            cout << setw(2) << arr[i] << " ";
        }
        cout << endl;
        cout << "# Data setelah dilakukan Bubble Sort : " << endl;

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
        cout << "\nHasil akhir data sort Ascending  : ";
        for (int a = 0; a < length; a++)
        {
            cout << setw(2) << arr[a] << " ";
        }
        cout << endl;

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
    }
}