#include <iostream>
#include <Eigen/Core>
#include <Eigen/Dense>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << "Error: You need one argument." << std::endl;
    return 0;
  }

  const int n = std::stoi(argv[1]); // number of disks

  return 0;
}
