long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long> arr(n + 1, 0);
    for (const vector<int>& query : queries) {
        int a = query[0];
        int b = query[1];
        int k = query[2];
        if (a >= 1 && a <= n) {
            arr[a - 1] += k;
        }
        if (b >= 1 && b <= n) {
            arr[b] -= k;
        }
    }

    long long max_value = 0;
    long long current_sum = 0;

    for (long long value : arr) {
        current_sum += value;
        max_value = max(max_value, current_sum);
    }

    return max_value;
}