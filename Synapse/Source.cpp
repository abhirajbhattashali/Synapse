#include <iostream>
#include <stdio.h>
#define ARMA_PRINT_EXCEPTIONS
#include "Perceptron.h"
#include "Auto_associator.h"

int main()
{




	synp::AutoAssociator mem(3,signalType::BINARY);

	row_space pattern({ 1,0,1 }),
	pattern2({ 1,1,0 });
	pattern.print("INPUT");
	mem.memorize(pattern);
	mem.memorize(pattern2);
	mem.recall(row_space({ 1,0,1 })).print("Recall");


	return 0;
}