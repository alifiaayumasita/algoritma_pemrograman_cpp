#include <iostream>
using namespace std;

int main(){
	
	int pesanan,harga,pesanlagi,total=0,pesananke=1;
	
	awal:
	cout<<"    Selamat datang di resto \"Asik\"   "<<endl;
	cout<<"MENU :"<<endl;
	cout<<" "<<endl;
	cout<<"Silahkan pilih menu: "<<endl;
	cout<<"1. Ayam Bakar	Rp. 20.000,-"<<endl;
	cout<<"2. Nasi Goreng	Rp. 15.000,-"<<endl;
	cout<<"3. Nasi Uduk 	Rp. 10.000,-"<<endl;
	cout<<"4. Sate		Rp. 25.000,-"<<endl;
	cout<<""<<endl;
	memesan:
	cout<<" "<<endl;	
	cout<<"Pilih menu ? ";
	cin>>pesanan;
	
		cout<<"Pesanan ke "<<pesananke++<<" adalah ";
	
    switch (pesanan)
    {
    	case 1:
    	cout<<"Ayam Bakar \n";
    	cout<<" "<<endl;
    	total=total+20000;
    	break;
    	
    	case 2:
    	cout<<"Nasi Goreng \n";
    	cout<<" "<<endl;
    	total=total+15000;
    	break;
    	
    	case 3:
    	cout<<"Nasi Uduk \n";
    	cout<<" "<<endl;
    	total=total+10000;
    	break;
    	
    	case 4:
    	cout<<"Sate \n";
    	cout<<" "<<endl;
    	total=total+25000;
    	break;
    	default:
    	cout<<"tidak ada ";
    	cout<<" "<<endl;
    	goto pesanlagi;
    	break;
	}
		pesanlagi:
		cout<<"Apakah mau pesan lagi? : (1 untuk Ya, 0 untuk tidak) ";
    	cin>>pesanlagi;	
    	if (pesanlagi == 1){
        goto memesan;
    } else if(pesanlagi == 0) {
    	cout<<" "<<endl;
        cout << "Total pesanan anda : Rp. "<<total<< endl;
		cout<<"Terima Kasih Atas Kunjungan Anda Di resto Asik";
        cout<<" "<<endl;
    } else {
    	cout<<" "<<endl;
    	cout<<"Masukan 1 atau 0 untuk melanjutkan"<<endl;
    	goto pesanlagi;
	}
	return 0;
}
