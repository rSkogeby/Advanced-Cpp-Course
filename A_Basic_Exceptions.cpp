#include <iostream>

void usesMightGoWrong();
void mightGoWrong();

int main() {

  try {
    usesMightGoWrong();
  } catch(int e) {
    std::cout << "Error code: " << e << std::endl;
  } catch(char const* e) {
    std::cout << "Error message: " << e << std::endl;
  } catch(std::string &e){
    std::cout << "String error message: " << e << std::endl;
  }
  return 0;
}

void usesMightGoWrong(){
  mightGoWrong();
}

void mightGoWrong() {
  
  bool error1 = false;
  bool error2 = true;

  if(error1) {
    throw "Something went wrong";
  }
  
  if(error2) {
    throw std::string("Something else went wrong");
  }

}
