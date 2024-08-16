#include <iostream>

using namespace std;
class Sudoku {
	private:
		int grid[9][9];
	public:
		Sudoku() {
			for(int i = 0; i < 9; i++) {
				for(int j = 0; j < 9; j++) {
					grid[i][j] = 0;
				}
			}
		}

		int print() {
			for(int i = 0; i < 9; i++) {
				for(int j = 0; j < 9; j++) {
					cout << grid[i][j] << " ";
				}
				cout << endl;
			}
			return 0;
		}
};

int main() {
	Sudoku mySudoku = Sudoku();
	mySudoku.print();
}
