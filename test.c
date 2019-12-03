#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//先对上半部分进行绘制
int main(){
	int n;
	scanf("%d", &n);

	int i, j;
	//外层
	for (i = 1; i < n; i++){
#if 0
		//第一种方法
		//分别找出空格' '和'* '的数量
		//上半部分一共7行,每一行空格数n-i,每一行的*数为2n-1,
		// j表符号数,i表第i行,n表行数
		//1.打印空格数
		for (j = 0; j < n - i; j++){
			putchar(' ');
		}
		//2.打印*
		for (j = 0; j < 2 * i - 1; j++){
			putchar('*');
		}
#else
		//第二种方法
		//表示7列之前每一行需要打印的符号总数
		for (j = 0; j < i + n - 1; j++){
			putchar(j < n - i ? ' ' : '*');
		}

#endif
		putchar('\n');
	}

	for (i = n; i > 0; i--){
#if 0
		for (j = 0; j < n - i; j++){
			putchar(' ');
		}

		for (j = 0; j < 2 * i - 1; j++){
			putchar('*');
		}
#else
		for (j = 0; j < i + n - 1; j++){
			putchar(j < n - i ? ' ' : '*');
		}

#endif
		putchar('\n');
	}
	system("pause");
	return 0;
}
