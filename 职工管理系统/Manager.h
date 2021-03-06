/* file_name: Manager.h
** author: Wei Li
** date: 2020-06-16
** Copyright © 2020 https://weili_yzzcq.gitee.io/, All Rights Reserved.
** Copyright © 2020 https://2694048168.github.io/, All Rights Reserved.
*/

#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
#include "Worker.h"
using namespace std;

// 经理
class Manager :public Worker
{
public:

	// 显示所有信息
	void showInfo();

	// 获取岗位名称
	string getDeptName();

	// 构造函数
	Manager(int id, string name, int dId);

	// 析构函数
	~Manager();
	
};

#endif // MANAGER_H