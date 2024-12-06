#include <iostream>  

using namespace std;

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "Cac so palindrome tu 1 den " << n << " la: ";

    for (int i = 1; i <= n; i++) {
        int original = i;
        int reversed = 0;

        int num = i;
        while (num > 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }

        if (original == reversed) {
            cout << original << " ";
        }
    }
    cout << endl;

    return 0;
}