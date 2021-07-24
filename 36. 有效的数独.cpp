#if 0
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	/*����һ�·�������int��32������Ĭ����32λ��
	¥����һ��int��27λ�ֳ����飨row,colume,box��
	���ֱ���ĳ�������Ƿ��Ѿ��ڸ��飬һ��9��int��27�飬
	mux1��mux2,mux3�ֱ��Ӧ��0-9λ��row��, 9-18(colume),18-27(box)��
	ĳ�����ֳ���muxi����������Ӧλ��1��
	��muxi&wow[i] != muxi�ж����λ���Ƿ��Ѿ�����1�ˣ�
	��Ļ�wow[i] | muxi����Ϊ��1������ʣ�µľ��Ǻ�ǰ��һ�����ж��߼���
	�������ⷨ
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
