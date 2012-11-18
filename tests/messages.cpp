#include <cstdio>

#include "Message.h"

using namespace crown;

int main()
{

  	network::Message m = network::Message();
	uint32_t bits_written;
	uint32_t rem_write_bits;
	uint32_t bits_read;
	uint32_t rem_read_bits;
	
	uint8_t tmp[10];
	uint8_t res;
	
	m.init(tmp, 10);
	m.write_int8(1);
	bits_written = m.get_num_bits_written();
	rem_write_bits = m.get_remaining_write_bits();

	res = m.read_int8();
	bits_read = m.get_num_bits_read();
	rem_read_bits = m.get_remaining_read_bits();
	
	printf("-----------------------------\n");
	printf("start write and read for INT8\n");
	printf("value = %d\n", res);
	printf("bits written = %d\n", bits_written);
	printf("remaining write bits = %d\n", rem_write_bits);
	printf("bits read = %d\n", bits_read);
	printf("remaining read bits = %d\n", rem_read_bits);
	printf("-----------------------------\n");

	printf("\n");
	

	
	
	return 0;
}