/*
 * Queues.cpp
 * Copyright (C) 2021  <@localhost>
 *
 * Distributed under terms of the MIT license.
 */

#include <CL/sycl.hpp>
// For fpga_selector
#include <CL/sycl/INTEL/fpga_extensions.hpp>
#include <iostream>

using namespace sycl;
int main() {
  queue my_gpu_queue(gpu_selector{});
  queue my_fpga_queue(ext::intel::fpga_selector{});
  std::cout << "Selected device 1: "
            << my_gpu_queue.get_device().get_info<info::device::name>() << "\n";
  std::cout << "Selected device 2: "
            << my_fpga_queue.get_device().get_info<info::device::name>()
            << "\n";
  return 0;
}
