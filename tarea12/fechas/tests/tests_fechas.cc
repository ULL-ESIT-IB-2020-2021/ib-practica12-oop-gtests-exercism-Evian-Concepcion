#include <gtest/gtest.h>
#include "fechas_funcion.h"

TEST(Fecha, suma){
    ASSERT_EQ(true, leap(3, 1));
    ASSERT_EQ(false, leap(2, 2));
    
}

TEST(Fecha, resta){
    ASSERT_EQ(false, resta(5, 2));
    ASSERT_EQ(true, resta(5, 15));
}