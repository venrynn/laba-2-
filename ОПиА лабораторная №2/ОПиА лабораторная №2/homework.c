#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "RUS");
	int x = 67; //стоимость метра
	int S = 1500; //площадь парусов
	int L = 42; //ширина твани
	
	//расчет длины ткани
	float dlina = S / (L / 100.);

	//расчет стоимости ткани
	float stoimost = dlina * x;

	//форматирование вывода
	printf("Выпишем известные данные \n\nСтоимость метра: %d золотых\nПлощадь парусов: %d м2\nШирина ткани: %d см\n\n", x, S, L);
	printf("Длина ткани равна: %d / (%d / 100) = %.2f\n\n", S, L,dlina);
	printf("Стоимость за всю ткань равна: %.2f * %d = %.1f\n\n", dlina, x, stoimost);
	printf("Ответ: %.1f золотых\n", stoimost);

	return 0;
}
