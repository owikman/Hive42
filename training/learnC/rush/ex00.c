#include <unistd.h>

void	only_z(void)
{
	write(1, "c", 1);
}
int main()
{
	only_z();
	write(1, "\n", 1);
	return 0;
}