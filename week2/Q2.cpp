void insertionSort2(int n,vector <int>  ar) {
  for(int t=2; t<=n; t++) {
    int num = ar[t-1], i;
    for(i=t-2; ar[i]>num && i>=0; i--) {
      ar[i+1] = ar[i];
    }
    ar[i+1] = num;
    for(int j=0; j<n; j++)
      cout << ar[j] << " ";
    cout << endl;
  }
}