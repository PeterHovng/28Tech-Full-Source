#pragma once
#include<iostream>
#include<vector>
#include<string>
using namespace std;

//template<typename T>
//T findMax(T x, T y) {
//	if (x > y)
//		return x;
//	return y;
//};

template<class T>
class TowEleClass {
private:
	T x;
	T y;
public:
	TowEleClass(void);
	~TowEleClass(void);
	TowEleClass(T _x, T _y);
	T findMax();
};

