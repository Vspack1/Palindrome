#include <iostream>  

using namespace std;

bool isPalindrome(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

void printPalindromes(int n) {
    cout << "Cac so palindrome tu 1 den " << n << " la: ";
    for (int i = 1; i <= n; i++) {
        if (isPalindrome(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    printPalindromes(n);
    return 0;
}