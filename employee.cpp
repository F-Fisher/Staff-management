#include"employee.h"
Employee::Employee(int id, string name, int dId)
{
	this->m_DeptId = dId;
	this->m_Name = name;
	this->m_Id = id;
}
//��ʾ������Ϣ
void Employee::showInfo()
{
	cout<< "ְ�����  " << this->m_Id
		<< "\tְ������  " << this->m_Name
		<< "\t��λ    " << this->getDeptName()
		<< "\t��λְ��  ��ɾ�������������" << endl;


}
string Employee::getDeptName()
{

	return string("Ա��");

}