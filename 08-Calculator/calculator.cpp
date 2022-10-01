#include <iostream>
using namespace std;

int main()
{
	char aritmatika;
	float a, b, hasil;

	cout << "Selamat datang di aplikasi calculator" << endl;
	cout << "\nMasukkan angka pertama : ";
	cin >> a;
	cout << "Masukkan operator +,-,/ : ";
	cin >> aritmatika;
	cout << "Masukkan angka ke dua : ";
	cin >> b;
	
	
	switch (aritmatika) {
		case '+':
			hasil = a + b;
			cout << a << "+" << b << " = " << hasil << endl;	
			break;
		case '-':
			hasil = a - b;
			cout << a << "-" << b << " = " << hasil << endl;
			break;
		case '/':
			hasil = a / b;
			cout << a << "/" << b << " = " << hasil << endl;
			break;
		default:
			cout << "operator tidak tersedia";
			
	}

	return 0;
}
