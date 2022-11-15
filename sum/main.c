#include <stddef.h>
#include <stdio.h>

//Create a function that returns the sum of the two lowest positive numbers given an array of minimum 4 positive integers.
// No floats or non-positive integers will be passed.

//For example, when an array is passed like [19, 5, 42, 2, 77], the output should be 7.

long sum_two_smallest_numbers(size_t n, const int numbers[n]) {
    long int max = numbers[0];
    for (int i = 0; i < (int)n; i++){if (max < numbers[i]){max = numbers[i];}}

    long int min = max;
    long int min1 = max;
    int min_index = 0;

    for (int i = 0; i < (int)n; i++){
        if (min > numbers[i]) {min = numbers[i]; min_index = i;}
    }   

    for (int i = 0; i < (int)n; i++){
        if (i != min_index && min1 > numbers[i]){min1 = numbers[i];}
    }   
    
    return min + min1;
}

int main(){
    const int numbers[5] = {19, 5, 42, 2, 77};
    printf("%ld\n", sum_two_smallest_numbers(5, numbers));
    return 0;
}