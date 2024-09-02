//lab2 //q3

vector<int> rotateLeft(int d, vector<int> a) {

    int length=a.size();
    int shift=d%length;
    vector<int> LeftArray(length);
    for (int i=0;i<length;i++){
        LeftArray[i]=a[(i+shift)%length];
    }
    return LeftArray;
}

