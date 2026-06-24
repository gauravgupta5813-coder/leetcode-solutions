#include <vector>
#include <numeric>

using namespace std;

constexpr int MOD = 1e9 + 7;
static int m;

static inline vector<int> multiply(const vector<int>& A, const vector<int>& B) {
    vector<int> C(m * m, 0);
    for (int i = 0; i < m; ++i) {
        for (int k = 0; k < m; ++k) {
            if (A[i * m + k] == 0) continue;
            for (int j = 0; j < m; ++j) {
                C[i * m + j] = (C[i * m + j] + 1LL * A[i * m + k] * B[k * m + j]) % MOD;
            }
        }
    }
    return C;
}

static vector<int> power(vector<int> M, int p) {
    vector<int> res(m * m, 0);
    for (int i = 0; i < m; ++i) res[i * m + i] = 1; // Identity matrix
    
    while (p > 0) {
        if (p & 1) res = multiply(res, M);
        M = multiply(M, M);
        p >>= 1;
    }
    return res;
}

class Solution {
public:
    int zigZagArrays(int n, int l, int r) {
        m = r - l + 1;
        if (n == 1) return m;
        
        vector<int> U(m * m, 0), L(m * m, 0);
        for (int i = 0; i < m; ++i) {
            for (int j = i + 1; j < m; ++j) U[i * m + j] = 1;
            for (int j = 0; j < i; ++j) L[i * m + j] = 1;
        }
        
        int steps = n - 1;
        int half_steps = steps >> 1;
        
        vector<int> UL = multiply(U, L);
        vector<int> P = power(UL, half_steps);
        
        if (steps & 1) {
            P = multiply(L, P);
        }
        
        long long total_sequences = 0;
        for (int val : P) {
            total_sequences = (total_sequences + val) % MOD;
        }
        
        return (total_sequences * 2) % MOD;
    }
};