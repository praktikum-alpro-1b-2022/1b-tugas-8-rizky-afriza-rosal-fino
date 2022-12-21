#include <iostream>
#include <string.h>
#include <windows.h>

using namespace std;

int main(){
    int nomor;
    char answer;

    do {
    string desk = "Pilih rumus yang ingin digunakan : \n"
    "1. Menambahkan dua matriks\n"
    "2. Mengalikan dua matriks\n"
    "3. Mencari nilai transpose matriks\n";
    cout << desk;

    }while (answer);
     cout << "Masukan pilihan rumus dalam angka: ";
     cin >> nomor;

     switch (nomor){
     case 1:
          {
        int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10];
  cout << "Masukkan jumlah baris matriks: ";
  cin >> m;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> n;
  cout << "Masukkan elemen matriks pertama: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cin >> matriks1[i][j];
    }
  }
  cout << "Masukkan elemen matriks kedua: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cin >> matriks2[i][j];
    }
  }
  cout << "hasil penjumlahan matriks: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      hasil[i][j] = matriks1[i][j] + matriks2[i][j];
      cout << hasil[i][j] << "\t";
    }
    cout << endl;
  }
          }
     break;
     case 2:
{

  int matriks1[10][10], matriks2[10][10], hasil[10][10];
  int i, j, k, m, n, p, q, jumlah = 0;
  cout << "Masukkan jumlah baris matriks pertama: ";
  cin >> m;
  cout << "Masukkan jumlah kolom matriks pertama: ";
  cin >> n;
  cout << "Masukkan jumlah baris matriks kedua: ";
  cin >> p;
  cout << "Masukkan jumlah kolom matriks kedua: ";
  cin >> q;
  if(n != p){
    cout << "Matriks tidak dapat dikalikan satu sama lain.\n";
  } else {
    cout << "Masukkan elemen matriks pertama: \n";
    for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
        cin >> matriks1[i][j];
      }
    }
    cout << "Masukkan elemen matriks kedua: \n";
    for(i = 0; i < p; i++){
      for(j = 0; j < q; j++){
        cin >> matriks2[i][j];
      }
    }
    for(i = 0; i < m; i++){
      for(j = 0; j < q; j++){
        for(k = 0; k < p; k++){
          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }
    cout << "Hasil perkalian matriks: \n";
    for(i = 0; i < m; i++){
      for(j = 0; j < q; j++){
        cout << hasil[i][j] << "\t";
      }
      cout << endl;
    }
  }
}
     break;
     case 3:
        {
    int i, j, m, n, matriks[10][10], transpose[10][10];

  cout << "Masukkan jumlah baris matriks: ";
  cin >> m;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> n;

  cout << "Masukkan elemen matriks\n";
  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      cin  >> matriks[i][j];
    }
  }

  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      transpose[j][i] = matriks[i][j];
    }
  }

  cout << "Hasil Transpose Matriks: \n";
  for (i = 0; i < n; i++){
    for (j = 0; j < m; j++){
      cout << transpose[i][j] << "\t";
    }
    cout << endl;
  }
}
break;
 default:
        cout << "Pilih angka yang ada dilist\n" ;
    break;
     }
     cout << endl;
     cout << "Ingin memilih rumus lain (y/t)?";
     cin >> answer;
     cout << endl;

      while (answer != 't');
      cout << "Thx";

 return 0;
}
