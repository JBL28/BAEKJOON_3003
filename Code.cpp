#include <stdio.h>

int main()
{
	int King, Queen, Rooks, Bishops, Knights, Pawns;
	scanf("%d%d%d%d%d%d", &King, &Queen, &Rooks, 
		&Bishops, &Knights, &Pawns);

	printf("%d %d %d %d %d %d", 1 - King, 1 - Queen, 
		2 - Rooks, 2 - Bishops, 2 - Knights, 8 - Pawns);

	return 0;
}