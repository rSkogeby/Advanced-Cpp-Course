#include <iostream>
#include <vector>



int main() {
  int one = 1;
  int two = 2;
  int three = 3;


  // Capture one and two by value
  [one,two](  ){ std::cout << one << ", " << two << std::endl;  } ();
  
  // Capture all local variables by value
  [=](  ){ std::cout << one << ", " << three << std::endl;  } ();
  
  // Capture all local variables by value, but capture three by ref
  [=, &three](  ){ three = 7; std::cout << one << ", " << three << std::endl;  } ();
  std::cout << "Changed: "<< three << std::endl;

  // Capture all local variables by reference
  [&]( int o, int t ){ std::cout << three << std::endl;  } (one,two);
  
  // Capture all local variables by reference but two and three by value
  [&,two,three]( ){one = 5; std::cout << one << ": " << three << std::endl;  } ();
  return 0;
}
