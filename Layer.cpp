#include "Layer.hpp"

Layer::Layer(int in, int out) 
{ 
    nodesIn=in; 
    nodesOut=out; 

    weights.reserve(in);
    for(std::vector<double> i : weights)
        i.reserve(out);
    biases.reserve(out);
}

std::vector<double> Layer::calculateOutputs(std::vector<double> in) 
{
    std::vector<double> weightedInputs(nodesOut);
    
    for(int i = 0; i < nodesOut; i++)
    {
        double weightedInput = biases[nodesOut];
        for(int j = 0; j < nodesIn; j++)
        {
            weightedInput += in[j] * weights[j][i];
        }
        weightedInputs[i] = weightedInput;
    }

    return weightedInputs;
}