#include "Network.hpp"

Network::Network(std::vector<int> layerSizes)
{
    layers.resize(layerSizes.size()-1);
    for(int i = 0; i < layerSizes.size()-1; i++)
    {
        layers[i] = new Layer(layerSizes[i], layerSizes[i+1]);
    }
}

std::vector<double> Network::calculateOutputs(std::vector<double> in)
{
    for(Layer* i : layers)
    {
        in = i->calculateOutputs(in);
    }
    return in;
}

int Network::classify(std::vector<double> in)
{
    std::vector<double> out = calculateOutputs(in);
    int max=0, index=0;
    for(int i = 0; i < out.size(); i++)
    {
        if(out[i]>max)
        {
            max = out[i];
            index = i;
        }
    }

    return index;
}