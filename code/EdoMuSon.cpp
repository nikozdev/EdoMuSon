#ifndef dEdoMuSon_Cpp
#define dEdoMuSon_Cpp
//headers
#include "EdoMuSon.hpp"
//content
//actions
int main(int vArgC, char **vArgV, char **vEnvi)
{
  auto vStreamIter = std::ostream_iterator<char *>(std::cout, "\n");
	std::copy(vArgV, vArgV + vArgC, vStreamIter);
}//main
#endif//dEdoMuSon_Cpp
