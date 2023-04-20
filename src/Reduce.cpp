/**
 * @file Reduce.cpp
 * @author: Varis Nijat
 * CSE 687 Object Oriented Design in C++
 * Syracuse University
 * Project MapReduce
 * Copyright [2023]
 **/

#include "Reduce.h"

#include <string>
#include <vector>

using std::string;
using std::vector;

/**
 * Class Constructor specifying output directory
 */
Reduce::Reduce(string output_dir) { outputDir = output_dir; }

void Reduce::redue(string key, vector<int> intIterator) {
  // Sum all the values in the list
  int sum = 0;
  for (auto i = intIterator.begin(); i != intIterator.end(); i++) {
    sum += *i;
  }

  export_result(key, sum);
}

void Reduce::export_result(string key, int value) {}
