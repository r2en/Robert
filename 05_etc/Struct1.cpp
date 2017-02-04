#include <iostream>
using namespace std;

const int MAX_NAME = 16;

struct Student{
	char name[MAX_NAME + 1];
	int scoreJapanese;
	int scoreMath;
	int scoreEnglish;
};

void Show(const Student &student){
	cout << "name: " << student.name << endl
		<< "japanese: " << student.scoreJapanese << "点"
		 ",math: " << student.scoreMath << "点"
		 ",english: " << student.scoreEnglish << "点" << endl;
}

int main(){
	Student student[] = {
		{"青山和樹",73,54,65},
		{"飯島ゆうた",34,75,32},
		{"上田勝徳",54,76,97}
	};

	int size = sizeof student / sizeof *student;

	for(int i = 0; i < size; ++i){
		Show(student[i]);
	}
}