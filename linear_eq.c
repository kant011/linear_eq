/*nanntyara*/
#inculude <stdio.h>

#define N_MAX 100
int main()
{
	/*変数定義*/
	int i;/*ループインデックス*/
	int j;
	int k;
	int n;
	double augmented[N_MAX][N_MAX+1];
	double tmp;/*一時的にa[j][i]を保存する変数*/
	
	/*次数の読み込み*/
	printf("次数を入力してください．\n");
	scanf("%d",&n);

	if(n<1 || n>N_MAX)
	{
		printf("入力する数字は，1から100までの自然数にしてください．\n");
		return -1;
	}

	/*拡大係数行列の読み込み*/
	printf("拡大係数行列を入力してください．\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%lf",&augmented[i][j]);
		}
	}
	
	/*拡大係数行列の表示*/