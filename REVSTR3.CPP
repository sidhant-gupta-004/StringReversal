#include<iostream.h>
#include<conio.h>
#include<stdio.h>

typedef char str[30];

void revstr(str C[],int a)
{
	int i,j,l[10];
	char t;
	for(i=0;i<a;i++)
	{
		l[i]=0;
	}
	for(i=0;i<a;i++)
	{
		for(j=0;C[i][j]!='\0';j++)
		{
			l[i]++;
		}
	}

	for(i=0;i<a;i++)
	{
		for(j=0;j<l[i]/2;j++)
		{
			t=C[i][j];
			C[i][j]=C[i][l[i]-j-1];
			C[i][l[i]-j-1]=t;
		}
		cout<<"Reverse of string no. "<<i+1<<" is "
		<<C[i]<<endl;
	}
}

void main()
{
	clrscr();
	int T,i;
	str S[10];
	cout<<"Enter the number of test cases."<<endl;
	cin>>T;
	for(i=0;i<T;i++)
	{
		cout<<"Enter string no. "<<i+1<<"\n";
		gets(S[i]);
	}
	revstr(S,T);
	getch();
}