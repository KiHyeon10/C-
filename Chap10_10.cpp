#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

class Country {
	std::string Coun;
	std::string City;
public:
	std::string getCoun() {
		return this->Coun;
	}
	std::string getCity() {
		return this->City;
	}
	void set(std::string Coun, std::string City) {
		this->Coun = Coun;
		this->City = City;
	}
};

std::vector<Country> Info;

int main() {
	int Game_Start = 0;
	Country Country_name;
	Country_name.set("�ѱ�", "����");
	Info.push_back(Country_name);
	Country_name.set("�Ϻ�", "����");
	Info.push_back(Country_name);
	Country_name.set("�߱�", "����¡");
	Info.push_back(Country_name);
	Country_name.set("ĳ����", "��Ÿ��");
	Info.push_back(Country_name);
	Country_name.set("���þ�", "��ũ��");
	Info.push_back(Country_name);

	std::cout << "***** ������ ���� ���߱� ������ �����մϴ�. *****" << std::endl;
	while (1) {
		std::cout << "���� �Է�: 1, ����: 2, ����: 3 >> ";
		std::cin >> Game_Start;
		if (Game_Start == 1) {
			std::cout << "���� " << Info.size() << "���� ���� �ԷµǾ� �ֽ��ϴ�." << std::endl;
			std::cout << "����� ������ �Է��ϼ���(no no �̸� �Է³�)" << std::endl;
			std::string Coun, City;
			while (1) {
				int i = 0;
				std::cout << Info.size() << ">>";
				std::cin >> Coun >> City;
				int flag = 0;
				for (i = 0; i < Info.size(); i++) {
					if (Info.at(i).getCoun() == Coun) {
						std::cout << "already exists !!" << std::endl;
						flag = 1;
						break;
					}
				}
				if (Coun == "no" && City == "no")
					break;
				if (flag == 0) {
					//std::cout << Coun << City << std::endl;
					Country_name.set(Coun, City);
					Info.push_back(Country_name);
				}
				flag = 0;
			}
		}
		else if (Game_Start == 2) {
			std::cout << Info.size() << std::endl;
			while (1) {
				srand((unsigned)time(0));
				int n = rand() % Info.size();
				std::cout << Info.at(n).getCoun() << "�� ������? ";
				std::string Ans;
				std::cin >> Ans;
				if (Info.at(n).getCity() == Ans)
					std::cout << "correct !!" << std::endl;
				else if (Ans == "exit")
					break;
				else
					std::cout << "NO !!" << std::endl;
			}
		}
		else if (Game_Start == 3)
			break;
	}
}