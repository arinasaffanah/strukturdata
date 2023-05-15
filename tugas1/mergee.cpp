#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <conio.h>

using namespace std;

int length = 10;
int arr[10];
int temp = 0, pos = 0;
int pil, pil2;
string lagi;
char ulangi;

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
    cout << "7. Keluar Program" << endl;
    cout << endl;
    cout << "Masukkan pilihan anda [1/2/3/4/5/6/7] : ";
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
    system("clear");
    cout << "=========================================" << endl;
    cout << "|\t#1 Program Bubble Sort\t\t|" << endl;
    cout << "=========================================" << endl;

    cout << "\nPilih metode Bubble Sort : " << endl;
    cout << "1. Ascending \n2. Descending \n3. Kembali" << endl;
    cout << "\nMasukkan pilihan anda [1/2/3] : ";
    cin >> pil2;

    switch (pil2)
    {
    case 1:
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
        break;

    case 2:
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
        break;

    case 3:
        system("clear");
        namaklp();
        menu();
        break;

    default:
        system("clear");
        cout << "Kode yang anda masukkan salah!" << endl;
        break;
    }
}

void selectionsort()
{
    system("clear");
    cout << "=========================================" << endl;
    cout << "|\t#2 Program Selection Sort\t|" << endl;
    cout << "=========================================" << endl;

    cout << "\nPilih metode Selection Sort : " << endl;
    cout << "1. Ascending \n2. Descending \n3. Kembali" << endl;
    cout << "\nMasukkan pilihan anda [1/2/3] : ";
    cin >> pil2;

    switch (pil2)
    {
    case 1:
        system("clear");
        cout << "\n=========== Ascending Selection Sort ===========" << endl;
        data();

        // proses sorting data menggunakan metode selection sort
        // ascending
        cout << "\nTahapan sort Ascending : " << endl;
        for (int i = 0; i < length; i++)
        {
            cout << "Langkah " << i << " : ";
            temp = arr[i];
            pos = i;
            for (int j = i; j < length; j++)
            {
                if (arr[j] < temp)
                {
                    temp = arr[j];
                    pos = j;
                }
            }
            arr[pos] = arr[i];
            arr[i] = temp;

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

        break;

    case 2:
        system("clear");
        cout << "\n=========== Descending Selection Sort ===========" << endl;
        data();

        // proses sorting data menggunakan metode selection sort
        // descending
        cout << "\nTahapan sort Descending : " << endl;
        for (int i = 0; i < length; i++)
        {
            cout << "Langkah " << i << " : ";
            temp = arr[i];
            pos = i;
            for (int j = i; j < length; j++)
            {
                if (arr[j] > temp)
                {
                    temp = arr[j];
                    pos = j;
                }
            }
            arr[pos] = arr[i];
            arr[i] = temp;

            // tahapan sorting
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
        break;

    case 3:
        system("clear");
        namaklp();
        menu();
        break;

    default:
        system("clear");
        cout << "Kode yang anda masukkan salah!" << endl;
        break;
    }
}

void insertionsort()
{
    system("clear");
    cout << "=========================================" << endl;
    cout << "|\t#3 Program Insertion Sort\t|" << endl;
    cout << "=========================================" << endl;

    cout << "\nPilih metode Insertion Sort : " << endl;
    cout << "1. Ascending \n2. Descending \n3. Kembali" << endl;
    cout << "\nMasukkan pilihan anda [1/2/3] : ";
    cin >> pil2;

    switch (pil2)
    {
    case 1:
        system("clear");
        cout << "\n=========== Ascending Insertion Sort ===========" << endl;
        data();

        // proses sorting data menggunakan metode insertion sort
        // ascending
        cout << "\nTahapan sort Ascending : " << endl;
        for (int i = 1; i < length; i++)
        {
            cout << "Langkah " << i << " : ";
            for (int j = i; j > 0; j--)
            {
                if (arr[j] < arr[j - 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = temp;
                }
                else
                {
                    break;
                }
            }
            // tahapan sorting
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
        break;

    case 2:
        system("clear");
        cout << "\n=========== Descending Selection Sort ===========" << endl;
        data();

        // proses sorting data menggunakan metode selection sort
        // descending
        cout << "\nTahapan sort Descending : " << endl;
        for (int i = 1; i < length; i++)
        {
            cout << "Langkah " << i << " : ";
            for (int j = i; j > 0; j--)
            {
                if (arr[j] > arr[j - 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = temp;
                }
                else
                {
                    break;
                }
            }
            // tahapan sorting
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
        break;

    case 3:
        system("clear");
        namaklp();
        menu();
        break;

    default:
        system("clear");
        cout << "Kode yang anda masukkan salah!" << endl;
        break;
    }
}

void outputmerge(int arr[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << arr[length - 1];
    cout << endl;
}

void merge(int arr[], int left, int mid, int right)
{
    int key;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // temp array
    int l[n1], r[n2]; // panjang left dan panjang kanan

    for (int i = 0; i < n1; i++)
    {
        l[i] = arr[left + i];
    }
    for (int j = 0; j < n1; j++)
    {
        r[j] = arr[mid + 1 + j];
    }

    // proses merge
    key = left;
    int i = 0, j = 0;

    while (i < n1 && j < n2)
    {
        if (l[i] <= r[j])
        {
            arr[key] = l[i];
            i++;
        }
        else
        {
            arr[key] = r[j];
            j++;
        }
        key++;
    }

    // jika setelah dibandingkan dan salah satu dari r dan l habis. tapi di sisi satunya suadah habis
    // kiri yang habis
    while (i < n1)
    {
        arr[key] = l[i];
        i++;
        key++;
    }
    // kanan yang habis
    while (j < n2)
    {
        arr[key] = r[j];
        j++;
        key++;
    }
}

void mergesort(int arr[], int left, int right)
{

    cout << "=========================================" << endl;
    cout << "|\t#3 Program Merge Sort\t|" << endl;
    cout << "=========================================" << endl;

    cout << "\nPilih metode Merge Sort : " << endl;
    cout << "1. Ascending \n2. Descending \n3. Kembali" << endl;
    cout << "\nMasukkan pilihan anda [1/2/3] : ";
    cin >> pil2;

    switch (pil2)
    {
    case 1:
        system("clear");
        cout << "\n=========== Ascending Merge Sort ===========" << endl;
        data();

        // proses sorting data menggunakan metode merge sort
        // ascending

        if (left < right)
        {
            int mid = left + (right - left) / 2;

            mergesort(arr, left, mid);      // kiri
            mergesort(arr, mid + 1, right); // kanan

            merge(arr, left, mid, right);
        }

        break;
    }
}

int main()
{
    namaklp();
    cout << "Welcome!" << endl;
    menu();

    switch (pil)
    {
    case 1:
        do
        {
            bubblesort();
            cout << "\nBubble Sort lagi? [y/n] : ";
            cin >> ulangi;
        } while (ulangi == 'y');
        system("clear");
        namaklp();
        menu();
        break;
    case 2:
        // selectionsort();
        do
        {
            selectionsort();
            cout << "\nSelection Sort lagi? [y/n] : ";
            cin >> ulangi;
        } while (ulangi == 'y');
        system("clear");
        namaklp();
        menu();
        break;
    case 3:
        system("clear");
        // insertionsort();
        do
        {
            insertionsort();
            cout << "\nInsertion Sort lagi? [y/n] : ";
            cin >> ulangi;
        } while (ulangi == 'y');
        system("clear");
        namaklp();
        menu();
        break;
    case 4:
        system("clear");
        // mergesort();
        cout << "\n# Data sebelum dilakukan merge Sort : ";
        outputmerge(arr, length);
        // tampilkan data setelah di-sort descending
        mergesort(arr, 0, length - 1);
        cout << "\nHasil akhir data sort ascending  : ";
        outputmerge(arr, length);
        break;
    case 5:
        system("clear");
        // quicksort();
        break;
    case 6:
        system("clear");
        // redixsort();
        break;
    case 7:
        system("clear");
        namaklp();

        cout << "Terima Kasih Sudah Menggunakan Program Kami ^^ !!!" << endl;
        break;
    default:
        break;
    }
    return 0;
}