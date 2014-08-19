// define basic types used in AdaInfer.
#ifndef ADAINFER_TYPE_H
#define ADAINFER_TYPE_H

#include <boost/any.hpp>
#include <map>
#include <unordered_map>
#include <iostream>

namespace AdaInfer {
  template<class K, class T> 
  using Map = std::map<K, T>;
  using String = std::string;
  using Any = boost::any;
  using OStream = std::ostream;
  using IStream = std::istream;
  using ptr = std::shared_ptr;
};

