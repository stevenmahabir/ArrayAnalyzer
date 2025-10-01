#include<stdio.h>
#include<stdbool.h>

bool isPrime(int number) {
    //number % divisor == 0
    if (number <=1){
        return false;
    }
    //divisor = 2 then iterates to any number larger than number / 2
    for (int divisor = 2; divisor <= number/2; divisor++){
        if (number % divisor == 0) { //if number is divisble by the divisor it is not a prime number.
            return false;
        }
    }
    return true;
}

bool isOdd(int num) {
    //if num mod 2 is != to 0 then number is odd.
    return num % 2 != 0;

}


void minMax(int arr[], int size, int *min, int *max){
    //use pointers for min/max so it can update since it needs to read and modify the array entry
    //size doesnt need a pointer since its not being modified just read.
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; i++){
        //update array if current min is smaler than whats already min value in array
        if (arr[i] < *min){
            *min = arr[i];
        }
        //update array if current max is larger than whats already max value
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}
/*
// potential sumAvg function
    void sumAvg(int arr[], int size, int *sum, float *average){
    *sum = 0;
    for (int i = 1; i < size; i++){
        *sum += arr[i];
    }
    *average = *sum / size;
}
*/


int main() {

    int size;
    int sum;
    int min;
    int max;
    float average;

    //input the array size with while/continue incase of incorrect input
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    while (size <= 0){
        printf("Array must be larger than 0");
        scanf("%d", &size);
        //add function to stop users from entering a/b/c. clear buffer so that we can repeat entry
        //maybe a do while loop can work here?
        /*
        do {
            printf("Enter the size of the array: ");
            while ( ){
            scanf("%d", &size);
            printf("Array must be larger than 0");
            scanf("%d", &size);
            }
        } while (size <= 0);
        */
    }

    //after getting array size from user declare
    int arr[size];

    //input array values into size parameter entered by user
    printf("Enter the array values: \n", size);
    for (int i = 0; i < size; i++){
        printf("Enter number %d: ", i + 1); //start i at position 1 and store each number or itll start at - whatever number user inputs
        scanf("%d", &arr[i]); //store the input into the array position i
        //add function to stop users from entering a/b/c. clear buffer so that we can repeat entry
    
    }

    //find min max using address (&) in existing function
    minMax(arr, size, &min, &max);


    //Header statement \n newLine, /t horizontalSpace
    printf("\nSr.\tNumber\tPrime\tOdd/Even\tMin/Max\n");

    for (int i = 0; i < size; i++){
        //add current number to the sum while iterating
        sum += arr[i];
        printf("%d\t%d\t%s\t%s\t",
        //need Sr number starting from 1
        i+1,
        //store the array number at the array position i
        arr[i],
        //change function from 01 to(?) yes:no/odd:even
        isPrime(arr[i]) ? "Yes" : "No",
        isOdd(arr[i]) ? "Odd" : "Even");

        // == works here because the minMax function is called right after the input array values
        if (arr[i] == min && arr[i] == max) {
            printf("\tMin/Max");
        } 
        else if(arr[i] == min) {
            printf("\tMin");
        }
        else if(arr[i] == max){
            printf("\tMax");
        }
        
        //print new line after each row
        printf("\n");
        
        
    }

    //calculate sum and average and display;
    //find sum avg using address (&) in existing function
    //sumAvg(arr, size, &sum, &average);
    //average = (float)*sum / (float)*size //tell the compiler to set the type to float
    average = (float)sum / (float)size;
    printf("\nSum\t%d\n", sum);
    printf("Avg\t%.1f\n", average);
    

    return 0;
}
