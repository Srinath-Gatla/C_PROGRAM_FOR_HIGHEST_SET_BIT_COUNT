#include <stdio.h>
#include <stdint.h>
uint16_t highest_set_bit(uint16_t reg) 
{
	if(reg==0)
	{
		return 0;
	}
	else
	{
		reg|=(reg>>1);
		reg|=(reg>>2);
		reg|=(reg>>4);
		reg|=(reg>>8);
	}
	return (reg ^ (reg>>1));
}
int main() 
{
	uint16_t reg;
	scanf("%hu", &reg);
	uint16_t result = highest_set_bit(reg);
	printf("%hu", result);			    
	return 0;
}

