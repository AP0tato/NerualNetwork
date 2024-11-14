#ifndef NETWORK_H

#define NETWORK_H
#include "Layer.hpp"

class Network
{
private:
    std::vector<Layer*> layers;

public:
    Network(std::vector<int> layerSizes);
    std::vector<double> calculateOutputs(std::vector<double> in);
    int classify(std::vector<double> in);
};

#endif