#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>

typedef struct ID_DATA
{
	char ID[15];
	char PW[15];
	char name[10];
	char address[7];//�׳� ���θ��ּҳֱ�
	char PhoneNumber[11];
	char securitynumber[13];
}I1; 
typedef struct ID_DATA2
{
	char ID[16];
	char PW[15];
	char name[10];
	char address[7];//�׳� ���θ��ּҳֱ�
	char PhoneNumber[11];
	char securitynumber[13];
}I2;
void n(void)
{
	char IDD[15];
	FILE* fp;
	struct ID_DATA I1;
	struct ID_DATA2 I2;
	int i=0;
	if ((fp = fopen("ID_Data.txt", "r+")) == NULL)
	{
		printf("������ �ҷ����µ� �����߽��ϴ�.\n");
		exit(-1);
	}
	while (1)
	{
		
	A:
		system("cls"); printf("ID(8~15�ڸ� �Է�) :\n"); scanf("%s",&IDD);
		fscanf(fp, "%s %s %s %s %s %s",&I2.ID,&I2.PW,&I2.name,&I2.address,&I2.PhoneNumber,&I2.securitynumber);
		if (strcmp(I2.ID,IDD)==0)
		{
			printf("�̹� ��ϵ� ȸ���Դϴ�!!\n");
			system("pause"); goto A;
		}
		else  strcpy(I1.ID,IDD); 
		fflush(fp);
		printf("PW(8~15�ڸ� �Է�) :\n"); scanf("%s",&I1.PW);
		printf("�̸� :\n"); scanf("%s",&I1.name);
		printf("�ּ� :\n"); scanf("%s",&I1.address);
		printf("�޴���ȭ ��ȣ('-'���� ���� �ִ� 11�ڸ�) :\n"); scanf("%s",&I1.PhoneNumber);
		printf("�ֹι�ȣ('-'���� ���� 13�ڸ�, ���̵�/��й�ȣ ã���) :"); scanf("%s",&I1.securitynumber);
		fprintf(fp, "%s %s %s %s %s %s", I1.ID, I1.PW, I1.name, I1.address, I1.PhoneNumber, I1.securitynumber); break;
	}printf("%s %s %s %s %s %s", I1.ID, I1.PW, I1.name, I1.address, I1.PhoneNumber, I1.securitynumber);
	fclose(fp);
}