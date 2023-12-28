#include "StatusUnit.h"
#include <iostream>
#include "MyMath.h"

void StatusUnit::SetName(const char* _Name)
{
	int Index = 0;
	while (_Name[Index]) {
		Name[Index] = _Name[Index];
		++Index;
	}
}

void StatusUnit::StatusRender()
{
	// �޸𸮿� ���õ� ��Ȯ�� ������ ���� ��������
	// �ڽ��� �ɹ��Լ����� �ڽ��� �ɹ������� �����Ӱ� ����� �����մϴ�.
	int Size = printf_s("%s ", Name);
	for (int i = 0; i < 50 - Size; i++)
	{
		printf_s("-");
	}

	printf_s("\n");
	printf_s("���ݷ� %d~%d\n", GetMinAtt(), GetMaxAtt());
	printf_s("ü�� %d\n", Hp);

	for (int i = 0; i < 50; i++)
	{
		printf_s("-");
	}

	printf_s("\n");
}

int StatusUnit::GetDamage()
{
	SetPresentDamage((rand() % MinAtt + 1) + (MaxAtt - MinAtt));
	return GetpresentDamage();
}

int StatusUnit::GetSpeed()
{
	return rand() % Speed;
}