#include <gtest/gtest.h>
#include "Soundex.h"


TEST(SoudexAlgorithmSuite,generateSoundex_given_emptyString_expected_emptyString){

  char soundexCode[5];
  generateSoudex("",soundexCode);
  ASSERT_STREQ(soundexCode, "");
}
