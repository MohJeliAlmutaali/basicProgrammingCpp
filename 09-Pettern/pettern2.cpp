#include <iostream>
using namespace std;

int main (){
	int n;
	cout << "Masukkan jumlah baris: ";
	cin >> n;

	cout << "Pola 3" << endl;
	for (int i=1; i<=n; i++){
		for (int j=1; j<i; j++){
			cout << " ";
		}
	
		for (int k=n; k >= i; k-- ){
			cout << "*";
		}	cout << endl;
	}

	cout << "\nPola 4" << endl;
	for (int i=1; i<=n; i++){
		for (int j=n; j>i; j--){
			cout << " ";
		}
	
		for (int k=1; k <= i; k++ ){
			cout << "*";
		}	cout << endl;
	}



	return 0;
}
