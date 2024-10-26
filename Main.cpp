#include <iostream>

#define E 2.71828182845
#define normalize(f) 1/pow(E, f)

class Layer
{
private:
    int nodesIn, nodesOut;
    float *weights;
    float *biases;

public:
    Layer(int in, int out) 
    { 
        nodesIn=in; nodesOut=out; 
    }
    double** calculateOutputs(double *in[]) 
    {
        double *weightedInputs[nodesOut];
        
    }
};

extern "C"
{
}