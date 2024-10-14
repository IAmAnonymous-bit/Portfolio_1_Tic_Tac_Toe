using namespace std;

class Board
{
    private:
    char moves[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    public:
    void move(int row, int col, char mark);
    char get_mark(int row, int col);
};