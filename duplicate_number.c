#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int arr[], site_t arr_len) {
	bool answer = true;

	for (int i = 0; i < arr_len; i++) {
		int s = 0;
		for (int j = 0; j < arr_len; j++) {
			if (arr[i] == arr[j]) {
				s += 1;
			}
		}

		if(s > 1) {
			answer = false;
			return answer;
		}
	}
	
	return answer;
}
