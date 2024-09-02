void insertionSort1(int n, vector <int>  ar) {
  int num = ar[n-1], i;
  for(i=n-2; ar[i]>num && i>=0; i--) {
    ar[i+1] = ar[i];
    for(int j=0; j<n; j++)
      cout << ar[j] << " ";
    cout << endl;
  }
  ar[i+1] = num;
  for(int j=0; j<n; j++)
    cout << ar[j] << " ";
  cout << endl;
}