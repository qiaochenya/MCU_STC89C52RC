#include <REGX52.H>
#include <INTRINS.H>
void Delay500ms()		//@12.000MHz
{
	unsigned char i, j, k;

	_nop_();
	i = 4;
	j = 205;
	k = 187;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void main()
{
	int count=0;
	while(count!=10)
	{
		P2=0x7f;//0111 1111
		Delay500ms();
		P2=0xff;
		Delay500ms();
		count++;
	}
	while(1)
	{
		
	}
}