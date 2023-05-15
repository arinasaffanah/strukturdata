#include <iostream>
using namespace std;

// function menampilkan semua data
void show(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

// proses memilih pivot ujung list
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - i);

    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);

        quicksort(arr, low, p - 1);
        quicksort(arr, p + 1, high);
    }
}

int main()
{
    int size, data[10];
    cout << "Masukkan jumlah data : ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "\nMasukkan angka : ";
        cin >> data[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << "\n";
        cin >> data[i];
    }
    quicksort(data, 0, size);
    cout << "Hasil Pengurutan : ";
    for (int i = 0; i < size; i++)
    {
        cout << data[i] << " ";
    }
    show(data, size);
    return 0;
}