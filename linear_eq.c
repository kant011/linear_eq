/*nanntyara*/
#inculude <stdio.h>

#define N_MAX 100
int main()
{
	/*�ϐ���`*/
	int i;/*���[�v�C���f�b�N�X*/
	int j;
	int k;
	int n;
	double augmented[N_MAX][N_MAX+1];
	double tmp;/*�ꎞ�I��a[j][i]��ۑ�����ϐ�*/
	
	/*�����̓ǂݍ���*/
	printf("��������͂��Ă��������D\n");
	scanf("%d",&n);

	if(n<1 || n>N_MAX)
	{
		printf("���͂��鐔���́C1����100�܂ł̎��R���ɂ��Ă��������D\n");
		return -1;
	}

	/*�g��W���s��̓ǂݍ���*/
	printf("�g��W���s�����͂��Ă��������D\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%lf",&augmented[i][j]);
		}
	}
	
	/*�g��W���s��̕\��*/