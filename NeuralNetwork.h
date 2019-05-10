#include <iostream>
#include <vector>

using namespace std;

class NeuralNetwork
{
private:
	int numInput, numOutput, numLayers;
	vector<int> numEachLayer;
	vector<vector<vector<vector<float>>>> members;

public:
	vector<vector<vector<float>>> getTableOf(int index);

	NeuralNetwork();
	NeuralNetwork(int input,vector<int> innerNodes,int output);

	void init(int numNetworks);
	vector<float> getOutputOfMember(int index,vector<float> input);
	void nextGen(bool* toNext);
};