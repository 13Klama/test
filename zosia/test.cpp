#include <iostream>
using namespace std;

int main()
{
  cout<<"Ile masz lat? "; //standardowe użycie cout
  int wiek; //tworzymy zmienną int o nazwie wiek
  cin>>wiek; //wczytujemy z klawiatury wartość liczbową do zmiennej wiek
  cout<<"Masz "<<wiek<<" lat"; //wypisujemy wiek użytkownika

  return 0;
}