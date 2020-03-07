#include <cmath>

 double func(int i, int n) {
 double alpha = (double)i / double(n);
 return pow(sin(alpha), 2);
 }

 int main() {
 const int n = 10;
 const int K = 10;
 double* matrix = new double[n*n];

 for (int k = 0; k < K; ++k) {
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n; ++i) {
            matrix[i*n + j] += pow(n, (double)k/K) / exp((double)k/K)
            * func(i, n) * func(j, n);
            }
        }
    }
 }