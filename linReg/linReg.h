#ifndef linRegNN
#define linRegNN

class Perceptron{
public:
  Perceptron(int, int);   //initial arguments will be W and b, normally distr.
  void updateParams(float, float);
  void calcOut();
  float in;
  float out;
private:
  float W;
  float b;
}

#endif
