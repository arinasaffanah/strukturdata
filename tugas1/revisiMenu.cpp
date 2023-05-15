#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <conio.h>

using namespace std;

int length = 10;
int arr[10];
int temp = 0, pos = 0;
int pil, pil2;
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

void garisheader()
{
    cout << "=========================================" << endl;
}

void metode()
{
    cout << "\nPilih metode Bubble Sort : " << endl;
    cout << "1. Ascending \n2. Descending \n3. Kembali" << endl;
    cout << "\nMasukkan pilihan anda [1/2/3] : ";
    cin >> pil2;
}

void selesai()
{
    cout << "\n=============== Program Selesai ==============" << endl;
}

void printArray123()
{

    for (int a = 0; a < length; a++)
    {
        cout << setw(2) << arr[a] << " ";
    }
    cout << endl;
    selesai();
}

void printArray456(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void printArray456Descending(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
        cout << arr[i] << " ";
    cout << endl;
}

void tahapan()
{
    for (int k = 0; k < length; k++)
    {
        cout << setw(3) << arr[k] << " ";
    }
    cout << endl;
}

void sortDescending()
{
    cout << "\n# Data setelah dilakukan sort Descending  : ";
    printArray123();
}

void case3()
{
    system("clear");
    namaklp();
    menu();
}

void difault()
{
    system("clear");
    cout << "Kode yang anda masukkan salah!" << endl;
}

void bubblesort()

{
    system("clear");
    cout << "=========================================" << endl;
    cout << "|\t#1 Program Bubble Sort\t\t|" << endl;
    cout << "=========================================" << endl;

    metode();

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
            tahapan();
        }

        // tampilkan data setelah di-sort ascending
        cout << "\n# Data setelah dilakukan Bubble Sort : ";
        printArray123();
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
            tahapan();
        }

        // tampilkan data setelah di-sort descending
        sortDescending();
        break;

    case 3:
        case3();
        break;

    default:
        difault();
        break;
    }
}

void selectionsort()
{
    system("clear");
    cout << "=========================================" << endl;
    cout << "|\t#2 Program Selection Sort\t|" << endl;
    cout << "=========================================" << endl;

    metode();

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
            tahapan();
        }
        // tampilkan data setelah di-sort ascending
        cout << "\n# Data setelah dilakukan Selection Sort : ";
        printArray123();
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
            tahapan();
            ;
        }
        // tampilkan data setelah di-sort descending
        sortDescending();
        break;
    case 3:
        case3();
        break;

    default:
        difault();
        break;
    }
}

void insertionsort()
{
    system("clear");
    cout << "=========================================" << endl;
    cout << "|\t#3 Program Insertion Sort\t|" << endl;
    cout << "=========================================" << endl;

    metode();

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
            tahapan();
        }
        // tampilkan data setelah di-sort descending
        cout << "\n# Data setelah dilakukan Insertion Sort : ";
        printArray123();
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
            tahapan();
        }
        // tampilkan data setelah di-sort descending
        sortDescending();
        break;

    case 3:
        case3();
        break;

    default:
        difault();
        break;
    }
}

// merge sort
void merge(int arr[], int kiri, int tengah, int kanan)
{

    /*
        n1 = jumlah elemen kiri
        n2 = jumlah elemen kanan
        k = key
    */
    int n1 = tengah - kiri + 1;
    int n2 = kanan - tengah;

    /*
    L = array kiri dengan jumlah array n1
    R = array kanan dengan jumlah array n2
    */
    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[kiri + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[tengah + 1 + j];

    // inisialisasi lagi
    int i, j, k;
    i = 0;
    j = 0;
    k = kiri;

    // saat salah satu ujung L atau M, pilih yang lebih besar, tempatkan elemen pada posisi yang benar di Array[kiri..kanan]
    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    // Jika elemen sudah habis antara L dan R, maka langsung turunkan
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right)
{
    // Membagi array menjadi dua subarray, lalu diurutkan dan digabung/disatukan
    if (left < right)
    {
        // mid = nilai tengah
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // gabungkan subarray yang terurut
        merge(arr, left, mid, right);
    }
}

// quick sort
void tukar(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partisi(int arr[], int low, int high)
{

    // pilih elemen paling kanan sebagai pivot
    int pivot = arr[high];

    // pointer untuk elemen yang lebih besar
    int i = (low - 1);

    // bandingkan tiap elemen dengan pivot
    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            // tukar elemen i dengan elemen j
            tukar(&arr[i], &arr[j]);
        }
    }

    // tukar pivot dengan elemen yang lebih besar di i
    tukar(&arr[i + 1], &arr[high]);
    // kembalikan titik partisinya
    return (i + 1);
}

int partisiDescending(int arr[], int low, int high)
{

    // pilih elemen paling kanan sebagai pivot
    int pivot = arr[high];

    // pointer untuk elemen yang lebih besar
    int i = (low - 1);

    // bandingkan tiap elemen dengan pivot
    for (int j = low; j < high; j++)
    {
        if (arr[j] >= pivot)
        {
            i++;
            // tukar elemen i dengan elemen j
            tukar(&arr[i], &arr[j]);
        }
    }

    // tukar pivot dengan elemen yang lebih besar di i
    tukar(&arr[i + 1], &arr[high]);
    // kembalikan titik partisinya
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        // cari pivot hingga elemen yang lebih kecil di sebelah kiri pivot dan yang lebih besar di kanan pivot
        int pi = partisi(arr, low, high);

        // pemanggilan rekursif di sebelah kiri pivot
        quickSort(arr, low, pi - 1);

        // pemanggilan rekursif di sebelah kanan pivot
        quickSort(arr, pi + 1, high);
    }
}

// radix sort
int getMax(int arr[], int size)
{
    // mencari elemen terbesar
    int max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

void countingSort(int arr[], int size, int tempat)
{
    const int max = 10;
    int output[size];
    int hitung[max];

    for (int i = 0; i < max; ++i)
        hitung[i] = 0;

    // menghitung jumlah elemen
    for (int i = 0; i < size; i++)
        hitung[(arr[i] / tempat) % 10]++;

    // menghitung jumlah kumulatif
    for (int i = 1; i < max; i++)
        hitung[i] += hitung[i - 1];

    // mengurutkan elemen
    for (int i = size - 1; i >= 0; i--)
    {
        output[hitung[(arr[i] / tempat) % 10] - 1] = arr[i];
        hitung[(arr[i] / tempat) % 10]--;
    }

    for (int i = 0; i < size; i++)
        arr[i] = output[i];
}

void radixsort(int arr[], int size)
{
    int max = getMax(arr, size);

    // mengurutkan elemen sesuai tempatnya
    for (int tempat = 1; max / tempat > 0; tempat *= 10)
        countingSort(arr, size, tempat);
}

int main()
{
    do
    {
        system("clear");
        namaklp();
        cout << "Welcome!" << endl;
        menu();
        int size = sizeof(arr) / sizeof(arr[0]);

        switch (pil)
        {
        case 1:
            do
            {
                bubblesort();
                cout << "\nBubble Sort lagi? [y/n] : ";
                cin >> ulangi;
            } while (ulangi == 'y');
            case3();
            break;
        case 2:
            // selectionsort();
            do
            {
                selectionsort();
                cout << "\nSelection Sort lagi? [y/n] : ";
                cin >> ulangi;
            } while (ulangi == 'y');
            case3();
            break;
        case 3:
            // insertionsort();
            do
            {
                insertionsort();
                cout << "\nInsertion Sort lagi? [y/n] : ";
                cin >> ulangi;
            } while (ulangi == 'y');
            case3();
            break;
        case 4:
            // mergesort();
            do
            {
                system("clear");
                cout << "=========================================" << endl;
                cout << "|\t   #4 Program Merge Sort   \t|" << endl;
                cout << "=========================================" << endl;

                metode();

                switch (pil2)
                {
                case 1:
                    system("clear");
                    cout << "\n=========== Ascending Merge Sort ===========" << endl;
                    cout << "\nMasukkan jumlah data : ";
                    cin >> size;
                    cout << "\nInput data : " << endl;
                    for (int a = 0; a < size; a++)
                    {
                        cout << "# Data ke-" << a << " : ";
                        cin >> arr[a];
                    }

                    cout << "\n# Data sebelum dilakukan Merge Sort : ";
                    printArray456(arr, size);

                    mergeSort(arr, 0, size - 1);
                    cout << "# Hasil akhir data sort Ascending  : ";
                    printArray456(arr, size);
                    cout << endl;

                    selesai();
                    break;

                case 2:
                    system("clear");
                    cout << "\n=========== Descending Merge Sort ===========" << endl;
                    cout << "\nMasukkan jumlah data : ";
                    cin >> size;
                    cout << "\nInput data : " << endl;
                    for (int a = 0; a < size; a++)
                    {
                        cout << "# Data ke-" << a << " : ";
                        cin >> arr[a];
                    }

                    cout << "\n# Data sebelum dilakukan Merge Sort : ";
                    printArray456(arr, size);

                    mergeSort(arr, 0, size - 1);

                    cout << "# Hasil akhir data sort Descending  : ";
                    printArray456Descending(arr, size);
                    cout << endl;

                    // proses sorting data menggunakan metode selection sort
                    // descending

                    cout << "\n=============== Program Selesai ==============" << endl;
                    break;

                case 3:
                    case3();
                    break;

                default:
                    difault();
                    break;
                }

                cout << "\nMerge Sort lagi? [y/n] : ";
                cin >> ulangi;
            } while (ulangi == 'y');
            case3();
            break;

        case 5:
            do
            {
                system("clear");
                int size = sizeof(arr) / sizeof(arr[0]);
                system("clear");
                cout << "=========================================" << endl;
                cout << "|\t#5 Program Quick Sort\t|" << endl;
                cout << "=========================================" << endl;

                metode();

                switch (pil2)
                {
                case 1:
                    system("clear");
                    cout << "\n=========== Ascending Quick Sort ===========" << endl;
                    cout << "\nMasukkan jumlah data : ";
                    cin >> size;
                    cout << "\nInput data : " << endl;
                    for (int a = 0; a < size; a++)
                    {
                        cout << "# Data ke-" << a << " : ";
                        cin >> arr[a];
                    }
                    cout << "\n# Data sebelum dilakukan Quick Sort : ";
                    printArray456(arr, size);

                    quickSort(arr, 0, size - 1);

                    cout << "# Hasil akhir data sort Ascending   : ";
                    printArray456(arr, size);
                    cout << endl;

                    selesai();
                    break;

                case 2:
                    system("clear");
                    cout << "\n=========== Descending Merge Sort ===========" << endl;
                    cout << "\nMasukkan jumlah data : ";
                    cin >> size;
                    cout << "\nInput data : " << endl;
                    for (int a = 0; a < size; a++)
                    {
                        cout << "# Data ke-" << a << " : ";
                        cin >> arr[a];
                    }
                    cout << "\n# Data sebelum dilakukan Merge Sort : ";
                    printArray456(arr, size);

                    quickSort(arr, 0, size - 1);

                    cout << "# Hasil akhir data sort Descending  : ";
                    printArray456Descending(arr, size);
                    cout << endl;

                    // proses sorting data menggunakan metode quick sort
                    selesai();
                    break;

                case 3:
                    case3();
                    break;

                default:
                    difault();
                    break;
                }

                cout << "\nQuick Sort lagi? [y/n] : ";
                cin >> ulangi;
            } while (ulangi == 'y');
            case3();
            break;

        case 6:
            do
            {
                system("clear");
                int size = sizeof(arr) / sizeof(arr[0]);
                system("clear");
                cout << "=========================================" << endl;
                cout << "|\t#6 Program Radix Sort\t|" << endl;
                cout << "=========================================" << endl;

                metode();

                switch (pil2)
                {
                case 1:
                    system("clear");
                    cout << "\n=========== Ascending Radix Sort ===========" << endl;
                    cout << "\nMasukkan jumlah data : ";
                    cin >> size;
                    cout << "\nInput data : " << endl;
                    for (int a = 0; a < size; a++)
                    {
                        cout << "# Data ke-" << a << " : ";
                        cin >> arr[a];
                    }
                    cout << "\n# Data sebelum dilakukan Quick Sort : ";
                    printArray456(arr, size);

                    radixsort(arr, size);

                    cout << "# Hasil akhir data sort Ascending   : ";
                    printArray456(arr, size);
                    cout << endl;

                    selesai();
                    break;

                case 2:
                    system("clear");
                    cout << "\n=========== Descending Radix Sort ===========" << endl;
                    cout << "\nMasukkan jumlah data : ";
                    cin >> size;
                    cout << "\nInput data : " << endl;
                    for (int a = 0; a < size; a++)
                    {
                        cout << "# Data ke-" << a << " : ";
                        cin >> arr[a];
                    }
                    cout << "\n# Data sebelum dilakukan Radix Sort : ";
                    printArray456(arr, size);

                    mergeSort(arr, 0, size - 1);

                    cout << "# Hasil akhir data sort Descending  : ";
                    printArray456Descending(arr, size);
                    cout << endl;

                    // proses sorting data menggunakan metode Radix sort
                    selesai();
                    break;

                case 3:
                    case3();
                    break;

                default:
                    difault();
                    break;
                }

                cout << "\nRadix Sort lagi? [y/n] : ";
                cin >> ulangi;
            } while (ulangi == 'y');
            case3();
            break;

        case 7:
            system("clear");
            namaklp();

            cout << "Terima Kasih Sudah Menggunakan Program Kami ^^ !!!" << endl;
            break;
        default:
            break;
        }
    } while (pil2 == 3);

    return 0;
}