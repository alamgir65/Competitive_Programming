#include <iostream>
using namespace std;

long long totalAmountPaid(long long N) {
    long long total = 0;
    while (N >= 2) {
        long long x = N;
        total += x;
        N = N / 2 + N % 2; // Equivalent to ceil(N / 2.0)
    }
    return total;
}

int main() {
    long long N;
    cin >> N;
    cout << totalAmountPaid(N) << endl;
    return 0;
}
