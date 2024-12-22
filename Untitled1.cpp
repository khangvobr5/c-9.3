#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n, currentLength = 0;
    cout << "Nhap so phan tu ban dau: ";
    cin >> n;
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        currentLength++;
    }
    cout << "Mang ban dau: ";
    for (int i = 0; i < currentLength; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int deleteIndex;
    cout << "Nhap vi tri muon xoa: ";
    cin >> deleteIndex;
    if (deleteIndex >= 0 && deleteIndex < currentLength) {
        for (int i = deleteIndex; i < currentLength - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        currentLength--;
        cout << "Mang sau khi xoa: ";
        for (int i = 0; i < currentLength; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Vi tri khong hop le!" << endl;
    }
    return 0;
}

