#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//�ȶ��ϰ벿�ֽ��л���
int main(){
	int n;
	scanf("%d", &n);

	int i, j;
	//���
	for (i = 1; i < n; i++){
#if 0
		//��һ�ַ���
		//�ֱ��ҳ��ո�' '��'* '������
		//�ϰ벿��һ��7��,ÿһ�пո���n-i,ÿһ�е�*��Ϊ2n-1,
		// j�������,i���i��,n������
		//1.��ӡ�ո���
		for (j = 0; j < n - i; j++){
			putchar(' ');
		}
		//2.��ӡ*
		for (j = 0; j < 2 * i - 1; j++){
			putchar('*');
		}
#else
		//�ڶ��ַ���
		//��ʾ7��֮ǰÿһ����Ҫ��ӡ�ķ�������
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
