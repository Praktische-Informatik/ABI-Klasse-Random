#include <iostream>
#include "Random.h"


int main()
{
	Random random;

	for (int i = 0; i < 10; i++)
	{
		// Erzeugen und Ausgeben einer Zufallszahl
		int randomNumber1 = random.nextInt();
		std::cout << "Random Number: " << randomNumber1 << std::endl;

		// Erzeugen und Ausgeben einer Zufallszahl im Bereich 0 bis 9
		int randomNumber2 = random.nextInt(10);
		std::cout << "Random Number mit einem Bereich (0 bis 9) : " << randomNumber2 << std::endl;
	}
}

