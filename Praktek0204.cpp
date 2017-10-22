#include <iostream>
using namespace std;

int main(){
	double luasrumah = 42;
	cout << "Luas Rumah			: " << luasrumah << " m2" <<endl;
	
	double lantaiparket = 193*1215;
	double luas1boxparket = lantaiparket*8/1000000;
	cout << "Luas 1 box parket		: " << luas1boxparket << " m2"<<endl;
	
	double jumlahboxparket = luasrumah/luas1boxparket;
	cout << "Jumlah box parket		: " << jumlahboxparket <<endl;
	
}
