#include <iostream>
#include <vector>


int
main ()
{
  std::vector<int> v;
  for (int i : {6, 4, 3, 2, 1})

  {
    if (i < 5)
    ;
  }

  for (auto val : v)
  {
    std::cout << val << ' ';
  }
  std::cout << "\nHello, World!" << std::endl;

printf ( "This is the one");
  return 0;
}
