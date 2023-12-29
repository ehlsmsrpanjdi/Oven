#include "Town.h"
#include <iostream>
#include <conio.h>
#include "Player.h"

void Town::WeaponUp(Player& _Player)
{
    // �����е��� �ǵ���� �ϴ� �κ��� ���� ���Դϴ�.

    // 1. �÷��̾��� ������ ��ȭ ���¸� �����ش�.
    // ���� �׷����� �������� ���δ� �����.
    // 1���������� ��ȭ
    //   30���� ������ �α�� ��ȭ�� �ȵȴٰ� �����.
    // 
    // 2���������� ������.

    // 2.��
    // 1������ 10�������� �����ص� ��ȭ��ġ�� �������� �ʽ��ϴ�.
    // 10������ 20�������� �����ϸ� ��ȭ��ġ�� 5�� �������ϴ�.
    // 20������ 30�������� �����ϸ� ��ȭ��ġ�� 0�� �˴ϴ�.
    // ��ȭȮ���� �������
    system("cls");
    printf_s("%d��ŭ ���Ⱑ ��ȭ�Ǿ� �ֽ��ϴ�.\n",_Player.Weapon.GetEquipUp());
    printf_s("1. ���⸦ ��ȭ�Ѵ�.\n");
    printf_s("2. ��ȭ�ҿ��� ������.\n");
    int Select = _getch();

    switch (Select)
    {
    case '1': {
        if (_Player.GetGold() < 1) {
            printf_s("��尡 �����մϴ�");
            _getch();
            return;
        }
        _Player.SetGold(_Player.GetGold() - 1);
        system("cls");
        printf_s("%d��ŭ ���Ⱑ ��ȭ�Ǿ� �ֽ��ϴ�.\n", _Player.Weapon.GetEquipUp());
        _getch();
        _Player.Weapon.UpgradeResult();
        _getch();
    }
        break;
    case '2':
        return;
        break;
    default:
        break;
    }
}

void Town::Heal(Player& _Player)
{
    if (_Player.GetGold() < 3) {
        printf_s("��尡 �����մϴ�");
        _getch();
        return;
    }
    printf_s("�÷��̾�� ġ��Ǿ����ϴ�.");
    _Player.Heal();
    int Select = _getch();
}

void Town::In(Player& _Player)
{
    while (true)
    {
        _Player.StatusRender();
        printf_s("�������� ������ �Ͻðڽ��ϱ�.\n");
        printf_s("%d��ŭ�� ��带 �������Դϴ�.\n", _Player.GetGold());
        printf_s("1. ��ȭ. (1��� �Ҹ�)\n");
        printf_s("2. ġ��. (3��� �Ҹ�)\n");
        printf_s("3. ������.\n");
        int Select = _getch();

        switch (Select)
        {
        case '1':
            WeaponUp(_Player);
            break;
        case '2':
            Heal(_Player);
            break;
        case '3':
            return;
        default:
            break;
        }

        system("cls");
    }

}