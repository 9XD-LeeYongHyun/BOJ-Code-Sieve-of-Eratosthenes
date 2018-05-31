#include <stdio.h>
const int LIMIT = 1001;
const int NOT_CHECKED = 0;
const int CHECKED = 1;
int arr[LIMIT] = {0, };
int P = 2;
int minAtArr(){
	for(int i=P;i<LIMIT;++i){
		if(arr[i] == NOT_CHECKED) return i;
	}
	return -1;
}
int main(void){
	int n, k;
	int count = 0;
	scanf("%d %d",&n,&k);
		while(P!=-1){
			for(int i=P;i<=n;i+=P){
				if(arr[i] == NOT_CHECKED){
					arr[i] = CHECKED;
					++count;
					if(count == k){
					printf("%d",i);
					return 0;
					}
				}
			}
		P = minAtArr();
		}
	return 0;
}
