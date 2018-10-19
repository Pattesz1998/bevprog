#include "std_lib_facilities.h"

int main()
{
	double szam;
	string egys;
	bool L =true;
	vector<double> v;
	while(X)
	{
		cout << "Adj meg egy számot: " ;
		cin >> szam ;
		cout << "Adj meg egy mértékegységet (cm, m, in, ft): ";
		cin >> egys;

		if(unit=="m")
			v.push_back(szam);
		else if(unit=="cm")
			v.push_back(szam/100);
		else if(unit=="in")
			v.push_back((szam*2.54)/100);
		else if(unit=="ft")
			v.push_back((szam*12*2.54)/100);

		string A;
		cout << "Szeretnél megadni egy másik számot (igen/nem)? ";
		cin >> A;
		if (A=="nem")
			X=false;
		else if (A=="igen")
			X=true;	
	}
	double n;
	for(int i=0; i<v.size(); i++)
	{
		n=n+v[i];
	}
	sort(v);
	cout << "Legnagyobb érték: " << v.back() << "\n" << "A legkisebb érték: " << v[0] << "\n";
	cout << "Összegük: " << n <<"\n";
}
