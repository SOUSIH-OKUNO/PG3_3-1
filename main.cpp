#include<stdio.h>
#include<list>
#include<iostream>

using namespace std;

int main() {
	//‰Šú˜Hü}
	list<const char*>rosen = { "Tokyo","Kanda","Akihabara","Okachimachi",
		"Ueno","Uguisudani","Nippori","Tabata","Komagome","Sugamo",
		"Otsuka","Ikebukuro","Mejiro","Takadanobaba","Shin-Okubo",
		"Shinjyuku","Yoyogi","Harajyuku","Shibuya","Ebisu","Meguro",
		"Gotanda","Osaki","Shinagawa","Tamachi","Hamamatsucho",
		"Shinbashi","Yurakucho" };

	for (list<const char*>::iterator itr = rosen.begin();
		itr != rosen.end();
		itr++)
	{
		cout << *itr << endl;
	}
	cout << endl;

	//¼“ú•é—¢’Ç‰ÁŒã‚Ì˜Hü}
	for (list<const char*>::iterator itr = rosen.begin();
		itr != rosen.end();
		itr++) {

		if (strcmp(*itr, "Nippori") == 0) {
			itr = rosen.insert(itr, "Nishi - Nippori");
			++itr;
		}

	}
	for (list<const char*>::iterator itr = rosen.begin();
		itr != rosen.end();
		itr++)
	{
		cout << *itr << endl;
	}
	cout << endl;


	//‚—ÖƒQ[ƒgƒEƒFƒC’Ç‰ÁŒã‚Ì˜Hü}
	for (list<const char*>::iterator itr = rosen.begin();
		itr != rosen.end();
		itr++) {

		if (strcmp(*itr, "Shinagawa") == 0) {
			itr = rosen.insert(itr, "Takanawa-Gateway");
			++itr;
		}

	}
	for (list<const char*>::iterator itr = rosen.begin();
		itr != rosen.end();
		itr++)
	{
		cout << *itr << endl;
	}

	return 0;
}

