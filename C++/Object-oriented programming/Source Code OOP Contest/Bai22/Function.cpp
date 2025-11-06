#include "Function.h"
template<class T>
TowEleClass<T>::TowEleClass(void) {

}

template<class T>
TowEleClass<T>::~TowEleClass(void) {

}

template<class T>
TowEleClass<T>::TowEleClass(T _x, T _y) {
	x = _x;
	y = _y;
}

template<class T>
T TowEleClass<T>::findMax() {
	if (x > y)
		return x;
	return y;
}

template class TowEleClass<int>;