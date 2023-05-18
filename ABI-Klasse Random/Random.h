#pragma once
#include <random>

class Random {

private:
	std::mt19937 generator;

public:
	Random() {
		// Initialisierung des Zufallszahlengenerators mit einer zuf‰lligen Seed-Wert
		std::random_device rd;
		generator = std::mt19937(rd());
	}

	int nextInt() {
		// Erzeugen einer Zufallszahl aus dem gesamten Bereich der positiven ganzen Zahlen
		std::uniform_int_distribution<int> distribution(0, std::numeric_limits<int>::max());
		return distribution(generator);
	}

	int nextInt(int n) {
		// Erzeugen einer Zufallszahl im Bereich 0 (einschlieﬂlich) bis n (ausschlieﬂlich)
		std::uniform_int_distribution<int> distribution(0, n - 1);
		return distribution(generator);
	}
};