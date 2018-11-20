#include "std_lib_facilities.h"

int main()
{
	try 
	{
		int SSz = 0;
		cout << ++SSz << ". " << "Success!\n";
		cout << ++SSz << ". " << "Success!\n";
		cout << ++SSz << ". " << "Success" << "!\n";
		cout << ++SSz << ". " << "Success" << "!\n";
		//Task5
		int res = 7; vector<int> v(10); v[5] = res; cout << ++SSz << ". " << "Success!\n";
		//Task6.
		vector<int> v1(10); v1[5] = 7; if (v[5]==7) cout << ++SSz << ". " << "Success!\n";
		//Task7.
		if (1) cout << ++SSz << ". " << "Success!\n"; else cout << ++SSz << ". " << "Fail!\n";
		//Task8.
		bool c = false; if (!c) cout << ++SSz << ". " << "Success!\n"; else cout << ++SSz << ". " << "Fail!\n";
		//Task9.
		string s = "ape"; bool c1 = "fool"<s; if (!c1) cout << ++SSz << ". " << "Success!\n";
		//Task10.
		string s1 = "ape"; if (s1!="fool") cout << ++SSz << ". " << "Success!\n";
		//Task11.
		string s2 = "ape"; if (s2!="fool") cout << ++SSz << ". " << "Success!\n";
		//Task12.
		string s3 = "ape"; if (s3<"fool") cout << ++SSz << ". " << "Success!\n";
		//Task13.
		vector<char> v2(5); for (int i=0; i<v2.size(); ++i) ; cout << ++SSz << ". " << "Success!\n";
		//Task14.
		vector<char> v3(5); for (int i=0; i<v3.size(); ++i) ; cout << ++SSz << ". " << "Success!\n";
		//Task15.
		string s4 = "Success!\n"; cout << ++SSz << ". " ; for (int i=0; i<s4.length(); ++i) cout << s4[i];
		//Task16.
		if (true) cout << ++SSz << ". " << "Success!\n"; else cout <<  ++SSz << ". " << "Fail!\n";
		//Task17.
		int x = 2000; int c2 = x; if (c2==2000) cout <<  ++SSz << ". " << "Success!\n";
		//Task18.
		string s5 = "Success!\n"; cout <<  ++SSz << ". " ; for (int i=0; i<10; ++i) cout << s5[i];
		//Task19.
		vector <int> v4(5); cout << ++SSz << ". " ; for (int i=0; i<v4.size(); ++i) ; cout << "Success!\n";
		//Task20.
		int i=0; int j = 9; while (j<10) ++j; if (j>i) cout << ++SSz << ". " << "Success!\n";
		//Task21.
		double x1 = 2; double d = 5/(x1); if (d!=2*x1+0.5) cout << ++SSz << ". " << "Success!\n";
		//Task22.
		string s6 = "Success!\n"; cout << ++SSz << ". " ; for (int i=0; i<=10; ++i) cout << s6[i];
		//Task23.
		int i1=0; int j1 = 9; while (j<10) ++j; if (j>i) cout << ++SSz << ". " << "Success!\n";
		//Task24.
		int x2 = 4; double d1 = 5/(x2-2); if (d1!=2*x2+0.5) cout << ++SSz << ". " << "Success!\n";
		//Task25.
		cout << ++SSz << ". " << "Success!\n";
		keep_window_open();
		return 0;
	}
	catch (exception& e) 
	{
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
		}
	catch (...) 
	{
		cerr << "Oops: unknown exception!\n";
		keep_window_open();
		return 2;
	}
}