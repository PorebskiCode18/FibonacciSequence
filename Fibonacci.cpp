#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;


int fibRecurssive(int n) {
    static int numberOfCalls = 0;
    numberOfCalls++;
    cout << "Call " << numberOfCalls << endl;
    if (n < 0) {
        return -1;
    }
    if (n <= 1) {
        return n;
    }
    return fibRecurssive(n - 1) + fibRecurssive(n - 2);
};
int fibLoop(int n) {
    if (n < 0) {
        return -1;
    }
    if (n <= 1) {
        return n;
    }
    int a = 0;
    int b = 1;
    int c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;    
}

int main() {
    int n;
    cin >> n;
    int result = fibRecurssive(n);
    cout << "Recursive: The Fibonacci after " << n << " terms is: " << result << endl;
    int result2 = fibLoop(n);
    cout << "Loop: The Fibonacci after " << n << " terms is: " << result2 << endl;

    return 0;
}

