#include <iostream>
#include <algorithm>

using namespace std;
int cekduplikat(int arr[], int n) {

    std::sort(arr, arr + n);


    int indexAwal = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] != arr[i + 1]) {
            arr[indexAwal++] = arr[i];
        }
    }


    arr[indexAwal++] = arr[n - 1];

    return indexAwal;
}

int main() {

    int arr[] = {2, 1, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int newSize = cekduplikat(arr, n);


    std::cout << "Array Terdiri Dari: ";
    for (int i = 0; i < newSize; ++i) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
