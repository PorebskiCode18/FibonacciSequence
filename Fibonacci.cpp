#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;

class Fibonacci {

public:
    
    int fib(int n) {
        static int numberOfCalls = 0;
        numberOfCalls++;
        cout << "Call " << numberOfCalls << endl;
        if (n < 0) {
            return -1;
        }
        if (n <= 1) {
            return n;
        }
        return fib(n - 1) + fib(n - 2);
    }
};

int main() {
    int n;
    cin >> n;

    Fibonacci f;
    int result = f.fib(n);
    cout << "The Fibonacci of " << n << " is: " << result << endl;
    return 0;
}

