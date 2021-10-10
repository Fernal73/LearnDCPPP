/*
 * CPU.cpp
 * Copyright (C) 2021  <@localhost>
 *
 * Distributed under terms of the MIT license.
 */

#include <CL/sycl.hpp>
#include <iostream>
using namespace sycl;

int main() {
  // Create queue to use the CPU device explicitly
  queue Q{cpu_selector{}};
  std::cout << "Selected device: "
            << Q.get_device().get_info<info::device::name>() << "\n";
  std::cout << " -> Device vendor: "
            << Q.get_device().get_info<info::device::vendor>() << "\n";
  return 0;
}
