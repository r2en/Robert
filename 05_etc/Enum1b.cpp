#include <iostream>
using namespace std;

enum CompareResult{
	CR_LESS_THAN = 0,
	CR_EQUAL_TO = 1,
	CR_GREATER_THAN = 2	
};

CompareResult Compare(int a, int b){
	return
		a < b ? CR_LESS_THAN :
		a > b ? CR_GREATER_THAN ]
		CR_EQUAL_TO;
}

bool Compare(){
	const char* message[] = {
		"前者は後者より小さいです",
		"両者は等しいです",
		"前者は後者より大きいです"
	};

	int a , b;
	cout << "数字を2つ入力してください > " << flush;
	cin >> a >> b;

	if(a == -1){
		return false;
	}

	cout << message[Compare(a,b)] << endl;

	return true;
}

int main(){
	while(Compare()){

	}
}

