#include <iostream>
#define MAX 10
#define MAX_1 26

using namespace std;

int Arr[MAX];
int Select[MAX];
char Arr_1[MAX_1];
char Select_1[MAX_1];
int temp[3];

void license_1(int Idx_1, int Cnt_1){

    if (Cnt_1 == 3) {
        for (int i =0; i <3; i++) {
            cout << temp[i];
        }
        for (int i =0; i <3; i++) {
           cout << Select_1[i];
        }
        cout << endl;
        return;
    }

    for (int i = Idx_1; i < MAX_1; i++) {
        Select_1[Cnt_1] = Arr_1[i];
        license_1(i, Cnt_1 +1);
    }
}

void license(int Idx, int Cnt) {

    if (Cnt == 3) {
        for (int i = 0; i < 3; i++) {
            temp[i] = Select[i];
        }
        license_1(0,0);
        return;
    }

    for (int i = Idx; i < MAX; i++) {
        Select[Cnt] = Arr[i];
        license(i, Cnt + 1);
    }
}

int main(void) {
    for (int i =0; i < MAX; i++) {
        Arr[i] = i;
    }

    char letter[] = "A";
    for (int i =0; i < MAX_1; i++) {
        Arr_1[i] = static_cast<char>(letter[0] + i);
    }
        license(0,0);
}
