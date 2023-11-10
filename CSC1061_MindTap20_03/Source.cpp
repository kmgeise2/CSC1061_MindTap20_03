// CSC1061_MindTap20_02
// Depth First Traversal and Breadth First Traversal
#include <iostream>
#include <fstream>
#include "graphType.h" 
#include "weightedGraph.h"

using namespace std;

int main()
{
	weightedGraphType shortestPathGraph(50);

	shortestPathGraph.createWeightedGraph();

	shortestPathGraph.shortestPath(0);

	shortestPathGraph.printShortestDistance(0);

	cout << endl;

	return 0;

}