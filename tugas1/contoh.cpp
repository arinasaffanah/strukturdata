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

// merge sort
// int kiri, kanan, tengah, k, n, n1, n2;
// int left, right, mid, k, n, n1, n2;

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
        // printArray123
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
            // void tahapan
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

void merge(int arr[], int p, int q, int r)
{

    /*
        p = left
        q = middle
        r = right
        n1 = jumlah elemen left
        n2 = jumlah elemen right
        k = key
    */
    int n1 = q - p + 1;
    int n2 = r - q;

    /*
    L = array left dengan jumlah array n1
    R = array right dengan jumlah array n2
    */
    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];

    // inisialisasi ulang
    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    // saat salah satu ujung L atau M, pilih yang lebih besar
    // tempatkan mereka pada posisi yang benar di A[p..r]
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

void mergeSort(int arr[], int l, int r)
{
    // Membagi array menjadi dua subarray, lalu diurutkan dan digabung/disatukan
    if (l < r)
    {
        // m is the point where the array is divided into two subarrays
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Merge the sorted subarrays
        merge(arr, l, m, r);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void printArrayDescending(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
        cout << arr[i] << " ";
    cout << endl;
}

// quick sort
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high)
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

            // jika elemen lebih kecil dari pivot, maka tukar dengan elemen yang lebih besar yang ditunjukkan oleh i
            i++;

            // tukar (swap) elemen i dengan elemen j
            swap(&arr[i], &arr[j]);
        }
    }

    // tukar pivot dengan elemen yang lebih besar di i
    swap(&arr[i + 1], &arr[high]);

    // kembalikan titik partisinya
    return (i + 1);
}

int partitionDescending(int arr[], int low, int high)
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

            // jika elemen lebih kecil dari pivot, maka tukar dengan elemen yang lebih besar yang ditunjukkan oleh i
            i++;

            // tukar (swap) elemen i dengan elemen j
            swap(&arr[i], &arr[j]);
        }
    }

    // tukar pivot dengan elemen yang lebih besar di i
    swap(&arr[i + 1], &arr[high]);

    // kembalikan titik partisinya
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        // cari pivot hingga elemen yang lebih kecil di sebelah kiri pivot dan yang lebih besar di kanan pivot
        int pi = partition(arr, low, high);

        // pemanggilan rekursif di sebelah kiri pivot
        quickSort(arr, low, pi - 1);

        // pemanggilan rekursif di sebelah kanan pivot
        quickSort(arr, pi + 1, high);
    }
}

// radix

int getMax(int arr[], int n)
{
    // mencari elemen terbesar
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

void countingSort(int arr[], int size, int place)
{
    const int max = 10;
    int output[size];
    int count[max];

    for (int i = 0; i < max; ++i)
        count[i] = 0;

    // menghitung jumlah elemen
    for (int i = 0; i < size; i++)
        count[(arr[i] / place) % 10]++;

    // Hitung jumlah kumulatif
    for (int i = 1; i < max; i++)
        count[i] += count[i - 1];

    // urutkan elemen
    for (int i = size - 1; i >= 0; i--)
    {
        output[count[(arr[i] / place) % 10] - 1] = arr[i];
        count[(arr[i] / place) % 10]--;
    }

    for (int i = 0; i < size; i++)
        arr[i] = output[i];
}

void radixsort(int arr[], int size)
{
    int max = getMax(arr, size);

    // mengurutkan elemen sesuai tempatnya
    for (int place = 1; max / place > 0; place *= 10)
        countingSort(arr, size, place);
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
        // system("clear");
        do
        {
            system("clear");
            int size = sizeof(arr) / sizeof(arr[0]);
            system("clear");
            cout << "=========================================" << endl;
            cout << "|\t#4 Program Merge Sort\t|" << endl;
            cout << "=========================================" << endl;

            cout << "\nPilih metode MergeMerge Sort : " << endl;
            cout << "1. Ascending \n2. Descending \n3. Kembali" << endl;
            cout << "\nMasukkan pilihan anda [1/2/3] : ";
            cin >> pil2;

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
                printArray(arr, size);

                mergeSort(arr, 0, size - 1);

                cout << "# Hasil akhir data sort Ascending  : ";
                printArray(arr, size);
                cout << endl;

                cout << "\n=============== Program Selesai ==============" << endl;
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
                printArray(arr, size);

                mergeSort(arr, 0, size - 1);

                cout << "# Hasil akhir data sort Descending  : ";
                printArrayDescending(arr, size);
                cout << endl;

                // proses sorting data menggunakan metode selection sort
                // descending

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

            cout << "\nInsertion Sort lagi? [y/n] : ";
            cin >> ulangi;
        } while (ulangi == 'y');
        system("clear");
        namaklp();
        menu();
        break;
        // mergesort();
    case 5:
        do
        {
            system("clear");
            int size = sizeof(arr) / sizeof(arr[0]);
            system("clear");
            cout << "=========================================" << endl;
            cout << "|\t#5 Program Quick Sort\t|" << endl;
            cout << "=========================================" << endl;

            cout << "\nPilih metode Quick Sort : " << endl;
            cout << "1. Ascending \n2. Descending \n3. Kembali" << endl;
            cout << "\nMasukkan pilihan anda [1/2/3] : ";
            cin >> pil2;

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
                printArray(arr, size);

                quickSort(arr, 0, size - 1);

                cout << "# Hasil akhir data sort Ascending   : ";
                printArray(arr, size);
                cout << endl;

                cout << "\n=============== Program Selesai ==============" << endl;
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
                printArray(arr, size);

                quickSort(arr, 0, size - 1);

                cout << "# Hasil akhir data sort Descending  : ";
                printArrayDescending(arr, size);
                cout << endl;

                // proses sorting data menggunakan metode selection sort
                // descending

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

            cout << "\nInsertion Sort lagi? [y/n] : ";
            cin >> ulangi;
        } while (ulangi == 'y');
        system("clear");
        namaklp();
        menu();
        // quicksort();
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

            cout << "\nPilih metode Radix Sort : " << endl;
            cout << "1. Ascending \n2. Descending \n3. Kembali" << endl;
            cout << "\nMasukkan pilihan anda [1/2/3] : ";
            cin >> pil2;

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
                printArray(arr, size);

                radixsort(arr, size);

                cout << "# Hasil akhir data sort Ascending   : ";
                printArray(arr, size);
                cout << endl;

                cout << "\n=============== Program Selesai ==============" << endl;
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
                printArray(arr, size);

                mergeSort(arr, 0, size - 1);

                cout << "# Hasil akhir data sort Descending  : ";
                printArrayDescending(arr, size);
                cout << endl;

                // proses sorting data menggunakan metode selection sort
                // descending

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

            cout << "\nInsertion Sort lagi? [y/n] : ";
            cin >> ulangi;
        } while (ulangi == 'y');
        system("clear");
        namaklp();
        menu();
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