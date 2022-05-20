/*
@author liuyang
@since 2021/2/20

PAT 1028
List Sorting
https://pintia.cn/problem-sets/994805342720868352/problems/994805468327690240

参考视频：
https://www.bilibili.com/video/BV1Ty4y1n7JH?p=7&spm_id_from=pageDriver
22:35

Sample Input 1:
3 1
000007 James 85
000010 Amy 90
000001 Zoe 60

Sample Output 1:
000001 Zoe 60
000007 James 85
000010 Amy 90

Sample Input 2:
4 2
000007 James 85
000010 Amy 90
000001 Zoe 60
000002 James 98

Sample Output 2:
000010 Amy 90
000002 James 98
000007 James 85
000001 Zoe 60

Sample Input 3:
4 3
000007 James 85
000010 Amy 90
000001 Zoe 60
000002 James 90

Sample Output 3:
000001 Zoe 60
000007 James 85
000002 James 90
000010 Amy 90
*/
#include <iostream>
#include <string.h>     // strcmp
#include <algorithm>    // sort
using namespace std;

const int MAX_SIZE = 100000;

struct record {
    int ID;
    char name[9];
    int grade;
};

// if C = 1 then the records must be sorted in increasing order according to ID's;
bool cmp1(const record& L, const record& R) {
    return L.ID < R.ID;
}

// if C = 2 then the records must be sorted in non-decreasing order according to names; 
bool cmp2(const record& L, const record& R) {
    int r = strcmp(L.name, R.name);
    if (r == 0) {
        return L.ID < R.ID;
    } else {
        if (r < 0) {
            return true;
        } else {
            return false;
        }
    }
}

// if C = 3 then the records must be sorted in non-decreasing order according to grades. If there are several students who have the same name or grade, they must be sorted according to their ID's in increasing order.
bool cmp3(const record& L, const record& R) {
    if (L.grade == R.grade) {
        return L.ID < R.ID;
    } else {
        return L.grade < R.grade;
    }
}

int main() {
    int cmpNo, n;
    record records[MAX_SIZE];
    while(cin >> n >> cmpNo) {
        for (int i = 0; i < n; ++i) {
            cin >> records[i].ID >> records[i].name >> records[i].grade;
        }
        if (cmpNo == 1) {
            sort(records, records + n, cmp1);
        } else if (cmpNo == 2) {
            sort(records, records + n, cmp2);
        } else if (cmpNo == 3) {
            sort(records, records + n, cmp3);
        }
        for (int i = 0; i < n; ++i) {
            // 固定输出6位高位填0
            printf("%06d %s %d\n", records[i].ID, records[i].name, records[i].grade);
            //printf("%0*d %s %d\n", 6, records[i].ID, records[i].name, records[i].grade);// 20220520 ok
            //printf("%0*d %s %d\n", 10, records[i].ID, records[i].name, records[i].grade);// 20220520 ok
        }
    }
    return 0;
}