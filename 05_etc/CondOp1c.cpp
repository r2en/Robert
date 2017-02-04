#include <iostream>
using namespace std;

int main(){
	int a,b;

	cout << "2つ値を入力してください" << flush;
	cin >> a >> b;

	cout << "大きい方の値は";
	if(a>b){
		cout << a;
	}else{
		cout << b;
	}
	cout << "です" << endl;
}