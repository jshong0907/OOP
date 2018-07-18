#include "Application.h"



Application::Application()
{
}


Application::~Application()
{
}

void Application::run()
{
	cout << endl << "\t선수를 선택하세요\n";
	cout << "____________________________" << endl; 
	cout << "1.이승우\n2.이강인\n3.김지완\n____________________________\n입력::";
	choose();
	if (choice == 1)
	{
		Player LeeSeungWoo("이승우", 5, 20, 2, 3, 1, 4, 3);
		cout << "\n제 2의 메시 이승우를 선택하셨습니다." << endl;
		cout << "새팀은 임의로 배정됩니다....";
		cout << "아스날 당첨~!!!";
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
	cout << "이름::" << player.get_name() << endl;
	cout << "____________________________" << endl;
	cout << "스피드::" << player.get_speed() << endl;
	cout << "스태미나::" << player.get_stamina() << endl;
	cout << "패스::" << player.get_pass() << endl;
	cout << "시야::" << player.get_sight() << endl;
	cout << "수비::" << player.get_defend() << endl;
	cout << "슛정확도::" << player.get_shoot_accuarcy() << endl;
	cout << "슛파워::" << player.get_shoot_power() << endl;
	cout << "명성::" << player.get_fame() << endl;
	cout << "나의 골수::" << player.get_goal() << endl;
	cout << "____________________________" << endl;
	cout << "1. 경기진행" << endl;
	cout << "2. 훈련" << endl;
	cout << "3. 아이템(튜터)" << endl;
	cout << "4. 이적요청" << endl;
	cout << "____________________________" << endl;
	cout << "입력::";
}

void Application::training_interface(Player & player)
{
	system("cls");
	cout << "이름::" << player.get_name() << endl;
	cout << "____________________________" << endl;
	cout << "훈련종목::" << endl;
	cout << "1. 50m 달리기" << endl;
	cout << "2. 45km 달리기" << endl;
	cout << "3. 왕따놀이" << endl;
	cout << "4. 멀리보기" << endl;
	cout << "5. 몸통박치기" << endl;
	cout << "6. 골대맞추기" << endl;
	cout << "7. 골대부수기" << endl;
	cout << "8. 기도하기" << endl;
	cout << "____________________________" << endl;
	cout << "입력::";
	choose();
	if (choice == 1)
	{
		is_train = possible->probability(practice);
		if (is_train == 1)
		{
			player.add_speed(1);
			cout << "훈련 성공!!!!";
		}
		else
			cout << "화이팅!!";
	}
	else if (choice == 2)
	{
		is_train = possible->probability(practice);
		if (is_train == 1)
		{
			player.add_stamina(1);
			cout << "훈련 성공!!!!";
		}
		else
			cout << "화이팅!!";
	}
	else if (choice == 3)
	{
		is_train = possible->probability(practice);
		if (is_train == 1)
		{
			player.add_pass(1);
			cout << "훈련 성공!!!!";
		}
		else
			cout << "화이팅!!";
	}
	else if (choice == 4)
	{
		is_train = possible->probability(practice);
		if (is_train == 1)
		{
			player.add_sight(1);
			cout << "훈련 성공!!!!";
		}
		else
			cout << "화이팅!!";
	}
	else if (choice == 5)
	{
		is_train = possible->probability(practice);
		if (is_train == 1)
		{
			player.add_defend(1);
			cout << "훈련 성공!!!!";
		}
		else
			cout << "화이팅!!";
	}
	else if (choice == 6)
	{
		is_train = possible->probability(practice);
		if (is_train == 1)
		{
			player.add_shoot_accuracy(1);
			cout << "훈련 성공!!!!";
		}
		else
			cout << "화이팅!!";
	}
	else if (choice == 7)
	{
		is_train = possible->probability(practice);
		if (is_train == 1)
		{
			player.add_shoot_power(1);
			cout << "훈련 성공!!!!";
		}
		else
			cout << "화이팅!!";
	}
	else if (choice == 8)
	{
		is_train = possible->probability(50);
		if (is_train == 1)
		{
			practice += 2;
			cout << "두근두근";
		}
		else
			cout << "기도는;;";
	}
	Sleep(1000);
}
