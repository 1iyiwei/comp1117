#include <iostream>

int main(int argc, char ** argv){
  using namespace std;
  
  for (int i = 0; i < argc ; ++i)
    cout << i << " " << argv[i] << endl;
  
}
