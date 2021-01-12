#include <gtest/gtest.h>
#include "fechas_funcion.h"

TEST(Fecha, add) {
    ASSERT_EQ(true, leap(2028));
    ASSERT_EQ(false, leap(2140));}

TEST(Fecha, sub) {
    ASSERT_EQ(false, operator<(5, 2));
    ASSERT_EQ(true, operator(5, 15));}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();}