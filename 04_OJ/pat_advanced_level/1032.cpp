/**
 * @file 1032.cpp
 * @author liuyang copy from tianqin
 * @brief 链表练习（“静态链表” 结构体数组存储）
 * 
 * 题目：Sharing
 * https://pintia.cn/problem-sets/994805342720868352/problems/994805460652113920
 * 说明：
 * 提示：听视频吧 5:29，主要是按照意图能熟练操纵链表即可。
 * OJ状态：答案正确
 * 
 * @version 0.1
 * @date 2021-12-03
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

const int MAX_SIZE = 100000;             // 题目已经给出N小于10的5次方。<cmath> pow(10, 5); Math.pow(10, 5);
const int FLAG_END_OF_LIST = -1;

struct Node {
    char data;
    int next;
    int flag;
};

int main(int argc, char const *argv[]) {
    int addr1, addr2, N;                // 第一个链表的地址 第二个链表的地址 总的节点数
    Node node[MAX_SIZE];
    cin >> addr1 >> addr2 >> N;
    int addr, next;
    char data;

    for (int i = 0; i < N; ++i) {
        cin >> addr >> data >> next;
        node[addr].data = data;
        node[addr].next = next;
        node[addr].flag = 0;
    }

    // 遍历一遍其中一个链表，并设置标记
    int p = addr1;
    while (p != FLAG_END_OF_LIST) {
        node[p].flag = 1;
        p = node[p].next;
    }

    // 遍历另外的链表
    int q = FLAG_END_OF_LIST;
    p = addr2;
    while (p != FLAG_END_OF_LIST) {
        if (node[p].flag == 1) {
            q = p;
            break;
        }
        p = node[p].next;
    }
    if (q != FLAG_END_OF_LIST)
        printf("%05d", q);// 注意格式，高位不够就补0
    else
        //printf("-1");
        printf("%d", FLAG_END_OF_LIST);
    
    return 0;
}