#include<iostream>
using namespace std;
//time系统时间头文件包含
#include<ctime>

int main() {
	//添加随机数种子，作用利用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned)time(NULL));


	int num = rand() % 100 + 1;//随机生成0~99的数字
	/*cout << num << endl;*/

	int val = 0;//玩家输入数字
	

	while (1)
	{
		cin >> val;

		if (val > num) {

			cout << "猜测过大" << endl;
		}
		else if (val < num) {

			cout << "猜测过小" << endl; 
		
		}
		else { 

			cout << "恭喜你猜对了" << endl;

			break;//退出游戏
		}
	}



	system("pause");
	return 0;
}