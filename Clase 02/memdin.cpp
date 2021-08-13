#include <iostream>
using namespace std;

int main(){
  float *vec = nullptr;

  int tam = 5000000;
  vec = new float[tam];
  if (vec != nullptr){
    int i;
    for(i=0; i<tam; i++){
      vec[i] = 0;
    }
  }
  cout << vec[tam -1] << endl;
  delete vec;
  cout << "Chau!";
  return 0;
}
