
#pragma once//防止头文件重复包含
#include<iostream>
#include"worker.h"
#include"manager.h"
#include"employee.h"
#include"boss.h"
#include<fstream>
#define FILENAME "empFile.txt"
using namespace std;
class WorkerManager
{
public:
	WorkerManager();


	//展示菜单
	void Show_Menu();

	//退出系统
	void ExitSystem();

	//记录职工人数
	int m_EmpNum;

	//职工数组指针
	Worker** m_EmpArray;

	//添加员工
	void Add_Emp();

	//保存文件
	void save();

	//判断文件是否为空
	bool m_FileIsEmpty;

	//统计人员函数
	int get_EmpNum();

	//初始化员工
	void init_Emp();

	//显示职工
	void Show_Emp();

	//判断职工是否存在
	int IsExist(int id);

	//删除职工
	void Del_Emp();

	//修改职工
	void Mod_Emp();

	//查找员工
	void Find_Emp();

	//排序员工
	void Sort_Emp();

	//清空数据
	void Clean_File();


	~WorkerManager();




};