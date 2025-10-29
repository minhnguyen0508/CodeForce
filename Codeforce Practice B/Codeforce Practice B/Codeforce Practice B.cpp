#include <iostream>
int *solution(int t) {
	int* arr = new int[t];
	for (int i = 0; i < t; i++) {
		std::cin >> arr[i];
	}
	for (int i = 0; i < t; i++) {
		if (arr[i] == 1) {
			arr[i] = 0;
		}
		else if (arr[i] == 2) {
			arr[i] = 1;
		}
		else if (arr[i] == 3) {
			arr[i] = 2;
		}
		else if (arr[i] % 2 == 0 && arr[i] > 2) {	//all even number can be divided by the result of itself divided 2 and minus 1 (2 step)
			arr[i] = 2;
		}
		//for odd number that are not divisible by 3, minus 1 so that they become even number (step 1)
		//arr[i] divided by the divisor where quotient = 2 (step 2)
		// 2 -1 = 1 step 3
		// for odd number that is not divisible by 3 there is always 3 step to reduced it to 1 
		else if ((arr[i] % 3 != 0) && (arr[i] % 2 != 0)) {
			arr[i] = 3;
		}
		//last case is odd number is divisible by 3
		//divisor of dividend / x = 3 will be the biggest proper division of current number (step 1) 
		// minus 1 = 2 (step 2)
		//minus 1 = 2 (step 3) 
		else arr[i] = 3; 
	}
	return arr;
}
int main()
{
	int t = 0;
	std::cin >> t;
	int* a = solution(t);
	for (int i = 0; i < t; i++) {
		std::cout << a[i]<<std::endl;
	}
}


