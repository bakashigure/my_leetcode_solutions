#if 0
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	/*解释一下方法二：int在32机器上默认是32位，
	楼主将一个int低27位分成三组（row,colume,box）
	来分别标记某个数字是否已经在该组，一共9个int共27组，
	mux1，mux2,mux3分别对应低0-9位（row）, 9-18(colume),18-27(box)，
	某个数字出现muxi依次则在相应位置1，
	用muxi&wow[i] != muxi判断这个位置是否已经被置1了，
	否的话wow[i] | muxi将该为置1，……剩下的就是和前面一样的判断逻辑了
	评论区解法
	*/

	bool isValidSudoku(vector<vector<char>>& board)
	{
		int m[9] = { 0 };
		int row, col, box,box_index;
		for (int i = 0; i < 9; ++i)
		{
			for (int j = 0; j < 9; ++j)
			{
				if (board[i][j] == '.')
					continue;
				
				box_index = (i / 3) * 3 + j / 3;
				row = 1 << board[i][j] - '1';
				col = 1 << 9 << board[i][j] - '1';
				box = 1 << 9 << 9 << board[i][j] - '1';

				if ((m[i] & row) != row && (m[j] & col) != col && (m[box_index] & box) != box)
				{
					m[i] = m[i] | row;
					m[j] = m[j] | col;
					m[box_index] = m[box_index] | box;
				}
				else return false;


			}
		}
		return true;
		
	}
};

int main()
{

}

#endif
