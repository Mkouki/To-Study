#include <stdio.h>

//バブルソート
void bubble_sort(int [], int);

int main()
{
	int array[100],n;

	printf("配列の要素数を入力してください\n");
	scanf("%d",&n);
	printf("要素数は%dとします\n",n);

	printf("要素を%d個 入力してください\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&array[i]);
	}

	bubble_sort(array,n);		//バブルソート開始
	printf("バブルソート結果\n");

	for(int i=0;i<n;i++){
		printf("%d\n",array[i]);
	}

	return 0;
}

void bubble_sort(int a[],int n)
{
	int temp;

	for(int i=0 ; i<(n-1) ; i++){
		for(int j=0 ; j<(n-i-1) ; j++){
			if(a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
