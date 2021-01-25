#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    char new_s[29][20] = {{'\0'}};
    for (int i = 0; i < 29; i++) {
        cin >> new_s[i];
    }
    char old_s[26][20] = {{'\0'}};
    for (int i = 0; i < 26; i++) {
        cin >> old_s[i];
    }
    for (int i = 0; i < 26; i++) {
        bool flag = 0;
        for (int j = 0; j < 29; j++) {
            if (!strcmp(old_s[i], new_s[j])) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout << "未接龙：";
            for (int k = 0; k < 20; k++) {
                cout << old_s[i][k];
            }
            cout << endl;
        }
    }
    for (int i = 0; i < 29; i++) {
        bool flag = 0;
        for (int j = 0; j < 26; j++) {
            if (!strcmp(old_s[j], new_s[i])) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout << "新添加：";
            for (int k = 0; k < 20; k++) {
                cout << new_s[i][k];
            }
            cout << endl;
        }
    }

    //随机分组程序
    char gp[4][10][20] = {{'\0'}};
    srand(20210128);
    int a, b, c, d;
    a = b = c = d = 0;
    for (int i = 0; i < 29; i++) {
        int x = rand();
        if (x % 4 == 0) {
            strcpy(gp[0][a++], new_s[i]);
        }
        if (x % 4 == 1) {
            strcpy(gp[1][b++], new_s[i]);
        }
        if (x % 4 == 2) {
            strcpy(gp[2][c++], new_s[i]);
        }
        if (x % 4 == 3) {
            strcpy(gp[3][d++], new_s[i]);
        }
    }
    for (int i = 0; i < 4; i++) {
        cout << "组别" << i << ':' << endl;
        for (int j = 0; j < 10; j++) {
            cout << gp[i][j] << endl;
        }
    }
    return 0;
}