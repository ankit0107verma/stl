#include <iostream>
using namespace std;
template <class X>
void swap(X &a, X &b)
{
	x tp;
	tp = a;
	a = b;
	b = tp;
	cout<< "Swapped elements values of a and b are " <<a<< " and "<< b <<"respectively"<< endl;
}

int main()
{

	int a = 10, b =20;
	float c =10.5, d = 20.5;
	swap(a , b);
	swap(c , d);
	return 0;
}