#include <iostream>

int main()
{
   int width { 5 };    // define variable width and initialize with initial value 5
    std::cout << width; // prints 5
    double height{20};
    std::cout<<height<<'\n';
    std::cout<<height<<" height of it\n";
    
    
    std::cout<<"enter the number\n";
    int x{};
    std::cin>>x;
    std::cout<<"your entered number is :\n"<<x;
    
    
    std::cout<<"enter multiple numbers for x and y\n";
    int y {};
    std::cin>>x>>y;
    std::cout<<"numbers are:"<<x<<'\n'<<y;
    
    std::cout<<"binary\n"<<2+5;
    std::cout<<"ternary\n"<<"talk later";//later
    int nu{5};
    std::cout<<"nunary\n"<<nu<<'\n'<<++nu<<'\n';
    int e{23+23+23};
    std::cout<<e;

    int c{};
  std::cout<<"enter number:\n";
  std::cin>>c;
//   int res{c*2};
  std::cout<<c*2<<'\n';

   return 0;
}
