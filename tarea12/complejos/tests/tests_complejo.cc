#include <gtest/gtest.h>
#include "complejo_funcion.h"

TEST(Complejo, suma) {
    ASSERT_EQ(2, suma(1, 1));
    ASSERT_EQ(5, suma(3, 2));
    ASSERT_EQ(10, suma(7, 3));
}

TEST(Complejo, resta) {
    ASSERT_EQ(3, resta(5, 2));
    ASSERT_EQ(-10, resta(5, 15));
}
