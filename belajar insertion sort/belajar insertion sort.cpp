#include <iostream>
using namespace std;

int arr[20];											// membuat array dengan panjang data 20
int n;													// membuat variable inputan n

void input() {									// procedure input
	while (true)
	{
		cout << "masukan jumlah data pada array : ";	// membuat inputan jumlah elemnt array
		cin >> n;										// memanggil variable inputan n

		if (n <= 20) {									// membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukan maksimal 20 elemen. \n"; // menampilkan pesan jika data lebih dari 20
		}
	}

}