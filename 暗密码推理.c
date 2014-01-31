#include<stdio.h>
#include<string.h>
void main()
{	/*const的意义在于使encrypted[]的值不再改变，如果给数组重新赋值，程序会出错*/
	const char encrypted[]="QRyTANAANAnYdcRgrwJE";
	char password[80];                /*输入密码的缓冲区*/
	char unencrypted[21];             /*未加密密码*/
	int i=0;
	long code=0;
	for(;;)
	{
		strcpy(unencrypted,"wwwwwwwhijklmnopqrst");           /*初始化*/
		printf("\nEnter your password of up to 20 characters(no spaces):\n");
		scanf("%s",password);                     /*读取输入的密码*/
		/*完成加密和比较*/
		for(i=0;i<20&&password[i]!='\0';i++)
		    unencrypted[i]=password[i];
		code=0;
		for(i=0;i<20;code+=unencrypted[i++])
			code%=52;
		code+=code<26?'A':('a'-26);
		for(i=0;i<20;i++)
		{
			code*=unencrypted[i];
			code%=52;
			code+=code<26?'A':('a'-26);
			password[i]=(char)code;
		}
		password[i]='\0';
		/*判断密码的正确与否,if(!a)与if(a==0)等价*/
		if(!strcmp(password,encrypted))
		{
			printf("\nPassword ok.\n");
			break;
		}
		else
			printf("Incoorrect password.\n");
	}
}

/*本题其实就是对比输入字符和预先设定密码字符是否相等，但为密码安全性考虑，
常将密码本身也要加密，以免密码明文出现程序中，password“口令”，code“密码”，encrypted“加密”意思*/