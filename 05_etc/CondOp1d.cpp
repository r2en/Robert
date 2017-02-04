#include <iostream>
using namespace std;

int main(){
	int a,b;
	cout << "二つの値を入力してください" << flush;
	cin >> a >> b;

	int max;
	if(a > b){
		max = a;
	}else{
		max = b;
	}

	cout << "大きい方の値は" << max << "です" << endl;

}