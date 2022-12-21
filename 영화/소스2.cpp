#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>

typedef struct ID_DATA
{
	char ID[15];
	char PW[15];
	char name[10];
	char address[7];//그냥 도로명주소넣기
	char PhoneNumber[11];
	char securitynumber[13];
}I1; 
typedef struct ID_DATA2
{
	char ID[16];
	char PW[15];
	char name[10];
	char address[7];//그냥 도로명주소넣기
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
		printf("파일을 불러오는데 실패했습니다.\n");
		exit(-1);
	}
	while (1)
	{
		
	A:
		system("cls"); printf("ID(8~15자리 입력) :\n"); scanf("%s",&IDD);
		fscanf(fp, "%s %s %s %s %s %s",&I2.ID,&I2.PW,&I2.name,&I2.address,&I2.PhoneNumber,&I2.securitynumber);
		if (strcmp(I2.ID,IDD)==0)
		{
			printf("이미 등록된 회원입니다!!\n");
			system("pause"); goto A;
		}
		else  strcpy(I1.ID,IDD); 
		fflush(fp);
		printf("PW(8~15자리 입력) :\n"); scanf("%s",&I1.PW);
		printf("이름 :\n"); scanf("%s",&I1.name);
		printf("주소 :\n"); scanf("%s",&I1.address);
		printf("휴대전화 번호('-'없이 숫자 최대 11자리) :\n"); scanf("%s",&I1.PhoneNumber);
		printf("주민번호('-'없이 숫자 13자리, 아이디/비밀번호 찾기용) :"); scanf("%s",&I1.securitynumber);
		fprintf(fp, "%s %s %s %s %s %s", I1.ID, I1.PW, I1.name, I1.address, I1.PhoneNumber, I1.securitynumber); break;
	}printf("%s %s %s %s %s %s", I1.ID, I1.PW, I1.name, I1.address, I1.PhoneNumber, I1.securitynumber);
	fclose(fp);
}