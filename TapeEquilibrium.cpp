#include <algorithm>
#include <cmath>
#include <numeric>
#include <limits.h>

int solution(vector<int> &A) {
    // Implement your solution here
    int sum_l = 0, n = A.size(), res = INT_MAX, diff = 0;
    int sum_r = std::accumulate(A.begin(), A.end(), 0);
    for(int i = 1; i < n; ++i){
        sum_l += A[i-1]; 
        sum_r -= A[i-1];
        diff = (int)std::abs(sum_l - sum_r);
        if(diff < res)
            res = diff;
    }

    return res;
}
