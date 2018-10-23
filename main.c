#include <stdio.h>

int main(){
    int array[1000], n, i, j, temp;

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);

    for( i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    for(i = 1; i < n; i++){
        j = i;

        while (j > 0 && array[j] < array[j-1]){
            temp = array[j];
            array[j] = array[j-1];
            array[j-1] = temp;

            j--;
        }
    }

    printf("Sorted list in ascending order:\n");

    for(i = 0; i < n; i++){
        printf("%d\n", array[i]);
    }

    return 0;
}