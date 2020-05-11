#include <iostream>

using namespace std;


int main() {

  string name ="";
  int cant = 0;
  double price = 0.0;

  cout << "ingrese nombre del producto:" <<endl; cin>> name;
  cout << "precio del producto:" << endl; cin>>price;
  cout << "cantidad a comprar:" << endl; cin>> cant;

  cout<<"producto:"<<name<< "| precio:$" <<price<< "| cantidad :"<< cant << "| total: $"<<(price*cant) << endl;

  return 0;  

}