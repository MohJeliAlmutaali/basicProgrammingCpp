#include <iostream>
using namespace std;

int main (){
	int n;
	cout << "Masukkan jumlah baris: ";
	cin >> n;

	cout << "Pola 4" << endl;
	for (int i=1; i<=n; i++){
		for (int j=n; j>i; j--){
			cout << " ";
		}
	
		for (int k=1; k <= (i*2)-1; k++ ){
			cout << "*";
		}	cout << endl;
	}
	cout << "Pola 5" << endl;
	for (int i=1; i<=n; i++){
		for (int j=n; j<i; j++){
			cout << " ";
		}
	
		for (int k=1; k <= (i*2)-1; k++ ){
			cout << "*";
		}	cout << endl;
	}


	

}

