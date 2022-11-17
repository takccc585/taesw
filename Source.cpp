#include<iostream>
#include<ctime>
using namespace std;
double powerA3(double);
double powerA2(double);
double powerA4(double);
double aMean(double, double);
double gMean(double, double);
double treangleP(double);
double treangleS(double);
double rectP(double, double, double, double);
double rectS(double, double, double, double);
int digitSum (int);
int main() {
	//1
	/*Описать функцию PowerA3(A), вычисляющую третью степень числа A
	и возвращающую ее(параметр вещественный).С помощью этой функции
	найти третьи степени пяти случайных чисел.*/
	/*srand(time(nullptr));
	for (int i = 1; i <= 5; i++) {
		int x = rand()%11;
		double x3 = powerA2(x);
		cout << "x = " << x << " x^3 = " << x3 <<endl;
	}*/
	//2
	/*Описать 2 функции powerA2(А), powerA4(A), вычисляющию вторую и четвертую степень числа 
	A и возвращающию эти степени(параметры являются вещественными).С помощью этих функций 
	найти вторую и четвертую степень пяти случайных чисел*/
	/*srand(time(nullptr));
	for (int i = 1; i <= 5; i++) {
		int x = rand() % 11;
		double x2 = powerA2(x);
		double x4 = powerA4(x);
		cout << "x = " << x << " x^2 = " << x2 << " x^4 = " << x4 << endl;
	}*/
	//3
	/*Описать 2 функции aMean(X, Y), gMean(X, Y), вычисляющие среднее арифметическое aMean = (X + Y) / 2 
	и среднее геометрическое gMean = √ X·Y двух положительных чисел X и Y(X и Y — входные параметры вещественного типа).
	С помощью этих функций найти среднее арифметическое и среднее геометрическое для 10 пар случайных чисел.*/
	/*srand(time(nullptr));
	for (int i = 1; i <= 10; i++) {
		double x1 = rand() % 101 * 0.1;
		double y1 = rand() % 101 * 0.1;
		cout << "x1 = " << x1 << " x2 = " << y1 << " sr = " << aMean(x1, y1) << " sqr = " << gMean(x1, y1) << endl;
	}*/
	//4
	/*Описать 2 функции triangleP(a) и triangleS(a), вычисляющие по стороне a равностороннего треугольника его периметр
	P = 3·a и площадь S = a 2 · √ 3 / 4 (параметры являются вещественными).
	С помощью этих функций найти периметры и площади трех равносторонних треугольников с данными сторонами(стороны ввести с клавиатуры).*/
	/*for (int i = 1; i <= 3; i++) {
		double a;
		cin >> a;
		cout << "a = " << a << " P = " << treangleP(a) << " S = " << treangleS(a) << endl;
	}*/
	//5
	/*Описать 2 функции rectP(x1, y1, x2, y2) и rectS(x1, y1, x2, y2), вычисляющие периметр P и площадь S
	прямоугольника со сторонами, параллельными осям координат, по координатам(x1, y1), (x2, y2) его противоположных
	вершин.С помощью этих функций найти периметры и площади трех прямоугольников с данными противоположными вершинами.*/
	/*srand(time(nullptr));
	for (int i = 1; i <= 3; i++) {
		double x1 = rand() % 101 * 0.1;
		double y1 = rand() % 101 * 0.1;
		double x2 = rand() % 101 * 0.1;
		double y2 = rand() % 101 * 0.1;
		cout << " x1 = " << x1 << " y1 = " << y1 << " x2 = " << x2 << " y2 = " << y2 << " P = " << rectP(x1, y1, x2, y2) << " S = " << rectS(x1, y1, x2, y2) << endl;
	}*/
	//6
	/*Описать функцию digitSum(K), находящую сумму цифр целого положительного числа K(K входной параметр целого типа).
	С помощью этой функции найти сумму цифр для каждого из пяти данных целых чисел.*/
	srand(time(nullptr));
	double x;
		cin >> x;
		cout <<"x = "<< x << "sum = " << digitSum(x) <<endl;
	return 0;
}
double powerA3(double a) {
	//1
	double res = a * a * a;
	return res;
}
double powerA2(double a) {
	//2
	double res = a * a ;
	return res;
}
double powerA4(double a) {
	//2
	double res = a * a * a * a;
	return res;
}
double aMean(double x, double y) {
	double sr = (x + y) / 2;
	return sr;
}
double gMean(double x, double y) {
	double sqr = sqrt(x * y);
	return sqr;
}
double treangleP(double x) {
	double P = x * 3;
	return P;
}
double treangleS(double x) {
	double S = ((x * x)*sqrt(3))/4;
	return S;
}
double rectP(double x1, double y1, double x2, double y2) {
	double P1 = abs(x2 - x1);
	double P2 = abs(y2 - y1);
	double P = (P1 + P2) * 2;
	return P;
}
double rectS(double x1, double y1, double x2, double y2) {
	double S1 = abs(x2 - x1);
	double S2 = abs(y2 - y1);
	double S = S1*S2;
	return S;
}
int digitSum(int k) {
	int sum = 0;
	while (k > 0) {
		int k1 = k % 10;
		sum += k1;
		k = k / 10;
	}
	return sum;
}