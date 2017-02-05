#include <iostream>
using namespace std;

const int MAX_NAME = 16;

class Student{
public:
	char name[MAX_NAME + 1];
	int scoreJapanese;
	int scoreMath;
	int scoreEnglish;

	void Show(); 
};

void Student::Show(){
	cout << "名前 : " << name << endl
	<<"国語 : " << scoreJapanese << "点"
	", 数学 : " << scoreMath << "点"
	", 英語 : " << scoreEnglish << "点" << endl;
}

int main(){
	Student student[] = {
		{"相田はづき",65,56,76},
		{"篠山とおる",64,85,54},
		{"吉岡かなみ",76,43,76},
	};
	int size = sizeof student / sizeof *student;

	for(int i = 0; i < size; i++){
		student[i].Show();
	}
}