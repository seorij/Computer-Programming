/*
 HW5a_2.c 재제출
 컴퓨터학과 20170978 정설아
 컴퓨터프로그래밍 03분반
 */
#include <stdio.h>
void initArr(int arr[4][4]) {
    int i, j, n = 1;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            arr[i][j] = n++;
        }
    }
}
void printArr(int arr[4][4]) {
    int i, j;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
}
void lotateArr(int arrA[4][4], int arrB[4][4], int n) {
    int i, j;

    for(i = 0; i < 4; i++)
        for(j = 0; j < 4; j++) {
            if(n == 90)
                arrB[j][3-i] = arrA[i][j];
            else if(n == 180)
                arrB[3-i][3-j] = arrA[i][j];
            else if(n == 270)
                arrB[3-j][i] = arrA[i][j];
            else
                arrB[i][j] = arrA[i][j];
        }
}
int main(void) {
    int arrA[4][4] = {0};
    int arrB[4][4] = {0};
    int i = 90;
    
    initArr(arrA);
    printArr(arrA);
    lotateArr(arrA, arrB, i);
    printf("\n");
    
    while(i <= 360) {
        i += 90;
        printArr(arrB);
        lotateArr(arrA, arrB, i);
        printf("\n");
    }
}

