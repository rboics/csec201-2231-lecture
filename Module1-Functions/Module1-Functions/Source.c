#include <stdio.h>

//<ReturnType> <FunctionName>(<ParameterList>){
//<FunctionBody>
//}
int fibIter(int fibNum) {
	//	   fibNum:  1, 2, 3, 4, 5, 6, 7
	//Fib Squence:  1, 1, 2, 3, 5, 8, 13, ...
	int n=1;
	int nMinusOne=0;
	int temp;

	for (int i = 1; i < fibNum; i++) {
		temp = n;
		n = n + nMinusOne;
		nMinusOne = temp;
	}

	return n;
}

int fibRec(int n) {
	if (n == 1) return 1;
	else if (n == 2) return 1;
	else return fibRec(n - 1) + fibRec(n - 2);
}

int main(void) {
	int num;
	

	printf("What fib number to calculate? ");
	scanf("%d", &num);
	
	printf("The %dth Fib Number is: %d\n", num, fibRec(num));
}