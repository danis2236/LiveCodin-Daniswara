// hitunng enrgi kinetik
#include <iostream>
using namespace std;
void hitungEK(float massa, float kecepatan) {
	float energiKinetik = 0.5 * massa * kecepatan * kecepatan;
	cout << "energikinetik:" << energiKinetik << "J" << endl;
}
int main() {
	float massa, kecepatan;
	// input massa keyboard
	cout << "massa (kg):";
	cin >> massa;
	// input kecepatan keyboard
	cout << "kecepatan (m/s):";
	cin >> kecepatan;
	//penjumlahan
	hitungEK(massa, kecepatan);

	return 0;
}