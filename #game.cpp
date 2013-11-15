#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	int num[4];
	int b;
	char c[4];
	int sumA=0;
	int sumB=0;
	double radom(double,double);
	void pause();
	srand(unsigned(time(0)));
	for(int i=0;i!=4;++i)
	{
			num[i]=int(radom(0,10));
			cout<<"ÃÕµ×Îª£º"<<num[i]<<endl;
	}
a:cout<<"please input four number"<<endl;
	cin>>b;
	c[0]=(b/1000);
	c[1]=(b/100%10);
	c[2]=(b/10%10);
	c[3]=(b%10);
		for(int j=0;j<4;j++)
	{
		if(num[j]==c[j])
			sumA+=1;
		else for(int k=0;k<4;k++)
		{
			if(num[j]==c[k])
				sumB+=1;
		}
	}
	if(sumA==4)
	{
		cout<<"you win!!!!!"<<endl;
		sumA=0;
		sumB=0;
	}
		else
	{
		cout<<sumA<<"A"<<sumB<<"B"<<endl;
		sumA=0;
		sumB=0;
		goto a;
	}
	return 0;
}
double radom(double start,double end)
{
	return start+(end-start)*rand()/(RAND_MAX + 1.0);
}
void pause()
{
	cout<<"SB"<<endl;
}