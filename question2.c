#include <stdio.h>
int main(int argc, const char** argv, const char** envp) {

	int nums[10] = { 12, 15, 221, 3, 432, 54, 16, 67, 0, 0 };

	int maxNum = -1;

	for (int i = 0; i < sizeof(nums); i++) {
		if (maxNum < nums[i]) {
			maxNum = nums[i];
		}
	}
	printf("%d", maxNum);

	return 0;

}