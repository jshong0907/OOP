#include "Application.h"



Application::Application()
{
}


Application::~Application()
{
}

void Application::run()
{
	cout << endl << "\t������ �����ϼ���\n";
	cout << "____________________________" << endl; 
	cout << "1.�̽¿�\n2.�̰���\n3.������\n____________________________\n�Է�::";
	choose();
	if (choice == 1)
	{
		Player LeeSeungWoo("�̽¿�", 5, 20, 2, 3, 1, 4, 3);
		cout << "\n�� 2�� �޽� �̽¿츦 �����ϼ̽��ϴ�." << endl;
		cout << "������ ���Ƿ� �����˴ϴ�....";
		cout << "�ƽ��� ��÷~!!!";
		system("cls");
		League league;
		league.clear_team();
		while (true)
		{
			base_interface(LeeSeungWoo);
			choose();
			if (choice == 1)
			{
				system("cls");
				league.match_system(LeeSeungWoo);
				league.add_week();
				system("pause");
			}
			else if (choice == 2)
			{
				training_interface(LeeSeungWoo);
			}
		}
	}
}

void Application::choose()
{
	choice = 0;
	cin >> choice;
}

void Application::base_interface(Player& player)
{
	system("cls");
	cout << "�̸�::" << player.get_name() << endl;
	cout << "____________________________" << endl;
	cout << "���ǵ�::" << player.get_speed() << endl;
	cout << "���¹̳�::" << player.get_stamina() << endl;
	cout << "�н�::" << player.get_pass() << endl;
	cout << "�þ�::" << player.get_sight() << endl;
	cout << "����::" << player.get_defend() << endl;
	cout << "����Ȯ��::" << player.get_shoot_accuarcy() << endl;
	cout << "���Ŀ�::" << player.get_shoot_power() << endl;
	cout << "��::" << player.get_fame() << endl;
	cout << "���� ���::" << player.get_goal() << endl;
	cout << "____________________________" << endl;
	cout << "1. �������" << endl;
	cout << "2. �Ʒ�" << endl;
	cout << "3. ������(Ʃ��)" << endl;
	cout << "4. ������û" << endl;
	cout << "____________________________" << endl;
	cout << "�Է�::";
}

void Application::training_interface(Player & player)
{
	system("cls");
	cout << "�̸�::" << player.get_name() << endl;
	cout << "____________________________" << endl;
	cout << "�Ʒ�����::" << endl;
	cout << "1. 50m �޸���" << endl;
	cout << "2. 45km �޸���" << endl;
	cout << "3. �յ�����" << endl;
	cout << "4. �ָ�����" << endl;
	cout << "5. �����ġ��" << endl;
	cout << "6. �����߱�" << endl;
	cout << "7. ���μ���" << endl;
	cout << "8. �⵵�ϱ�" << endl;
	cout << "____________________________" << endl;
	cout << "�Է�::";
	choose();
	if (choice == 1)
	{
		is_train = possible->probability(practice);
		if (is_train == 1)
		{
			player.add_speed(1);
			cout << "�Ʒ� ����!!!!";
		}
		else
			cout << "ȭ����!!";
	}
	else if (choice == 2)
	{
		is_train = possible->probability(practice);
		if (is_train == 1)
		{
			player.add_stamina(1);
			cout << "�Ʒ� ����!!!!";
		}
		else
			cout << "ȭ����!!";
	}
	else if (choice == 3)
	{
		is_train = possible->probability(practice);
		if (is_train == 1)
		{
			player.add_pass(1);
			cout << "�Ʒ� ����!!!!";
		}
		else
			cout << "ȭ����!!";
	}
	else if (choice == 4)
	{
		is_train = possible->probability(practice);
		if (is_train == 1)
		{
			player.add_sight(1);
			cout << "�Ʒ� ����!!!!";
		}
		else
			cout << "ȭ����!!";
	}
	else if (choice == 5)
	{
		is_train = possible->probability(practice);
		if (is_train == 1)
		{
			player.add_defend(1);
			cout << "�Ʒ� ����!!!!";
		}
		else
			cout << "ȭ����!!";
	}
	else if (choice == 6)
	{
		is_train = possible->probability(practice);
		if (is_train == 1)
		{
			player.add_shoot_accuracy(1);
			cout << "�Ʒ� ����!!!!";
		}
		else
			cout << "ȭ����!!";
	}
	else if (choice == 7)
	{
		is_train = possible->probability(practice);
		if (is_train == 1)
		{
			player.add_shoot_power(1);
			cout << "�Ʒ� ����!!!!";
		}
		else
			cout << "ȭ����!!";
	}
	else if (choice == 8)
	{
		is_train = possible->probability(50);
		if (is_train == 1)
		{
			practice += 2;
			cout << "�αٵα�";
		}
		else
			cout << "�⵵��;;";
	}
	Sleep(1000);
}
