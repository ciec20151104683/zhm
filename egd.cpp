#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
	FILE *fp;
	int len;
	int ch;
	int count;
	char *str;
	char *ptrl="<?xml version kdfuuisfh jsjdkvdzh jkdxfuuffkhf>";
	char s[100];
	int i=10;
	while(!((*(ptrl+i)=='m')&&(*ptrl+i+1)=='a')&&(*(ptrl+i+3)=='1')&&(*(ptrl+i+4)=='a'))
	{
		i++;
	}
	strncpy(s,ptrl+i+7,12);
	s[12]='\0';
	printf("%s\n",s);
	fp=fopen("d:\\text.txt","r");
	if(fp==fopen("d:\\text.txt","r")==0)
	{
		
		printf("Cannot open %s\n",argv[1]);
		exit(1);
	}
	else
	{
		fseek(fp,0,SEEK_END);
		len=ftell(fp);
		printf("length=%d\n",len);
	}
	while((ch=getc(fp))!=EOF)
	{
		putc(ch,stdout);
		count++;
	}
	fclose(fp);
	return 0;
	                                                         	                                                                                                           
	
}
