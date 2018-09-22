#include <stdio.h>
#pragma warning(disable:4996)

const int MIN = 2, MAX = 1000;
bool isRemove[MAX + 1] = { true, };
int removeCnt = 0;

int main(void) {

	int P = MIN, idx;

	int n, k;

	scanf("%d %d", &n, &k);

	while (removeCnt < (n - MIN + 1)) {
		
		for (idx = P; idx <= n; idx += P) {
			if (!isRemove[idx]) {
				isRemove[idx] = true;
				++removeCnt;
				if (removeCnt == k) {
					printf("%d", idx);
					return 0;
				}
			}
		}

		for (idx = P; idx <= MAX; ++idx) {
			if (!isRemove[idx]) {
				P = idx;
				break;
			}
		}
	}

	return 0;
}
