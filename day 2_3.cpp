#include <iostream>

int multiply(int x,int y);

int doubling(){
        
  int c{};
  std::cout<<"enter number:\n";
  std::cin>>c;
//   int res{c*2};
  std::cout<<c*2<<'\n';
    return c*2;

}

int main()
{
    int results{doubling()};
    std::cout<<results<<'\n';
    int k=multiply(3,4);
    std::cout<<k<<'\n';
   return 0;
}
