#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "bboard.hpp"

TEST_CASE("Cadastro"){

SUBCASE("Realizado"){CHECK_EQ(Triangle(5,3,3).getPerimeter()==11);}
SUBCASE("Negado"){CHECK_EQ(Triangle(5,4,3).getPerimeter()==12);}

}

TEST_CASE("Login"){

SUBCASE("Realizado"){CHECK_EQ(Triangle(5,3,3).getArea()==4);}
SUBCASE("Negado"){CHECK_EQ(Triangle(5,4,3).getArea()==6);}

}

TEST_CASE("Rota"){

SUBCASE("Adicionar"){CHECK_EQ(Triangle(5,3,3).getKind()==Kind::ISOSCELES);}
SUBCASE("Remover"){CHECK_EQ(Triangle(3,3,3).getKind()==Kind::EQUILATERAL);}

}
