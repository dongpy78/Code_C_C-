int in_n_so_dau_tien(int n) {
  int dem = 0, i = 2;
  while(dem < n) {
    if(nt(i)) {
      cout << i << " ";
      dem++;
    }
    i++;
  }
}