#include <stdio.h>
#include <stdlib.h>

int main() {
    int num[] = {12,1,3,5,121,321,2,4,5,17,91,-1,123131};
    int smallestNum = num[0]; // placeholder
    int largestNum = num[0]; // placeholder
    int size = sizeof(num)/sizeof(int);

    for(int i=1;i<=size;i++){
        if(smallestNum>num[i]){
            smallestNum = num[i];
        }
        if(largestNum<num[i]){
            largestNum = num[i];
        }
    }
    printf("Smallest: %d\n",smallestNum);
    printf("Largest: %d",largestNum);
    return 0;
}
