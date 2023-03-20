#include <iostream>
#include <cstdlib>
#include <ctime>
#include <time.h>
#include <conio.h>
#include<locale.h>
#include <xlocmon>
using namespace std;
const int pole = 11;



char field[pole][pole];


void a() {
	cout << "  ";
	for (int i = 0; i < pole; i++) {
		cout << i << " ";
	}
	cout << endl;
	for (int i = 0; i < pole; i++) {
		cout << i << " ";
		for (int j = 0; j < pole; j++) {
			cout << field[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {

	a();
}
