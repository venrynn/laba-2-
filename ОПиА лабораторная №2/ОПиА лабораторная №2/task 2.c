#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "RUS");
	int N=15, K=12;
	printf("Сейчас %d часов %d минут 00 секунд", N, K);
	printf("\nИдет %d минута суток", N*60+K);
	printf("\nДо полуночи осталось %d часов %d минут", 23 - N, 60 - K);
	printf("\nС 8.00 прошло %d секунд", (N - 8) * 60 * 60 + K * 60);
	printf("\nТекущий час %.2f суток и текущая минута %.2f часа", N / 24.0, K / 60.0);
}