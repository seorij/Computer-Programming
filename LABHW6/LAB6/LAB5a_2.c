///*
// LAB5a_2.c
// 컴퓨터학과 20170978 정설아
// 컴퓨터프로그래밍 03분반
// */
//#include <stdio.h>
//void initArr(int arr[4][4]) {
//    int i, j, n = 1;
//    
//    for(i = 0; i < 4; i++) {
//        for(j = 0; j < 4; j++) {
//            arr[i][j] = n++;
//        }
//    }
//}
//void printArr(int arr[4][4]) {
//    int i, j;
//    
//    for(i = 0; i < 4; i++) {
//        for(j = 0; j < 4; j++) {
//            printf("%5d", arr[i][j]);
//        }
//        printf("\n");
//    }
//}
//void lotateArr(int arrA[4][4], int arrB[4][4]) {
//    int i, j;
//    
//    for(i = 0; i < 4; i++)
//        for(j = 0; j < 4; j++)
//            arrB[j][3-i] = arrA[i][j];
//}
//int main(void) {
//    int arrA[4][4] = {0};
//    int arrB[4][4] = {0};
//    
//    initArr(arrA);
//    printArr(arrA);
//    lotateArr(arrA, arrB);
//    printf("\n");
//    printArr(arrB);
//}
