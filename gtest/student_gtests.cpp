#include <gtest/gtest.h>

#include "dijkstras.h"
#include "ladder.h"

TEST(Example, ShouldPass) {
  EXPECT_TRUE(true);
}

TEST(Dijkstras, SmallFile) {
  Graph G;
  file_to_graph("src/small.txt", G);
  vector<int> previous;
  for (int i : dijkstra_shortest_path(G, 0, previous)) {
    cout << i << endl;
  }

}

/*
TEST(EditDistance, CatToDog) {
  EXPECT_TRUE(edit_distance_within("cat", "dog", 3));
  EXPECT_TRUE(!edit_distance_within("cat", "dog", 2));
}

TEST(WordLadder, CatToDog) {
  set<string> word_list = {"cat", "dog", "cot", "cog", "dog"};
  EXPECT_TRUE(generate_word_ladder("cat", "dog", word_list).size() == 4);
}

TEST(WordLadder, ExtendString) {
  set<string> word_list = {"cat", "cats", "catss", "catsss", "catssss"};
  EXPECT_TRUE(generate_word_ladder("cat", "catssss", word_list).size() == 5);
}

TEST(WordLadder, ShrinkString) {
  set<string> word_list = {"cat", "c", "ca"};
  EXPECT_TRUE(generate_word_ladder("cat", "c", word_list).size() == 3);
}
*/