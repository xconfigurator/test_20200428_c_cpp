/*
整数环队列类 P58
2021/9/18

建立一个保存环形整数队列类，使队列为100哥整数长。编程演示队列的运算。
*/
#include <iostream>
using namespace std;
const int SIZE = 100;

class QType {
public:
    QType():head(0), tail(0) {}
    void Store(int num);
    int Fetch();
private:
    int queue[SIZE];    // holds the queue
    int head, tail;     // indice of head and tail
};

void QType::Store(int num) {
    if ((tail + 1) % SIZE == head) {// 只是关注head和tail的相对位置
        cout << "Queue is full" << endl;
        return;
    }
    tail = (tail + 1) % SIZE; // 关键！
    queue[tail] = num;
}

int QType::Fetch() {
    if (head == tail) {
        cout << "Queue is empty" << endl;
        return 0;       // or some other error indicator
    }
    head = (head + 1) % SIZE; // 关键！
    return queue[head];
}


int main(int argc, char const *argv[]) {
    QType q1, q2;
    for (int i = 1; i <= 10; i++) {
        q1.Store(i);
        q2.Store(i * i);
    }
    for (int i = 1; i <= 10; i++) {
        cout << "Dequeue1:" << q1.Fetch() << endl;
        cout << "Dequeue2:" << q2.Fetch() << endl;
    }
    return 0;
}
