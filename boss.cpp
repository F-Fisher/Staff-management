#include"boss.h"
Boss::Boss(int id, string name, int dId)
{
	this->m_DeptId = dId;
	this->m_Name = name;
	this->m_Id = id;
}
void Boss::showInfo()
{
	cout << "ְ�����  " << this->m_Id
		<< "\tְ������  " << this->m_Name
		<< "\t��λ    " << this->getDeptName()
		<< "\t��λְ��  ������˾" << endl;

}
string Boss::getDeptName()
{

	return string("�ϰ�");

}