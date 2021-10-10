/*
 * Host.cpp
 * Copyright (C) 2021  <@localhost>
 *
 * Distributed under terms of the MIT license.
 */
#include <CL/sycl.hpp>
#include <iostream>
using namespace sycl;
using namespace std;

int main() { // Create queue to use the host device explicitly queue Q{
             // host_selector{} };
  cout << "Selected device: " << Q.get_device().get_info<info::device::name>()
       << "\n";
  cout << " -> Device vendor: "
       << Q.get_device().get_info<info::device::vendor>() << "\n";
  return 0;
}
