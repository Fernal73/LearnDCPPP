/*
 * Simple.cpp
 * Copyright (C) 2021  <@localhost>
 *
 * Distributed under terms of the MIT license.
 */
#include <CL/sycl.hpp>
#include <array>
#include <iostream>

using namespace std;
using namespace sycl;

int main() {
  constexpr int size = 16;
  array<int, size> data;
  // Create queue on implementation-chosen default device
  queue Q;
  // Create buffer using host allocated "data" array
  buffer B{data};
  Q.submit([&](handler &h) {
    accessor A{B, h};
    h.parallel_for(size, [=](auto &idx) { A[idx] = idx; });
  });
  // Obtain access to buffer on the host
  // Will wait for device kernel to execute to generate data
  host_accessor A{B};
  for (int i = 0; i < size; i++)
    cout << "data[" << i << "] = " << A[i] << "\n";
  return 0;
}
