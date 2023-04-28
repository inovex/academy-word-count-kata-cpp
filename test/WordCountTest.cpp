#include "gtest/gtest.h"
#include <string>

#include "WordCount.h"

TEST(WordCountTest, handleInput_OneWord_SaysNumberIsOne)
{
  auto input = "foo";
  auto expectedOutput = "Number of words: 1";
  WordCount wordCount;

  auto output = wordCount.handleInput(input);

  EXPECT_EQ(output, expectedOutput);
}