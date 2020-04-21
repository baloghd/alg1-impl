#include "stack.h"

Stack::Stack(int m) {
	A = new int[m];
}

Stack::~Stack() {
	delete [] A;
}
