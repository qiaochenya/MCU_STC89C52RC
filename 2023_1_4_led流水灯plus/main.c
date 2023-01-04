#include <REGX52.H>
#define time 300
void Delayms(int x)		//@12.000MHz
{
	unsigned char i, j;
	int a;
	for(a=0;a<x;a++)
	{
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	}
}
void main()
{
	while(1)
	{
		P2=0xfe;
		Delayms(time);
		P2=0xfd;
		Delayms(time);
		P2=0xfb;
		Delayms(time);//
		P2=0xf7;
		Delayms(time);
		P2=0xef;
		Delayms(time);
		P2=0xdf;
		Delayms(time);
		P2=0xbf;
		Delayms(time);
		P2=0x7f;
		Delayms(time);
	}
}