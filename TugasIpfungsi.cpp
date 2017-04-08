#include <iostream>
using namespace std;

bool iswithinrange (float ip, int max, int min);
void cetak ();

float ip, Rataip;
int jmlmhs, mhsllus, mhstdkllus;
bool valid;

int main() {
	do {
		cout <<"masukan nilai : " ;
		cin >> ip ;
		valid = iswithinrange(ip,4,0);
	if (valid) {
		if (ip >=2.75) {
		mhsllus++;
	}else{
		mhstdkllus++;
	}
	Rataip = Rataip + ip;
	jmlmhs++;
	}else{
		cout << "===========================================" << endl;
		cout << "tidak ada data" << endl;
	}
}
while (ip != -999);
cetak();
}
bool iswithinrange (float ip, int max,int min) {
	if (ip > max || ip <= 0) {
		return false;
	}
	return true;
}
void cetak () {
	cout << "==============================================" <<endl;
	cout <<"Banyaknya Mahasiswa : " << jmlmhs << endl;
	cout <<"Banyaknya Jumlah Lulus : " << mhsllus << endl;
	cout <<"Banyaknya yang Tidak Lulus : " << mhstdkllus << endl;
	cout <<"Rata-rata Nilai IP : " << (Rataip/jmlmhs) << endl;
	
}