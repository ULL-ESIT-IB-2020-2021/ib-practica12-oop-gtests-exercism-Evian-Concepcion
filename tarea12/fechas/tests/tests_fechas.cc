#include <gtest/gtest.h>
#include "fechas_funcion.h"

TEST(Complejo, suma){
    ASSERT_EQ(2, suma(3, 1));
    ASSERT_EQ(5, suma(2, 2));
    ASSERT_EQ(10, suma(5, 4));
}

TEST(Complejo, resta){
    ASSERT_EQ(3, resta(5, 2));
    ASSERT_EQ(-10, resta(5, 15));
}