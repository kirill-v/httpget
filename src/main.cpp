#include "url.hpp"

#include <iostream>

void PrintHelp() { std::cout << "Usage: httpget URL\n"; }

int main(int argc, char** argv) {
  if (argc != 2) {
    PrintHelp();
    return 1;
  }

  httpget::URL url(argv[1]);
  std::cout << "URL: " << url << std::endl;
}