#include<stdio.h>
#include<windows.h>
#include<string.h>
void y(void);
void n(void);
void si(void);
void sp(void);
int main()
{
	static char IDCK[2];
	typedef struct ID_DATA
	{
		char ID[15];
		char PW[15];
		char name[10];
		char address[7];//�׳� ���θ��ּҳֱ�
		char PhoneNumber[11];
		char securitynumber[13];
	}I1;
	
	printf("ȸ���̽ʴϱ� ? (Y: �α���, N : ȸ������, SI : ���̵� ã��, SP : ��й�ȣ ã��)");
	scanf("%s", IDCK); rewind(stdin);//�Է¹��� ���
	if (*IDCK=='Y')
	{
		y();
	}
	else if (*IDCK == 'N')
	{
		n();
	}
	else if (strcmp(IDCK, "SI")==0)//���ڿ���
	{
		si();
	}
	else if(strcmp(IDCK, "SP") == 0)
	{
		sp();
	}
	else {
		printf("%s", IDCK); printf("(Y: �α���, N : ȸ������, SI : ���̵� ã��, SP : ��й�ȣ ã��)�߿��� ������ �ּ���");
	
	}
}

