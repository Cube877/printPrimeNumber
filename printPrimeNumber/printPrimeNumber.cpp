// printPrimeNumber.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <cmath> ����������//������ѧ����
#include "stdlib.h"
#include "iostream"

using namespace std;

//�жϸ����Ƿ�Ϊ����
//return��
//0����������
//1��������
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
		if (i % 2 != 0) {                //��2��������,����ż��
			i++;
		}
	}

	system("pause");
	return 0;
}



