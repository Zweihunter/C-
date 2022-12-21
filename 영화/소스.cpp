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
		char address[7];//그냥 도로명주소넣기
		char PhoneNumber[11];
		char securitynumber[13];
	}I1;
	
	printf("회원이십니까 ? (Y: 로그인, N : 회원가입, SI : 아이디 찾기, SP : 비밀번호 찾기)");
	scanf("%s", IDCK); rewind(stdin);//입력버퍼 비움
	if (*IDCK=='Y')
	{
		y();
	}
	else if (*IDCK == 'N')
	{
		n();
	}
	else if (strcmp(IDCK, "SI")==0)//문자열비교
	{
		si();
	}
	else if(strcmp(IDCK, "SP") == 0)
	{
		sp();
	}
	else {
		printf("%s", IDCK); printf("(Y: 로그인, N : 회원가입, SI : 아이디 찾기, SP : 비밀번호 찾기)중에서 선택해 주세요");
	
	}
}

