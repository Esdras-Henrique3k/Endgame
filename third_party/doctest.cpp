#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <expection>
#include "doctest.h"
#include "bboard.hpp"

TEST_CASE("Cadastro"){

SUBCASE("Realizado"){CHECK_THROW(bboard::get_instance()->cadastrar(adm, adm, 123))  }
SUBCASE("Negado"){CHECK_THROW_AS(bboard::get_instance()->cadastrar(adm, adm, 321), std::exception) }

}


