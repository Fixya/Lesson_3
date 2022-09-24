#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	/*Boolean1◦
. Дано целое число A. Проверить истинность высказывания: «Число A является положительным»*/
	/*int A;
	bool res;
	cin >> A;
	res = A > 0;
	cout << boolalpha << res << endl;*/
	
	/*Boolean2◦
. Дано целое число A. Проверить истинность высказывания: «Число A является нечетным».*/
	/*int A;
	bool res;
	cin >> A;
	res = A % 2 != 0;
	cout << boolalpha << res << endl;*/

	/*Boolean3◦
. Дано целое число A. Проверить истинность высказывания: «Число A является четным».*/
	/*int A;
	bool res;
	cin >> A;
	res = (A % 2) == 0;
	cout << boolalpha << res << endl;*/

	/*Boolean4◦
. Даны два целых числа: A, B. Проверить истинность высказывания:
«Справедливы неравенства A > 2 и B ≤ 3».*/
	/*int A;
	int B;
	bool res;
	cin >> A;
	cin >> B;
	res = A > 2 && B <= 3;
	cout << boolalpha << res << endl;*/

	/*Boolean5◦
. Даны два целых числа: A, B. Проверить истинность высказывания:
«Справедливы неравенства A ≥ 0 или B < −2»*/
	/*int A;
	int B;
	bool res;
	cin >> A;
	cin >> B;
	res = A >= 0 || B < -2;
	cout << boolalpha << res << endl;*/

	/*Boolean6◦
. Даны три целых числа: A, B, C. Проверить истинность высказывания: «Справедливо двойное неравенство A < B < C»*/
	/*int A;
	int B;
	int C;
	bool res;
	cin >> A;
	cin >> B;
	cin >> C;
	res = (A < B) && (B < C);
	cout << boolalpha << res << endl;*/

	/*Boolean7◦
. Даны три целых числа: A, B, C. Проверить истинность высказывания: «Число B находится между числами A и C».*/
	/*int A;
	int B;
	int C;
	bool res;
	cin >> A;
	cin >> B;
	cin >> C;
	res = ((B > A) && (B < C)) || ((B < A) && (B > C));
	cout << boolalpha << res << endl;*/

	/*Boolean8◦
. Даны два целых числа: A, B. Проверить истинность высказывания:
«Каждое из чисел A и B нечетное».*/
	/*int A;
	int B;
	bool res;
	cin >> A;
	cin >> B;
	res = ((A % 2) != 0) && ((B % 2) != 0);
	cout << boolalpha << res << endl;*/

	/*Boolean9◦
. Даны два целых числа: A, B. Проверить истинность высказывания:
«Хотя бы одно из чисел A и B нечетное».
*/
	/*int A;
	int B;
	bool res;
	cin >> A;
	cin >> B;
	res = ((A % 2) != 0) || ((B % 2) != 0);
	cout << boolalpha << res << endl;*/

	/*Boolean10◦
. Даны два целых числа: A, B. Проверить истинность высказывания: «Ровно одно из чисел A и B нечетное».
*/
	/*int A;
	int B;
	bool res;
	cin >> A;
	cin >> B;
	res = (A + B) % 2 != 0;
	cout << boolalpha << res << endl;*/

/*Boolean11◦
. Даны два целых числа: A, B. Проверить истинность высказывания: «Числа A и B имеют одинаковую четность».*/
/*int A;
int B;
bool res;
cin >> A;
cin >> B;
res = ((A % 2 == 0) && (B % 2 == 0)) || ((A % 2 != 0) && (B % 2 != 0));
cout << boolalpha << res << endl;*/

/*Boolean12◦
. Даны три целых числа: A, B, C. Проверить истинность высказывания: «Каждое из чисел A, B, C положительное»*/
/*int A;
int B;
int C;
bool res;
cin >> A;
cin >> B;
cin >> C;
res = (A > 0) && (B > 0) && (C > 0);
cout << boolalpha << res << endl;*/

/*Boolean13◦
. Даны три целых числа: A, B, C. Проверить истинность высказывания: «Хотя бы одно из чисел A, B, C положительное».*/
/*int A;
int B;
int C;
bool res;
cin >> A;
cin >> B;
cin >> C;
res = (A > 0) || (B > 0) || (C > 0);
cout << boolalpha << res << endl;*/

/*Boolean14◦
. Даны три целых числа: A, B, C. Проверить истинность высказывания: «Ровно одно из чисел A, B, C положительное».*/
/*int A;
int B;
int C;
bool res;
cin >> A;
cin >> B;
cin >> C;
res = ((A > 0) && (B < 0) && (C < 0)) || ((A < 0) && (B > 0) && (C < 0)) || ((A < 0) && (B < 0) && (C > 0));
cout << boolalpha << res << endl;*/

/*Boolean15◦
. Даны три целых числа: A, B, C. Проверить истинность высказывания: «Ровно два из чисел A, B, C являются положительными».*/
/*int A;
int B;
int C;
bool res;
cin >> A;
cin >> B;
cin >> C;
res = ((A > 0) && (B > 0) && (C < 0)) || ((A < 0) && (B > 0) && (C > 0)) || ((A > 0) && (B < 0) && (C > 0));
cout << boolalpha << res << endl;*/

/*Boolean16◦
. Дано целое положительное число. Проверить истинность высказывания: «Данное число является четным двузначным».*/
/*int A;
bool res;
cin >> A;
res = ((A % 2) == 0) && ((A / 10) != 0) && ((A / 100) == 0);
cout << boolalpha << res << endl;*/

/*Boolean17◦
. Дано целое положительное число. Проверить истинность высказывания: «Данное число является нечетным трехзначным».*/
/*int A;
bool res;
cin >> A;
res = ((A % 2) != 0) && ((A / 100) != 0) && ((A / 1000) == 0);
cout << boolalpha << res << endl;*/

/*Boolean18◦
. Проверить истинность высказывания: «Среди трех данных целых
чисел есть хотя бы одна пара совпадающих».*/
/*int A;
int B;
int C;
bool res;
cin >> A;
cin >> B;
cin >> C;
res = ((A == B) && (A != C) && (C != B)) || ((A != B) && (A == C) && (C != B)) || ((A != B) && (A != C) && (C == B));
cout << boolalpha << res << endl;*/

/*Boolean19◦
. Проверить истинность высказывания: «Среди трех данных целых
чисел есть хотя бы одна пара взаимно противоположных»*/
/*int A;
int B;
int C;
bool res;
cin >> A;
cin >> B;
cin >> C;
res = (-A == B) || (-B == C) || (-C == A);
cout << boolalpha << res << endl;*/
}