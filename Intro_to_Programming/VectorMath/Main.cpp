#include "VectorMath.h"

int main()
{
	Vector2<int> a = { 1, 0 };
	
	Vector2<int> b = { 0, 1 };

	Vector2<int> c = { 1, 1 };

	assert(a + b == c);

	Vector2<int> d = { 1,1 };

	d.Mag();

	system("pause");
	return 0;
}