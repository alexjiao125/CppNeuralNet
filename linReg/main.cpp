#include "linReg.h"

//main takes one argument which is number of ticks you want to loop for
int main(int argc, char** argv){
  int ticks = atoi(argv[1]);
  float xin[8] = {1, 2, 3, 4, 5, 6, 7, 8};
  float yin[8];// = {3, 5, 7, 9, 11, 13, 15, 17};
  prepareData(xin, yin);

  changeLearnRate(.01);
  Perceptron neuron1(normalDistr(2,.5), normalDistr(2, .2));
  cout<<'W'<<'\t'<<'b'<<endl;

  for(int i = 0; i < ticks; i++){
    neuron1.in = xin[i%8];
    neuron1.calcOut();
    neuron1.updateParams(partialW(xin[i%8], yin[i%8], neuron1.out), partialB(yin[i%8], neuron1.out));
    if(i%256 == 0){
      cout<<neuron1.getW()<<'\t'<<neuron1.getb()<<endl;
      //changeLearnRate(learnRate/2);
    }
  }

  return 0;
}
