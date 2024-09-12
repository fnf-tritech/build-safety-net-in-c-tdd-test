#include <gtest/gtest.h>
#include "Soundex.h"


TEST(SoudexAlgorithmSuite,generateSoundex_given_emptyString_expected_emptyString){

  char soudexCode[5];
  generateSoudex("",soundexCode);
  ASSERT_STREQ(soudexCode, "");
}
