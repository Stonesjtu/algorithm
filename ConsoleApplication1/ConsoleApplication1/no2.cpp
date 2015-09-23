#include "stdafx.h"


using namespace std;


class Solution {
public:
	int maxProfit(vector<int>& prices) {
		if (prices.size() <= 1)
			return 0;
		size_t iter1 = 0, iter2 = 0, iter = 1;
		/**profit1: bigger profit
		  *profit2: smaller profit
		  *
		  */
		int increase = 0, profittmp = 0, profit1 = 0,profit2=0;
		bool decrease = false;
		while (iter!=prices.size())
		{
			//�ڶ���۸����,�ٳ��а���
			increase = prices[iter] - prices[iter - 1];
			if (increase > 0)
			{
				iter2 = iter;
				profittmp += increase;
				decrease = false;
			}
			//һ�������½����飬�ж�֮ǰ���εĽ�����Ƚ�һ�εĽ���˭���������
			if (increase < 0 || iter == prices.size() - 1)
			{
				iter1 = iter;
				if (!decrease)
				{
					if (profittmp > profit2)
						swap(profit2, profittmp);
					if (profit2 > profit1)
						swap(profit1, profit2);
					profittmp = 0;

					decrease = true;
				}
				
			}
			iter++;
		}
		return profit1+profit2;


	}
};

// int main()
// {
// 	solution s;
// 	vector<int> input({ 1,2,4,2,5,7,2,4,9,0 });
// 	cout << s.maxprofit(input);
// }