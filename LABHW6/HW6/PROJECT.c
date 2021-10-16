#include <stdio.h>
#include <stdlib.h>

#define MAX_SET_SIZE 10
#define HAVE_ELEMENT 1
#define DO_NOT_HAVE_ELEMENT 0

int hasElement(int set[], int size, int element) {
    int i = 0;
    for (i = 0; i < size; i++)
        if(set[i] == element)
            return HAVE_ELEMENT;
    return DO_NOT_HAVE_ELEMENT;
}
int addOneElement(int set[], int size, int element) {
    
    if(hasElement(set,size, element) == 1) {
        printf("It is redundant. Please retry\n");
        return size;
    }
    size++;
    set[size - 1] = element;
    return size;
    
    //return 0;
}
void printSet(int set[], int size) {
    printf("<");
    for(int i = 0; i < size; i++)
        printf(" %d ", set[i]);
    printf(">\n");
}
int setUnion(int set1[], int size1, int set2[], int size2, int setResult[]) {
    int i, j;
    
    for (i = 0; i < size1; i++)
        setResult[i] = set1[i];
    
    for (j = 0; j < size2; j++) {
        if (!hasElement(setResult, i, set2[j])) {
            setResult[i] = set2[j];
            i++;
        }
    }
    return i;
}
int setIntersecton(int set1[], int size1, int set2[], int size2, int setResult[]) {
    int i = 0, j;
    for (j = 0; j < size2; j++) {
        if (hasElement(set1, size1, set2[j]))
            setResult[i++] = set2[j];
    }
    
    return i;
}
int setComplements(int set1[], int size1, int set2[], int size2, int setResult[]) {
    int i = 0, j;
    for (j = 0; j < size1; j++) {
        if (!hasElement(set2, size2, set1[j]))
            setResult[i++] = set1[j];
    }
    
    return i;
}
int main(int argc, char *argv[]) {
    int i;
    
    int setA[MAX_SET_SIZE];
    int setB[MAX_SET_SIZE];
    int setC[MAX_SET_SIZE*2];
    
    int sizeA;
    int sizeB;
    int sizeC;
    
    printf("Enter the size of Set A:");
    scanf("%d", &sizeA);
    i = 0;
    while( i < sizeA ) {
        printf("Enter the number for Set A (%d/%d):", i + 1, sizeA);
        scanf( "%d", &setA[i] );
        i = addOneElement(setA, i, setA[i]);
    }
    
    printf("Enter the size of Set B:");
    scanf("%d", &sizeB);
    i = 0;
    while( i < sizeB ) {
        printf("Enter the number for Set B (%d/%d):", i + 1, sizeB);
        scanf( "%d", &setB[i] );
        i = addOneElement(setB, i, setB[i]);
    }
    
    printf("Set A: ");
    printSet( setA, sizeA);
    printf("Set B: ");
    printSet( setB, sizeB );
    
    sizeC = setUnion( setA, sizeA, setB, sizeB, setC );
    printf("Union of setA and setB: ");
    printSet( setC, sizeC);
    
    sizeC = setIntersecton( setA, sizeA, setB, sizeB, setC);
    printf("Intersection of setA and setB: ");
    printSet( setC, sizeC);
    
    sizeC = setComplements( setA, sizeA, setB, sizeB, setC );
    printf("Set-theoretic difference of setA and setB (setA - setB): ");
    printSet( setC, sizeC);
    
    return 0;
}
