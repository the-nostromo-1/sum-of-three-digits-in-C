/*
Create a program that has the user input a three digit number and returns the sum of those three digits
i.e. 531 = 5 + 3 + 1 = 9
04/18/2022
David J Tinley
*/

#include <stdio.h>

int main() {
	int number, units, tens, hundreds, total;

	printf("Please input a three digit number:\n");
	scanf_s("%d", &number);

	units = number % 10; // dividing the number by 10 and getting the remainder. 531 / 10 = 53 with 1 as the remainder
	tens = (number / 10) % 10; // dividing the number by 10 and then getting the remainder of that. 531 / 10 = 53,
	// 53 / 10 = 5 with 3 as the remainder
	hundreds = number / 100; // dividing the number by 100 to get the hundreds number. 531 / 100 = 5

	total = units + tens + hundreds;

	printf("The digits are %d, %d, %d, which totals %d\n", units, tens, hundreds, total);
	return 0;
}