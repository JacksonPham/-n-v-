#include <iostream>
#include <fstream>
#include <string>

using namespace std;
bool KiemTraSNT(int n) {
	if (n < 2)
		return 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % 2 == 0)
			return 0;
	}
	return 1;
}
void main()
{
	fstream file;
	file.open("NguyenTo.txt", ios::out);
	int i = 2;
	int n = 1;
	cout << "cac so nguyen to trong txt:";
	while (n <= 50) {
		if (KiemTraSNT(i)) {
			file << i;
			n++;
		}
		i++;
	}
}