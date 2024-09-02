//lab2 //q1

vector<int> reverseArray(vector<int> a) {
    int length = a.size();
    vector<int> reversedArray(length);

    for (int i = 0; i < length; i++) {
        reversedArray[i] = a[length - 1 - i];
    }

    return reversedArray;
}