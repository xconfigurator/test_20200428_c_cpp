/*
整型数组模板类 P139
2021/9/18 

创建类模板，并分别实例化为int和float型。
*/
#include <iostream>
#include <stdlib.h> // exit(1);
using namespace std;

template<class T, class R>
class Array {
public:
    Array(int size);
    ~Array() {
        if (NULL != data) delete[] data;
    }
    R sum();
    R avg();
    void show();
    int add(T);
private:
    T* data;
    int size;
    int index;
};

template<class T, class R>
Array<T, R>::Array(int size) {
    data = new T[size];
    if (!data) {
        cout << "Insufficient memory - program ending" << endl;
        exit(1);
    }
    this->size = size;
    index = 0;
}

template<class T, class R>
R Array<T, R>::sum() {
    R sum = 0;
    for (int i = 0; i < index; i ++) {
        sum += data[i];
    }
    return sum;
}

template<class T, class R>
R Array<T, R>::avg() {
    return sum() / index;
}

template<class T, class R>
void Array<T, R>::show() {
    for (int i = 0; i < index; i ++) {
        cout << data[i] << " ";
    }
    cout << endl;
}

template<class T, class R>
int Array<T, R>::add(T value) {
    if (index == size) {
        return -1;          // array is full
    }
    data[index ++] = value;
    return 0;
}

int main(int argc, char const *argv[]) {
    // 100 elements of Array
    Array<int, long> numbers(100);
    // 200 elements of Array
    Array<float, float> values(200);

    for (int i = 0; i < 58; i++) {
        numbers.add(i);
    }
    numbers.show();
    cout << "sum = " << numbers.sum() << endl;
    cout << "avg = " << numbers.avg() << endl;

    for (int i = 0; i < 108; i++) {
        values.add(i * 100);
    }
    values.show();
    cout << "sum = " << values.sum() << endl;
    cout << "avg = " << values.avg() << endl;



    return 0;
}