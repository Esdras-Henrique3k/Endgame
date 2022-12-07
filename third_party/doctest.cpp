#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <expection>
#include "doctest.h"
#include "bboard.hpp"

TEST_CASE("Cadastro"){

SUBCASE("Realizado"){CHECK_NO_THROW(bboard::get_instance()->cadastrar(adm, adm, 123))  }
SUBCASE("Negado"){CHECK_THROW_AS(bboard::get_instance()->cadastrar(adm, adm, 321), std::exception) }

}

TEST_CASE("Login"){

SUBCASE("Realizado"){CHECK(bboard::get_instance()->login())  }
SUBCASE("Negado"){CHECK(bboard::get_instance()->login()) }

}

TEST_CASE("Adicionar rota"){

SUBCASE("Realizado"){CHECK(bboard::get_instance()->adicionarRota(rota("bh", "sp", 12, 2, 20, "executivo")))  }


}

TEST_CASE("Remover rota"){

SUBCASE("Realizado"){CHECK(bboard::get_instance()->adicionarRota(rota("bh", "sp", 12, 2, 20, "executivo")))  }
SUBCASE("Realizado"){CHECK(bboard::get_instance()->removerRota(rota("bh", "sp", 12, 2, 20, "executivo")))  }


}


