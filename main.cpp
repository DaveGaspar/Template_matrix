#include "Matrix.h"

int main(){
	Matrix<int> a(3,3);
	a.init();
	a.print();
	Matrix<int> b(7,7);
	b.init();
	b.print();

	b = std::move(a);	

	b.print();
	return 0;
}