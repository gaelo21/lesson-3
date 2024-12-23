int solution(vector<int> &A) {
    // Implement your solution here
    int n = A.size();
    vector<int> B(n+1, -1);
    for(int i = 0; i < n; ++i){
        B[A[i]-1] = A[i];
    }
    int nn = B.size(), res = 0;
    for(int i = 0; i < nn; ++i){
        if(B[i] == -1){
            res = i+1;
            break;
        }
    }

    return res;
}
