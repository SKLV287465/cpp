#include <bits/stdc++.h>
using namespace std;
/**
 * Connect four game, detect if four is done, diagonal and horizontal and vertical
 * infinite plane left and right, zero is middle
 * inputs, take turns
 * Every turn detect is winner exists
 * 
 * O(1) insertion and sparse memory.
 * simple game loop
 * 
 */

using thing = unordered_map<int, int>;
typedef unordered_map<int, int> thingy;
namespace {

}

class ConnectFour {
    // default constructor
public:
    int next_turn() {
        cout << "Player " << turn + 1 << "'s turn. \nEnter positon:\n";
        int position;
        cin >> position;
        if (insert(position)) return turn + 1;
        return 0;

    }

private:
    // 0 to infinity
    // - 1 to neg infinity
    // I also want sparse, so map of vectors

    /**
     * This function takes an insertion and returns
     * 0 if there is no winner
     * 1 if player 1 wins
     * 2 if player 2 wins
     * 
     * This is in order to make the computation of whether there is a winner more efficient.
     */
    int insert(int position) {
        board[position].push_back(turn + 1);
        // check if there is a winner
        if (check_winner(position)) return turn + 1;
        turn = !turn;
        return 0;
    }
    bool check_winner(int position) {
        // do this somehow.
    }
    unordered_map<int, vector<bool>> board;
    bool turn = true;
};

int main() {
    auto game = ConnectFour();
    int result;
    while (!(result = game.next_turn())) {
        cout << "game over, player " << result << " has won!\n";
    }
}