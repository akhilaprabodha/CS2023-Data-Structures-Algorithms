#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <climits>

using namespace std;

int lilysHomework(vector<int> arr_orig) {
    int result = arr_orig.size(); 
    vector<int> sorted(arr_orig);
    sort(sorted.begin(), sorted.end(), greater<int>());

    for (int rev = 0; rev < 2; rev++) {
        int curSwap = 0;
        if (rev) {
            reverse(sorted.begin(), sorted.end());
        }
        vector<int> arr(arr_orig);
        unordered_map<int, size_t> val2pos;
        for (size_t i = 0; i < arr.size(); i++) {
            val2pos[arr[i]] = i;
        }

        for (size_t i = 0; i < arr.size(); i++) {
            if (arr[i] == sorted[i]) {
                continue;
            }
            int ai = arr[i];
            int si = sorted[i];

            swap(arr[i], arr[val2pos[si]]);
            curSwap++;

            val2pos[ai] = val2pos[si];
            val2pos[si] = i;
        }
        result = min(result, curSwap);
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = lilysHomework(arr);

    cout << result << "\n";

    return 0;
}
