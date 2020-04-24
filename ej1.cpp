#include<iostream>
#include<complex>

using namespace std;

template <class TIPO>

inline void pendiente(TIPO& x1,TIPO& x2,TIPO& y1,TIPO& y2,TIPO& p)
{
	p=(y2-y1)/(x2-x1);
}

int main(void)
{
	float x1=0,y1=0,x2=0,y2=0,pend=0;
	cout << "\nIngrese el x del punto 1" << "\n";
	cin >> x1;
	cout << "\nIngrese el y del punto 1" << "\n";
	cin >> y1;
	cout << "\nIngrese el x del punto 2" << "\n";
	cin >> x2;
	cout << "\nIngrese el y del punto 2" << "\n";
	cin >> y2;
	pendiente(x1,x2,y1,y2,pend);
	cout << "La pendiente es:" << pend << "\n";
	return 0;
}

