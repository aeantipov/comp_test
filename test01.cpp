#include <iostream>
#include <string>

template <typename ... ArgTypes> 
typename std::enable_if<
          std::is_convertible<std::tuple<typename std::remove_reference<ArgTypes>::type...>, std::tuple<double,double>>::value, std::string>::type 
    check_me(ArgTypes...args)
{
    return "compatible to double, double";
}

int main()
{
   //std::cout << check_me(2., "a") << std::endl; 
   //std::cout << check_me(2., false) << std::endl; 
   std::cout << check_me(2., 1.) << std::endl; 
}
