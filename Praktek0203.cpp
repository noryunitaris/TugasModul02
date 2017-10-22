#include <iostream>
using namespace std;

int main(){
	double ton=35273.92;
	
	double berat;
	cout<<"Masukkan Berapa Berat Sereal dalam 1 kotak kemasan(satuan ounce) = ";
	cin >> berat;
	
	double ounce= 1/ton;
	double beratTon =berat*ounce;	
}
