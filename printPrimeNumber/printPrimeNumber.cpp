// printPrimeNumber.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <cmath> 　　　　　//定义数学函数
#include "stdlib.h"
#include "iostream"

using namespace std;

//判断该数是否为质数
//return：
//0：不是质数
//1：是质数
int checkPrimeNumber(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n%i == 0) {
			return 0;
		}
		if (i % 2 != 0) {
			i++;
		}
	}
	return 1;
}

int main()
{
	int totalnum = 100;
	for (int i = 2; i <= totalnum; i++) {
		if (checkPrimeNumber(i) == 1) {
			cout << "PrimeNumber: " << i << endl;
		}
		if (i % 2 != 0) {                //若2不是因数,跳过偶数
			i++;
		}
	}

	system("pause");
	return 0;
}



