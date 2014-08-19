#ifndef ADAINFER_MODEL_H
#define ADAINFER_MODEL_H

#include <boost/any.hpp>

#include "type.h"
#include "data.h"

namespace AdaInfer {
  using ConfigMap = Map<String, Any>; 

  // interface as a sample.
  struct Sample {
  public:
    ptr<Example> example;
  };

  // interface as an inference model. 
  // assumes the model has already trained. 
  struct Model {
  public:
    // init with a config map, including the params and data.
    Model(ConfigMap vm);
    
    // IO.
    friend OStream& operator<<(OStream& os, const Model& model);  
    friend IStream& operator>>(IStream& is, Model& model); 
    
    // sample *sample* using kernel *choice*.
    void sample(ptr<Sample> sample, int choice);

    // score a *sample*
    void score(ptr<Sample> sample);
  };
}

#endif
