#include "IADLib.hpp"

void tausche(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;    
}
void tausche(int a[]) {
    int temp = a[0];
    a[0] = a[1];
    a[1] = temp;
}
int* tauscheVal(int a[]) {
    int temp = a[0];
    a[0] = a[1];
    a[1] = temp;
    return a;
}