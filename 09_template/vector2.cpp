#include <iostream>
#include <vector>
using namespace std;

void show(const int* array,int size){
    for(int i = 0; i < size; ++i){
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> v(5);

    for(int i = 0, size = v.size(); i < size; ++i){
        v[i] = i * i;
    }
    show(&v[0],v.size());
}