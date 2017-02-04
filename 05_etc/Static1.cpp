#include <iostream>
#include <algorithm>
using namespace std;

// address check

void CheckAddress_Sub();
void CheckAddress_Sub2();

void CheckAddress(){
	cout << "アドレスが常に一定かのチェック" << endl;

	CheckAddress_Sub();
	CheckAddress_Sub2();
	CheckAddress_Sub();
}

void CheckAddress_Sub(){
	static int a;
	int b;
	cout << "&a = " << (size_t)&a << endl
	<< "&b = " << (size_t)&b << endl;
}

void CheckAddress_Sub2(){
	cout << "in sub2" << endl;
	CheckAddress_Sub();
}

// check init
void CheckInitOnece_Sub();

void CheckInitOnece(){
	cout << endl << "初期化が一回しかされてないかのチェック" << endl;

	CheckInitOnece_Sub();
	CheckInitOnece_Sub();
}

void CheckInitOnece_Sub(){
	static int a = 3;
	int b = 3;
	cout << "a = " << a << endl
	<< "b = " << b << endl;

	++a;
	++b;
}

// check 0 
void CheckZeroInit_Sub();
void CheckZeroInit_Sub2();

void CheckZeroInit(){
	cout << endl << "0で初期化されるのかチェック" << endl;

	CheckZeroInit_Sub();
	CheckZeroInit_Sub2();
}

void CheckZeroInit_sub(){
	static int a, b, c, d;
	cout << a << "," << b << "," << c << "," << d << endl;
}

void CheckZeroInit_sub2(){
	int a,b,c,d;
	cout << a << "," << b << "," << c << "," << d << endl;
}

//invariant check

void CheckInvariant_Sub(int*& pa,int*& pb);
void CheckInvariant_Sub2();

void CheckInvariant(){
	cout << endl << "値が保証されているかのチェック" << endl;

	int *pa, *pb;
	CheckInvariant_Sub(pa,pb);
	CheckInvariant_Sub2();

	cout << "*pa = " << *pa << endl
	<< "*pb = " << *pb << endl; 
}

void CheckInvariant_Sub(int*& pa,int*& pb){
	static int a = 9;
	int b = 9;
	pa = &a;
	pb = &b;
}

void CheckInvariant_Sub2(){
	int dummy[100];
	fill_n(dummy,100,0);
}

int main(){
	CheckAddress();
	CheckInitOnece();
	CheckZeroInit();
	CheckInvariant();
}
