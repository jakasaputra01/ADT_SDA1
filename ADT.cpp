#include <iostream>
using namespace std;

int main()
{
	int s1, s2, k;
	
	cout << "Nama	: Jaka Saputra" << endl;
	cout << "NPM	: G1A016020" << endl;
	cout << "Mencari Keliling Jajar genjang" << endl <<endl;
	
	cout << "Masukkan panjang sisi a = ";
	cin >> s1;
	
	cout << "Masukkan panjang sisi b = ";
	cin >> s2;
	cout << endl;
	
	k= 2 * (s1+s2);
	cout << "Keliling jajar genjang adalah = " << k <<endl;
	
	return 0;
}
Keterangan :
-#include 
Kata yang diawali tanda # merupakan preprocessor, bukan kode yang dieksekusi, tetapi indikasi untuk compiler. 
-using namespace std;
using namespace std; menyatakan bahwa compiler pada program menggunakan namespace bernama std. namespace berfungsi mengelompokan beberapa elemen kedalam sebuah nama. std adalah nama bawaan yang digunakan pada semua pustaka standar C++.
-int main()
int main() merupakan titik awal dimana seluruh program C++ akan mulai dieksekusi. Isi dari fungsi main akan selalu dieksekusi pertama kali.
-s1, s2, k merupakan variabel.
-cout 
cout adalah standar output stream dalam C++.
-cin
-cin adalah standar input stream dalam C++.
endl;
-endl; adalah perintah untuk pindah baris atau enter.
-return 0;
-return 0; adalah perintah yang berfungsi untuk menghapus memory pada ram setelah program selesai dijalankan.