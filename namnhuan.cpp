#include <iostream>

using namespace std;

int main() {
    int y;
    cin >> y;

    // Kiểm tra năm nhuận
    if (y % 4 == 0) {
        if (y % 100 == 0) {
            if (y % 400 == 0) {
                cout << "Day la nam nhuan" << endl;
            } else {
                cout << "Khong phai nam nhuan" << endl;
            }
        } else {
            cout << "Day la nam nhuan" << endl;
        }
    } else {
        cout << "Khong phai nam nhuan" << endl;
    }

    return 0;
}
