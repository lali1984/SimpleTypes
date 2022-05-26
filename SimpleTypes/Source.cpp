#include <iostream>
#include <iomanip>
#include <cfloat>

int main(int argc, char** argv)
{
	bool size_b = rand();

	int size_i = rand();
	unsigned size_ui = rand();

	short size_sh = rand();
	unsigned short size_ush = rand();

	long size_l = rand();
	unsigned long size_ul = rand();
	long long size_ll = rand();
	unsigned long long size_ull = rand();

	float size_f = rand();

	double	size_d = rand();
	long double size_ld = rand();

	char size_c = rand();
	unsigned char size_uc = rand();

	wchar_t size_wc = rand();
	
	std::cout << "|   Type variable    |      Min number    |    Max number      |    Random number   | Size (byte) |\n";
	std::cout << "---------------------------------------------------------------------------------------------------\n";
	std::cout << "|" << std::left << std::setw(20) << "bool";
	std::cout << "|" << std::left << std::setw(20) << "true";
	std::cout << "|" << std::left << std::setw(20) << "False";
	std::cout << "|" << std::left << std::setw(20) << size_b;
	std::cout << "|" << std::left << std::setw(13) << sizeof(bool) << "|\n";

	std::cout << "|" << std::left << std::setw(20) << "int";
	std::cout << "|" << std::left << std::setw(20) << INT32_MIN;
	std::cout << "|" << std::left << std::setw(20) << INT32_MAX;
	std::cout << "|" << std::left << std::setw(20) << size_b;
	std::cout << "|" << std::left << std::setw(13) << sizeof(int) << "|\n";

	std::cout << "|" << std::left << std::setw(20) << "unsigned int";
	std::cout << "|" << std::left << std::setw(20) << 0;
	std::cout << "|" << std::left << std::setw(20) << UINT32_MAX;
	std::cout << "|" << std::left << std::setw(20) << size_ui;
	std::cout << "|" << std::left << std::setw(13) << sizeof(unsigned int) << "|\n";

	std::cout << "|" << std::left << std::setw(20) << "short";
	std::cout << "|" << std::left << std::setw(20) << INT16_MIN;
	std::cout << "|" << std::left << std::setw(20) << INT16_MAX;
	std::cout << "|" << std::left << std::setw(20) << size_sh;
	std::cout << "|" << std::left << std::setw(13) << sizeof(short) << "|\n";

	std::cout << "|" << std::left << std::setw(20) << "unsigned short";
	std::cout << "|" << std::left << std::setw(20) << 0;
	std::cout << "|" << std::left << std::setw(20) << UINT16_MAX;
	std::cout << "|" << std::left << std::setw(20) << size_ush;
	std::cout << "|" << std::left << std::setw(13) << sizeof(unsigned short) << "|\n";

	std::cout << "|" << std::left << std::setw(20) << "long";
	std::cout << "|" << std::left << std::setw(20) << LONG_MIN;
	std::cout << "|" << std::left << std::setw(20) << LONG_MAX;
	std::cout << "|" << std::left << std::setw(20) << size_l;
	std::cout << "|" << std::left << std::setw(13) << sizeof(long) << "|\n";

	std::cout << "|" << std::left << std::setw(20) << "unsigned long";
	std::cout << "|" << std::left << std::setw(20) << 0;
	std::cout << "|" << std::left << std::setw(20) << ULONG_MAX;
	std::cout << "|" << std::left << std::setw(20) << size_ul;
	std::cout << "|" << std::left << std::setw(13) << sizeof(unsigned long) << "|\n";

	std::cout << "|" << std::left << std::setw(20) << "long long";
	std::cout << "|" << std::left << std::setw(20) << LLONG_MIN;
	std::cout << "|" << std::left << std::setw(20) << LLONG_MAX;
	std::cout << "|" << std::left << std::setw(20) << size_ll;
	std::cout << "|" << std::left << std::setw(13) << sizeof(long long) << "|\n";

	std::cout << "|" << std::left << std::setw(20) << "unsigned long long";
	std::cout << "|" << std::left << std::setw(20) << 0;
	std::cout << "|" << std::left << std::setw(20) << ULLONG_MAX;
	std::cout << "|" << std::left << std::setw(20) << size_ull;
	std::cout << "|" << std::left << std::setw(13) << sizeof(unsigned long long) << "|\n";

	std::cout << "|" << std::left << std::setw(20) << "float";
	std::cout << "|" << std::left << std::setw(20) << FLT_MIN;
	std::cout << "|" << std::left << std::setw(20) << FLT_MAX;
	std::cout << "|" << std::left << std::setw(20) << size_f;
	std::cout << "|" << std::left << std::setw(13) << sizeof(float) << "|\n";

	std::cout << "|" << std::left << std::setw(20) << "double";
	std::cout << "|" << std::left << std::setw(20) << DBL_MIN;
	std::cout << "|" << std::left << std::setw(20) << DBL_MAX;
	std::cout << "|" << std::left << std::setw(20) << size_d;
	std::cout << "|" << std::left << std::setw(13) << sizeof(double) << "|\n";

	std::cout << "|" << std::left << std::setw(20) << "long double";
	std::cout << "|" << std::left << std::setw(20) << LDBL_MIN;
	std::cout << "|" << std::left << std::setw(20) << LDBL_MAX;
	std::cout << "|" << std::left << std::setw(20) << size_ld;
	std::cout << "|" << std::left << std::setw(13) << sizeof(long double) << "|\n";

	std::cout << "|" << std::left << std::setw(20) << "char";
	std::cout << "|" << std::left << std::setw(20) << CHAR_MIN;
	std::cout << "|" << std::left << std::setw(20) << CHAR_MAX;
	std::cout << "|" << std::left << std::setw(20) << size_c;
	std::cout << "|" << std::left << std::setw(13) << sizeof(char) << "|\n";

	std::cout << "|" << std::left << std::setw(20) << "unsigned char";
	std::cout << "|" << std::left << std::setw(20) << 0;
	std::cout << "|" << std::left << std::setw(20) << UCHAR_MAX;
	std::cout << "|" << std::left << std::setw(20) << size_uc;
	std::cout << "|" << std::left << std::setw(13) << sizeof(unsigned char) << "|\n";

	std::cout << "|" << std::left << std::setw(20) << "wchar_t";
	std::cout << "|" << std::left << std::setw(20) << WCHAR_MIN;
	std::cout << "|" << std::left << std::setw(20) << WCHAR_MAX;
	std::cout << "|" << std::left << std::setw(20) << size_wc;
	std::cout << "|" << std::left << std::setw(13) << sizeof(wchar_t) << "|\n";

	std::cout << "---------------------------------------------------------------------------------------------------\n";


}