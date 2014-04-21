/* Name			: Bagus Rahman Aryabima 								*/
/* Email		: bagus.axel@gmail.com									*/
/* Country		: Indonesia												*/
/* File Name	: SloganChallenge003.c 									*/
/* Date			: 20 April 2014											*/
/* Description	: Calculate sum of squares of non-negative integers,	*/
/*				without using loop										*/

#include <stdio.h>

int N;
int X;
int Yn;
int Result;
void Recursion1(int N);	/* Read and check number of test cases, write result, the main loop */
void Recursion2(int X);	/* Read and check number of integers and the integers themselves, calculate the integers */

int main() {
	scanf("%d", &N);
	
	if ((N >= 1) && (N <= 100)) {	/* Specification: 1 <= N <= 100 */
		Recursion1(N);
	}
	
	return 0;
}

void Recursion1(int N) {
/* Read and check number of test cases, write result, the main loop */
	if (N > 0) {
		Result = 0;
		scanf("%d", &X);
		
		if ((X > 0) && (X <= 100)) {	/* Specification: 0 < X <= 100 */
			Recursion2(X);
			printf("%d\n", Result);
		}
		
		Recursion1(N - 1);
	}
}

void Recursion2(int X) {
/* Read and check number of test cases, write result, the main loop */
	if (X > 0) {
		scanf("%d", &Yn);
		
		if ((Yn >= -100) && (Yn <= 100)) {	/* Specification: -100 <= Yn <= 100 */
			if (Yn >= 0) {
				Result = Result + (Yn * Yn);
			}
		}
		
		Recursion2(X - 1);
	}
}