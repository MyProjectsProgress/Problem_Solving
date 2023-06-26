#include <stdio.h>

/* homework helper functions */
int fact(int number){
	int i, result = 1;

	if (number == 0 || number == 1) {
		return result;
	}

	for (i = number; i >= 1; --i) {
		result *= i;
	}
	return result;
}

int power(int base, int power){
	int i;
	int result = 1;
	if (power == 0) {
		return result;
	}
	for (i = 0; i < power; ++i) {
		result *= base;
	}

	return result;
}

float calculator_function(int exponent, int iterations){
	int i;
	float result = 0.0;
	for (i = 0; i < iterations; ++i) {
		result += ((float)(power(exponent, i)))/fact(i);
	}
	return result;
}

int main() {

/* Lab 1 */

/* First Question */
/*
  int initial_velocity, acceleration, time;
  long final_velocity, distance;

  printf("Enter Three Values: \n");
  scanf("%d", &initial_velocity);
  scanf("%d", &acceleration);
  scanf("%d", &time);

  final_velocity = initial_velocity + acceleration * time;
  distance = initial_velocity * time + 0.5 * acceleration * time * time;

  printf("Final Velocity is: %d\n", final_velocity);
  printf("Distance is: %d\n", distance);
*/

/* Second Question */
/*
    int a, b, c, smallest, largest, temp1, temp2;
    int sum, average, product;

    printf("Enter Three Numbers\n", sum);
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    sum = a + b + c;

    average = (a + b + c)/3;

    product = a * b * c;

    temp1 = (a > b)?  b : a;
    smallest = ( temp1 > c)? c : temp1;

    temp2 = (a < b)?  b : a;
    largest = ( temp2 < c)? c : temp2;

    printf("Sum %d\n", sum);
    printf("Average is %d\n", average);
    printf("Product is %d\n", product);
    printf("Largest is %d\n", largest);
    printf("Smallest is %d\n", smallest);
*/

/* Third Question */
/*
    int seconds, hours, minutes, remainingSeconds;

    printf("Enter the total time elapsed in seconds, please\n");
    scanf("%d", &seconds);

    minutes = seconds / 60;
    remainingSeconds = seconds % 60;
    hours = minutes / 60;
    minutes = minutes % 60;

    printf("%d:%d:%d\n", hours,minutes,remainingSeconds);
*/

/* Lab 2 */

/* First Question */
/*
    unsigned char rotations, number, result, output = 0;
    char option;

    printf("Enter option r or l \n");
    scanf("%c", &option);

    printf("Enter option number to be shifted and the number of shifts \n");

    if (option == 'r')
    {
        scanf("%hhu", &number);
        scanf("%hhu", &rotations);
        unsigned char a = number >> rotations;
        unsigned char b = number << (8 - rotations);
        output = a | b;
    }
    else if (option == 'l')
    {
        scanf("%hhu", &number);
        scanf("%hhu", &rotations);                   //  11100101
        unsigned char a = number << rotations;       //  00101000
        unsigned char b = number >> (8 - rotations); //  00000111
        output = a | b;
    }
    else printf("Try again and enter either r or l, please");

    printf("Result is: %d\n", output);
*/

/* Second Question */
/*
    int n,flag = 1,i,j,k;

    printf("Enter number of pyramid shape levels \n");
    scanf("%d", &n);

    for(i = 1; i<=n; i++){

        for(j=n-i; j>0; j--) printf(" ");

        for(k=1; k<=flag; k++) printf("*");

        if(i != n) printf("\n");

        flag+=2;
    }

    flag-=2;

    printf("\n");

    for(k=1; k<=flag; k++) printf("*");

    printf("\n");

    flag = flag-2;

    for(i = n-1; i>0; i--){

        for(j=i-1; j<n-1; j++) printf(" ");

        for(k=1; k<=flag; k++) printf("*");

        if(i != 1) printf("\n");

        flag-=2;
    }
*/

/* Third Question */

    long long n, i, temp1 = 0, temp2 = 1, next;

    printf("Enter the number of iterations \n");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i)
    {
        printf("%d ", temp1);
        next  = temp1 + temp2;
        temp1 = temp2;
        temp2 = next;
    }


/* Homework */
/*
    int exp, iterations;

    printf("Enter the exponent: ");
    scanf("%d", &exp);

    printf("\nEnter the number of iterations: ");
    scanf("%d", &iterations);

    printf("%f\n", calculator_function(exp, iterations));
    */

    return 0;
}
