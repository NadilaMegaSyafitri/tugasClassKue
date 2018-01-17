#include <iostream>
#include <string>
//Nama : Nadila Mega Syafitri
//Npm : 16710043
using namespace std;

class kue{
		public :
			int jumlkue;
			string jeniskue,bentukkue,hrg;
			void topping(string rasa);
};
	
void kue::topping(string rasa){
	
	cout<< " Rasa Kue :"<< rasa << endl;
}
int main (){
	kue kuebasah, kuekering;
	
	kuekering.jumlkue = 150;
	kuekering.jeniskue = "nastar";
	kuekering.bentukkue = "kecil";
	kuekering.hrg = "Rp 18.000 sd Rp 35.000";
	kuebasah.jumlkue = 150;
	kuebasah.jeniskue = "bolu";
	kuebasah.bentukkue = "sedang";
	kuebasah.hrg = "Rp 30.000 sd Rp 60.000";
	
	cout << "Kue Basah  "<<endl;
	cout << "Jumlah Kue: "<<kuebasah.jumlkue<<" kotak"<<endl;
	cout << "Jenis kue  : "<<kuebasah.jeniskue<<endl;
	cout << "Bentuk kue  : "<<kuebasah.bentukkue<<endl;
	cout << "Harga Kue: "<<kuebasah.hrg<<" kotak"<<endl;
	
	kuebasah.topping("original");

}
